#include "hallsensor.h"
#include <QPaintDevice>
#include <QPainter>
#include <QPen>

HallSensor::HallSensor(int x, int y): Sensor(x,y) {
}

void HallSensor::teken(QPaintDevice* tp) {

        QPainter painter(tp);
        QColor kleur;

        painter.setBrush(Qt::SolidPattern);

        if (this->isGeactiveerd()) {
            kleur = Qt::blue;
        }
        else {
            kleur = Qt::yellow;
        }
        painter.setBrush(kleur);
        QPen pen(kleur, 2, Qt::SolidLine, Qt::RoundCap, Qt::RoundJoin);
        painter.setPen(pen);
        painter.drawEllipse(this->coordinaten().first, this->coordinaten().second, 20, 20);
}
