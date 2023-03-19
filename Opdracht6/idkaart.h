#ifndef IDKAART_H
#define IDKAART_H

#include <stdlib.h>
#include <string>
#include <vector>

class KaartSlot;

class IdKaart {
public:
    virtual ~IdKaart(){}
    IdKaart(std::string id, std::string naamEigenaar, std::string adresEigenaar);
    virtual std::string userID();
    virtual void geefToegang(KaartSlot*);
    virtual void verwijderToegang(KaartSlot*);
    virtual bool heeftToegang(KaartSlot*);
private:
    std::string id;
    std::vector<KaartSlot*> toegang;
    std::string naamEigenaar;
    std::string adresEigenaar;
};

#endif // IDKAART_H
