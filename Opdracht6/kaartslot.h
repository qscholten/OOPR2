#ifndef KAARTSLOT_H
#define KAARTSLOT_H

#include "slot.h"

class IdKaart;

class KaartSlot: public Slot {
public:
    KaartSlot(std::string, QLineEdit*);
    void voegIdKaartToe(IdKaart*);
    void verwijderIdKaart(std::string);
    void ontgrendel(std::string) override;
    void vergrendel() override;
    bool isVergrendeld() override;
    std::map<std::string, IdKaart*> krijgKaarten();
    std::string krijgPlaats();
    QLineEdit* krijgInput() override;
    void paintStatus() override;
private:
    std::string plaats;
    bool vergrendeld;
    static std::map<std::string, IdKaart*> idKaarten;
    QLineEdit *input;
};

#endif // KAARTSLOT_H
