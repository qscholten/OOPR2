#ifndef HERKENNINGSSLOT_H
#define HERKENNINGSSLOT_H

#include "slot.h"

class HerkenningsSlot: public Slot {
public:
    HerkenningsSlot(QLineEdit*);
    void ontgrendel(std::string) override;
    void vergrendel() override;
    bool isVergrendeld() override;
    std::map<std::string, bool> toonKaartenbak();
    void voegAutorisatieToe(std::string, bool);
    QLineEdit* krijgInput() override;
    void paintStatus() override;
private:
    std::map<std::string,bool> kaartenbak;
    bool vergrendeld;
    QLineEdit *input;
};

#endif // HERKENNINGSSLOT_H
