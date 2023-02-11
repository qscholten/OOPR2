#ifndef CODESLOT_H
#define CODESLOT_H

#include "slot.h"

class CodeSlot: public Slot {
public:
    CodeSlot(int);
    void ontgrendel(std::string) override;
    void vergrendel() override;
    bool isVergrendeld() override;
private:
    int code;
    bool vergrendeld;
};

#endif // CODESLOT_H
