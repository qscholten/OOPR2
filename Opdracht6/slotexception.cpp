#include "slotexception.h"
#include "idkaart.h"
#include "kaartslot.h"

SlotException::SlotException(IdKaart *kaart, KaartSlot *slot) {
    if (kaart != nullptr) {
        kaartId = kaart->userID();
    }
    else {
        kaartId = "";
    }
    if (slot != nullptr) {
        slotPlaats = slot->krijgPlaats();
    }
    else {
        slotPlaats = "";
    }
}

std::string SlotException::kaartVanBinnendringer() {
    return kaartId;
}

std::string SlotException::plaatsVanHetSlot() {
    return slotPlaats;
}
