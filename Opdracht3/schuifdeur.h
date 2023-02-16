#ifndef SCHUIFDEUR_H
#define SCHUIFDEUR_H

#include "deur.h"
#include "sensor.h"
#include <QPaintDevice>

class SchuifDeur: public Deur {
public:
    SchuifDeur(int, int, unsigned int, Sensor*);
    virtual void sluit() override;
    virtual void teken(QPaintDevice *) override;
private:
    Sensor *hallsensor;
};

#endif // SCHUIFDEUR_H
