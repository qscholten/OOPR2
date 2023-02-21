#include "herkenningsslot.h"

HerkenningsSlot::HerkenningsSlot(QLineEdit *le, Afdrukker *print): vergrendeld(true), input(le), printer(print) {
}

void HerkenningsSlot::ontgrendel(std::string key) {
    std::map<std::string, bool>::iterator it = kaartenbak.find(key);
    if (it == kaartenbak.end()) {
        return;
    }
    if (it->second) {
        vergrendeld = false;
    }
}

void HerkenningsSlot::vergrendel() {
    vergrendeld = true;
}

bool HerkenningsSlot::isVergrendeld() {
    return vergrendeld;
}

std::string HerkenningsSlot::toonKaartenbak() {
    std::string s;
    std::map<std::string,bool>::iterator it = kaartenbak.begin();
    for (int i=0; i<kaartenbak.size(); i++) {
        s = s + "\n Naam: " + it->first + "\t Toegang: " + std::to_string(it->second);
        ++it;
    }
    printer->toonText(s);
    return s;
}

void HerkenningsSlot::voegAutorisatieToe(std::string s, bool b) {
    std::pair x(s,b);
    std::map<std::string, bool>::iterator it = kaartenbak.find(x.first);
    if (it == kaartenbak.end()) {
        kaartenbak.insert(x);
    }
}

QLineEdit* HerkenningsSlot::krijgInput() {
    return input;
}

void HerkenningsSlot::paintStatus() {
    QPalette closed;
    closed.setColor(QPalette::Base,Qt::white);
    closed.setColor(QPalette::Text,Qt::black);
    QPalette opened;
    opened.setColor(QPalette::Base,Qt::green);
    opened.setColor(QPalette::Text,Qt::black);
    if (vergrendeld) {
        input->setPalette(closed);
    }
    else {
        input->setPalette(opened);
    }
}
