#ifndef DEUR_H
#define DEUR_H

#include <QPaintDevice>
#include "slot.h"

class Deur {
public:
    virtual ~Deur(){}
    Deur(int, int, unsigned int);
    virtual void open();
    virtual void sluit();
    virtual void teken(QPaintDevice *);
    virtual bool isDeurOpen();
    virtual unsigned int deurLengte();
    virtual int krijgx();
    virtual int krijgy();
    virtual void zetStatus(bool);
    virtual Slot* krijgSlot(int);
    virtual void addSlot(Slot*);
    virtual int aantalSloten();
private:
    bool status;
    int x_coordinaat;
    int y_coordinaat;
    unsigned int lengte;
    Slot *slot;
    std::list<Slot*> sloten;
};

#endif // DEUR_H
