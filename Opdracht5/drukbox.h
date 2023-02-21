#ifndef DRUKBOX_H
#define DRUKBOX_H

#include "afdrukker.h"
#include "herkenningsslot.h"
#include "qtextbrowser.h"

class DrukBox: public Afdrukker {
public:
    DrukBox(QTextBrowser*);
    void toonText (std::string) override;
    void clearMedium() override;
private:
    QTextBrowser *browser;
    HerkenningsSlot *slot;
};

#endif // DRUKBOX_H
