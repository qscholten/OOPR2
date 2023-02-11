#include "deur.h"

#include <QPainter>

Deur::Deur(int x, int y, unsigned int lengte): x_coordinaat(x), y_coordinaat(y), lengte(lengte), status(false), slot(nullptr) {
}

Deur::Deur(int x, int y, unsigned int lengte, Slot *slot): x_coordinaat(x), y_coordinaat(y), lengte(lengte), slot(slot), status(false) {
}

void Deur::open() {
    if (slot == nullptr){
        status = true;
        return;
    }
    if (!slot->isVergrendeld()) {
        status = true;
    }
}

void Deur::sluit() {
    status = false;
    if (slot != nullptr) {
        slot->vergrendel();
    }
}

void Deur::teken(QPaintDevice *tp) {
    QPainter p(tp);
    p.setBrush(Qt::SolidPattern);
    p.setBrush(Qt::black);
    QPen pen(Qt::black,2,Qt::SolidLine, Qt::RoundCap, Qt::RoundJoin);
    p.setPen(pen);

    if (isDeurOpen()) {
        p.drawLine(x_coordinaat, y_coordinaat, x_coordinaat-lengte, y_coordinaat);
    }
    else {
        p.drawLine(x_coordinaat, y_coordinaat, x_coordinaat, y_coordinaat+lengte);
    }
}

bool Deur::isDeurOpen() {
    return status;
}

unsigned int Deur::deurLengte() {
    return lengte;
}

int Deur::krijgx() {
    return x_coordinaat;
}

int Deur::krijgy() {
    return y_coordinaat;
}

void Deur::zetStatus(bool x) {
    status = x;
}

Slot* Deur::krijgSlot() {
    return slot;
}



