#include "drukbox.h"

DrukBox::DrukBox(QTextBrowser *qtb): browser(qtb) {
}

void DrukBox::toonText(std::string s) {
    QString x = QString::fromUtf8(s);;
    browser->setText(x);
}

void DrukBox::clearMedium() {
    browser->clear();
}
