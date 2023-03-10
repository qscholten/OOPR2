#include "schuifdeur.h"
#include <QPainter>

SchuifDeur::SchuifDeur(int x, int y, unsigned int lengte, Sensor *sensor): Deur(x,y,lengte), hallsensor(sensor) {
    hallsensor->activeer();
}
SchuifDeur::SchuifDeur(int x, int y, unsigned int lengte, Sensor *sensor, Slot *slot): Deur(x,y,lengte, slot), hallsensor(sensor) {
    hallsensor->activeer();
}

void SchuifDeur::sluit() {
    if (!hallsensor->isGeactiveerd()) {
        this->zetStatus(false);
        hallsensor->activeer();
        if (krijgSlot() != nullptr) {
            krijgSlot()->vergrendel();
        }
    }
}

void SchuifDeur::teken(QPaintDevice *tp) {
    QPainter p(tp);
    p.setBrush(Qt::SolidPattern);
    p.setBrush(Qt::black);
    QPen pen(Qt::black,2,Qt::SolidLine, Qt::RoundCap, Qt::RoundJoin);
    p.setPen(pen);

    if (isDeurOpen()) {
        p.drawLine(this->krijgx(), this->krijgy(), this->krijgx(), this->krijgy()+ this->deurLengte());
    }
    else {
        p.drawLine(this->krijgx(), this->krijgy(), this->krijgx(), this->krijgy() - this->deurLengte());
    }
}
