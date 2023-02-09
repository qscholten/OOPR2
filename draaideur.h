#ifndef DRAAIDEUR_H
#define DRAAIDEUR_H

#include "deur.h"
#include <QPaintDevice>

class DraaiDeur: public Deur {
public:
    DraaiDeur(int, int, unsigned int, bool);
    void teken(QPaintDevice *) override;
private:
    bool liggend;
};

#endif // DRAAIDEUR_H
