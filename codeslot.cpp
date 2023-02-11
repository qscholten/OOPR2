#include "codeslot.h"

CodeSlot::CodeSlot(int code): code(code), vergrendeld(true) {
}

void CodeSlot::ontgrendel(std::string sl) {
    if(std::to_string(code).compare(sl) == 0) {
        vergrendeld = false;
    }
}

void CodeSlot::vergrendel() {
    vergrendeld = true;
}

bool CodeSlot::isVergrendeld() {
    return vergrendeld;
}
