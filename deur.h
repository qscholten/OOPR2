#ifndef DEUR_H
#define DEUR_H

#include <QPaintDevice>

class Deur {
public:
    Deur(int, int, unsigned int);
    virtual ~Deur();
    virtual void open();
    virtual void sluit();
    virtual void teken(QPaintDevice *);
    virtual bool isDeurOpen();
    virtual unsigned int deurLengte();
    virtual int krijgx();
    virtual int krijgy();
    virtual void zetStatus(bool);

private:
    bool status;
    int x_coordinaat;
    int y_coordinaat;
    unsigned int lengte;
};

#endif // DEUR_H
