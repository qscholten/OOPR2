#include "sleutelslot.h"

SleutelSlot::SleutelSlot(std::string sleutel): sleutel(sleutel), vergrendeld(true) {
}

void SleutelSlot::ontgrendel(std::string sl) {
    if (sleutel.compare(sl) == 0) {
        vergrendeld = false;
    }
}

void SleutelSlot::vergrendel() {
    vergrendeld = true;
}

bool SleutelSlot::isVergrendeld() {
    return vergrendeld;
}
