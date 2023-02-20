#include "deur.h"

#include <QPainter>

Deur::Deur(int x, int y, unsigned int lengte): x_coordinaat(x), y_coordinaat(y), lengte(lengte), status(false) {
}

void Deur::open() {
    if (sloten.empty()) {
        status = true;
        return;
    }
    int ontgrendeld = 0;
    for (int i=0;i<sloten.size();i++) {
        if (!krijgSlot(i)->isVergrendeld()) {
            ontgrendeld++;
        }
    }
    if (ontgrendeld == sloten.size()) {
        status = true;
    }
}

void Deur::sluit() {
    status = false;
    if (sloten.size() != 0) {
        for (int i=0;i<sloten.size();i++) {
            krijgSlot(i)->vergrendel();
            krijgSlot(i)->paintStatus();
        }
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

Slot* Deur::krijgSlot(int index) {
    std::list<Slot*>::iterator it = sloten.begin();
    for (int i = 0; i<index; i++) {
        ++it;
    }
    return *it;
}

void Deur::addSlot(Slot* x) {
    sloten.push_back(x);
}

int Deur::aantalSloten() {
    return sloten.size();
}



