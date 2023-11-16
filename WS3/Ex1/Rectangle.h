#pragma once

#include "Objet2D.h"

class Rectangle : public Objet2D {
private:
    int tdim1, tdim2;

public:
    Rectangle();
    Rectangle(int tdim1, int tdim2);
    int getLongueur();
    int getLargeur();
    virtual int getPerimetre();
    virtual int getAire();
    virtual std::string afficheInfo();
};
