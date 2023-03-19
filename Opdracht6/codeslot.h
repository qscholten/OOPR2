#ifndef CODESLOT_H
#define CODESLOT_H

#include "slot.h"

class CodeSlot: public Slot {
public:
    CodeSlot(int, QLineEdit*);
    void ontgrendel(std::string) override;
    void vergrendel() override;
    bool isVergrendeld() override;
    QLineEdit* krijgInput() override;
    void paintStatus() override;
private:
    int code;
    bool vergrendeld;
    QLineEdit *input;
};

#endif // CODESLOT_H
