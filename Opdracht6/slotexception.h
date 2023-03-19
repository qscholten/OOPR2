#ifndef SLOTEXCEPTION_H
#define SLOTEXCEPTION_H

#include <exception>
#include <string>

class IdKaart;
class KaartSlot;

class SlotException: public std::exception {
public:
    ~SlotException(){}
    SlotException(IdKaart*, KaartSlot*);
    std::string kaartVanBinnendringer();
    std::string plaatsVanHetSlot();
private:
    std::string kaartId;
    std::string slotPlaats;
};

#endif // SLOTEXCEPTION_H
