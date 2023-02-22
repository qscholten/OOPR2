#ifndef KAARTSLOT_H
#define KAARTSLOT_H

#include "slot.h"
class IdKaart;

class KaartSlot: public Slot {
public:
    KaartSlot(std::string, QLineEdit*);
    void vergrendel() override;
    bool isVergrendeld() override;
    void ontgrendel(std::string) override;
    void voegIdKaartToe(IdKaart*);
    QLineEdit* krijgInput() override;
    void paintStatus() override;
    void verwijderIdKaart(std::string);

private:
    std::string plaats;
    bool vergrendeld;
    static std::map<std::string, IdKaart*> IdKaarten;
    QLineEdit* input;
};

#endif // KAARTSLOT_H
