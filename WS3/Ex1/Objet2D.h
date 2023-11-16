#pragma once

#include <string>

class Objet2D {
private:
    int dim1;
    int dim2;

public:
    Objet2D();
    Objet2D(int dim1, int dim2);
    virtual int getPerimeter();
    virtual int getAire();
    virtual std::string afficheInfo();
};
