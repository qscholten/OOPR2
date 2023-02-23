#include "kaartslot.h"
#include "idkaart.h"

std::map<std::string, IdKaart*> KaartSlot::IdKaarten = {};

KaartSlot::KaartSlot(std::string plaats, QLineEdit *qle): plaats(plaats), input(qle) {
}

void KaartSlot::vergrendel() {
    vergrendeld = true;
}

bool KaartSlot::isVergrendeld() {
    return vergrendeld;
}

void KaartSlot::ontgrendel(std::string) {
    vergrendeld = false;
}

void KaartSlot::voegIdKaartToe(IdKaart* idk) {
    std::pair x(idk->userId(), idk);
    std::map<std::string, IdKaart*>::iterator it = IdKaarten.find(x.first);
    if (it == IdKaarten.end()) {
        IdKaarten.insert(x);
    }
}

void KaartSlot::verwijderIdKaart(std::string) {
}

QLineEdit* KaartSlot::krijgInput() {
    return input;
}

void KaartSlot::paintStatus() {
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
