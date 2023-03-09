#ifndef HERKENNINGSSLOT_H
#define HERKENNINGSSLOT_H

#include "slot.h"
class Afdrukker;

class HerkenningsSlot: public Slot {
public:
    HerkenningsSlot(QLineEdit*, Afdrukker*);
    void ontgrendel(std::string) override;
    void vergrendel() override;
    bool isVergrendeld() override;
    std::string toonKaartenbak();
    void voegAutorisatieToe(std::string, bool);
    QLineEdit* krijgInput() override;
    void paintStatus() override;
private:
    std::map<std::string,bool> kaartenbak;
    bool vergrendeld;
    QLineEdit *input;
    Afdrukker *printer;
};

#endif // HERKENNINGSSLOT_H
