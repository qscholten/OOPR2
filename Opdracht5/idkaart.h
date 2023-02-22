#ifndef IDKAART_H
#define IDKAART_H

#include <stdlib.h>
#include <string>
#include <vector>
#include "kaartslot.h"


class IdKaart {
public:
    ~IdKaart(){}
    IdKaart(std::string, std::string, std::string);
    std::string userId();
    void geefToegang(KaartSlot*);
    void verwijderToegang(KaartSlot*);
    bool heeftToegangTot(KaartSlot*);
private:
    std::string id;
    std::vector<KaartSlot*> toegang;
    std::string naamEigenaar;
    std::string adresEigenaar;
};

#endif // IDKAART_H
