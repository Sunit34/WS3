#include "Cube.h"

Cube::Cube() : tcode(0) {}

Cube::Cube(int tcode) : tcode(tcode) {}

int Cube::getCode() {
    return tcode;
}

int Cube::getPerimeter() {
    return 12 * tcode;
}

int Cube::getAire() {
    return 6 * tcode * tcode;
}

std::string Cube::afficheInfo() {
    return "Cube";
}
