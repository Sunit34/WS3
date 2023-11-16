#include "Objet2D.h"

Objet2D::Objet2D() : dim1(0), dim2(0) {}

Objet2D::Objet2D(int dim1, int dim2) : dim1(dim1), dim2(dim2) {}

int Objet2D::getPerimeter() {
    return 2 * (dim1 + dim2);
}

int Objet2D::getAire() {
    return dim1 * dim2;
}

std::string Objet2D::afficheInfo() {
    return "Objet2D";
}
