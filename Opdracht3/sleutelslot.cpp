#include "sleutelslot.h"

SleutelSlot::SleutelSlot(std::string sleutel, QLineEdit *le): input(le), sleutel(sleutel), vergrendeld(true) {
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

QLineEdit* SleutelSlot::krijgInput() {
    return input;
}

void SleutelSlot::paintStatus() {
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
