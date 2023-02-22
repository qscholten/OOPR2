#include "idkaart.h"

IdKaart::IdKaart(std::string id, std::string naam, std::string adres): id(id), naamEigenaar(naam), adresEigenaar(adres) {
}

std::string IdKaart::userId() {
    return id;
}

void IdKaart::geefToegang(KaartSlot* ks) {
    ks->voegIdKaartToe(this);
}

void IdKaart::verwijderToegang(KaartSlot* ks) {
    ks->verwijderIdKaart(id);

}

bool heeftToegangTot(KaartSlot* ks) {
    return true;
}
