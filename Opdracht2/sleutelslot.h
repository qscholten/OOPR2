#ifndef SLEUTELSLOT_H
#define SLEUTELSLOT_H

#include "slot.h"

class SleutelSlot: public Slot {
public:
    SleutelSlot(std::string);
    void ontgrendel(std::string) override;
    void vergrendel() override;
    bool isVergrendeld() override;
private:
    std::string sleutel;
    bool vergrendeld;
};

#endif // SLEUTELSLOT_H
