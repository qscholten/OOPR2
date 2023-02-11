#include "draaideur.h"
#include <QPainter>

DraaiDeur::DraaiDeur(int x, int y, unsigned int lengte, bool liggend): Deur(x,y, lengte), liggend(liggend) {
}

DraaiDeur::DraaiDeur(int x, int y, unsigned int lengte, bool liggend, Slot *slot): Deur(x,y, lengte, slot), liggend(liggend) {
}

void DraaiDeur::teken(QPaintDevice *tp) {
    QPainter p(tp);
    p.setBrush(Qt::SolidPattern);
    p.setBrush(Qt::black);
    QPen pen(Qt::black,2,Qt::SolidLine, Qt::RoundCap, Qt::RoundJoin);
    p.setPen(pen);

    if(liggend) {
        if (isDeurOpen()) {
            p.drawLine(this->krijgx(), this->krijgy(), this->krijgx(), this->krijgy()-this->deurLengte());
        }
        else {
            p.drawLine(this->krijgx(), this->krijgy(), this->krijgx()-this->deurLengte(), this->krijgy());
        }
    }
    else {
        if (isDeurOpen()) {
            p.drawLine(this->krijgx(),this->krijgy(), this->krijgx()+this->deurLengte(), this->krijgy());
        }
        else {
            p.drawLine(this->krijgx(), this->krijgy(), this->krijgx(), this->krijgy()-this->deurLengte());
        }
    }
}
