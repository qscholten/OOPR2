#ifndef SLOT_H
#define SLOT_H

#include <stdlib.h>
#include <string>

class Slot {
public:
    virtual ~Slot(){};
    virtual void ontgrendel(std::string) = 0;
    virtual void vergrendel()=0;
    virtual bool isVergrendeld()=0;
};

#endif // SLOT_H
