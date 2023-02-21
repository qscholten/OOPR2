#include "drukbox.h"

DrukBox::DrukBox(QTextBrowser *qtb, HerkenningsSlot* hs): browser(qtb), slot(hs) {
}

void DrukBox::toonText(std::string s) {
    std::map<std::string, bool> kaarten = slot->toonKaartenbak();
    std::map<std::string,bool>::iterator it = kaarten.begin();
    for (int i=0; i<kaarten.size(); i++) {

        ++it;
    }
    //browser->textChanged();
    QString x = QString::fromUtf8(s);;
    browser->setText(x);
}

void DrukBox::clearMedium() {
}
