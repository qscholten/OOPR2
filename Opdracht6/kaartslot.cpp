#include "kaartslot.h"
#include "idkaart.h"
#include "slotexception.h"

std::map<std::string, IdKaart*> KaartSlot::idKaarten = {};

KaartSlot::KaartSlot(std::string plaats, QLineEdit* qle): plaats(plaats), input(qle), vergrendeld(true) {
}

void KaartSlot::voegIdKaartToe(IdKaart *kaart) {
    idKaarten[kaart->userID()] = kaart;
}

void KaartSlot::verwijderIdKaart(std::string id) {
    std::map<std::string, IdKaart*>::iterator it = idKaarten.find(id);
    idKaarten.erase(it);
}

void KaartSlot::ontgrendel(std::string s) {
    std::map<std::string, IdKaart*>::iterator it = idKaarten.find(s);
    if (it != idKaarten.end()) {
        if (it->second->heeftToegang(this)) {
            vergrendeld = false;
        }
        else {
            throw SlotException(it->second, this);
        }
    }
    else {
        throw SlotException(nullptr, this);
    }
}

void KaartSlot::vergrendel() {
    vergrendeld = true;
}

bool KaartSlot::isVergrendeld() {
    return vergrendeld;
}

std::map<std::string, IdKaart*> KaartSlot::krijgKaarten() {
    return idKaarten;
}

std::string KaartSlot::krijgPlaats() {
    return plaats;
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
