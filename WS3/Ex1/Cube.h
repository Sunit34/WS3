#pragma once

#include "Objet2D.h"

class Cube : public Objet2D {
private:
    int tcode;

public:
    Cube();
    Cube(int tcode);
    int getCode();
    virtual int getPerimeter() override;
    virtual int getAire() override;
    virtual std::string afficheInfo() override;
};
