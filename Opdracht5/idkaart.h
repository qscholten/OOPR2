#ifndef IDKAART_H
#define IDKAART_H

#include <stdlib.h>
#include <string>
#include <vector>

class KaartSlot;

class IdKaart {
public:
    IdKaart(std::string id, std::string naamEigenaar, std::string adresEigenaar);
    std::string userID();
    void geefToegang(KaartSlot*);
    void verwijderToegang(KaartSlot*);
    bool heeftToegang(KaartSlot*);
private:
    ~IdKaart(){}
    std::string id;
    std::vector<KaartSlot*> toegang;
    std::string naamEigenaar;
    std::string adresEigenaar;
};

#endif // IDKAART_H
