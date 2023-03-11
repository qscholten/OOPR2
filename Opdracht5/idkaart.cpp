#include "idkaart.h"

IdKaart::IdKaart(std::string id, std::string naamEigenaar, std::string adresEigenaar): id(id), naamEigenaar(naamEigenaar), adresEigenaar(adresEigenaar) {
}

std::string IdKaart::userID() {
    return id;
}

void IdKaart::geefToegang(KaartSlot *slot) {
    toegang.push_back(slot);
}

void IdKaart::verwijderToegang(KaartSlot *slot) {
    for(std::vector<KaartSlot*>::iterator it = toegang.begin(); it != toegang.end(); it++) {
        if (*it == slot) {
            toegang.erase(it);
            return;
        }
    }
}

bool IdKaart::heeftToegang(KaartSlot* slot) {
    for (std::vector<KaartSlot*>::iterator it = toegang.begin(); it != toegang.end(); it++) {
        if (*it == slot) {
            return true;
        }
    }
    return false;
}
