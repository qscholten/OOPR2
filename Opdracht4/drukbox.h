#ifndef DRUKBOX_H
#define DRUKBOX_H

#include "afdrukker.h"

class DrukBox: public Afdrukker {
    void toonText (std::string) override;
    void clearMedium() override;
};

#endif // DRUKBOX_H
