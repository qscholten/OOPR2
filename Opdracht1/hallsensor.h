#ifndef HALLSENSOR_H
#define HALLSENSOR_H

#include "sensor.h"

class HallSensor: public Sensor {
public:
    HallSensor(int , int);
    virtual void teken(QPaintDevice *) override;
};

#endif // HALLSENSOR_H
