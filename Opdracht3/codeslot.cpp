#include "codeslot.h"

CodeSlot::CodeSlot(int code, QLineEdit *le): input(le), code(code), vergrendeld(true) {
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

QLineEdit* CodeSlot::krijgInput() {
    return input;
}

void CodeSlot::paintStatus() {
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
