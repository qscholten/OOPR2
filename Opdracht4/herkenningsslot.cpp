#include "herkenningsslot.h"

HerkenningsSlot::HerkenningsSlot(QLineEdit *le): vergrendeld(true), input(le) {
}

void HerkenningsSlot::ontgrendel(std::string key) {
    if (kaartenbak.find(key)->second) {
        vergrendeld = false;
    }
}

void HerkenningsSlot::vergrendel() {
    vergrendeld = true;
}

bool HerkenningsSlot::isVergrendeld() {
    return vergrendeld;
}

std::map<std::string, bool>  HerkenningsSlot::toonKaartenbak() {
    return kaartenbak;
}

void HerkenningsSlot::voegAutorisatieToe(std::string s, bool b) {
    std::pair x(s,b);
    kaartenbak.insert(x);
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