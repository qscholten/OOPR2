#ifndef DEUR_H
#define DEUR_H

#include <QPaintDevice>
#include "slot.h"

class Deur {
public:
    virtual ~Deur(){}
    Deur(int, int, unsigned int);
    Deur(int, int, unsigned int, Slot*);
    virtual void open();
    virtual void sluit();
    virtual void teken(QPaintDevice *);
    virtual bool isDeurOpen();
    virtual unsigned int deurLengte();
    virtual int krijgx();
    virtual int krijgy();
    virtual void zetStatus(bool);
    virtual Slot* krijgSlot();

private:
    bool status;
    int x_coordinaat;
    int y_coordinaat;
    unsigned int lengte;
    Slot *slot;
};

#endif // DEUR_H
