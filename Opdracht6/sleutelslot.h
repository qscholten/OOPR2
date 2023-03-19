#ifndef SLEUTELSLOT_H
#define SLEUTELSLOT_H

#include "slot.h"

class SleutelSlot: public Slot {
public:
    SleutelSlot(std::string, QLineEdit*);
    void ontgrendel(std::string) override;
    void vergrendel() override;
    bool isVergrendeld() override;
    QLineEdit* krijgInput() override;
    void paintStatus() override;
private:
    std::string sleutel;
    bool vergrendeld;
    QLineEdit *input;
};

#endif // SLEUTELSLOT_H
