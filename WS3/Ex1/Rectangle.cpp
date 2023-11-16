#include "Rectangle.h"

Rectangle::Rectangle() : tdim1(0), tdim2(0) {}

Rectangle::Rectangle(int tdim1, int tdim2) : tdim1(tdim1), tdim2(tdim2) {}

int Rectangle::getLongueur() {
    return tdim1;
}

int Rectangle::getLargeur() {
    return tdim2;
}

int Rectangle::getPerimetre() {
    return 2 * (tdim1 + tdim2);
}

int Rectangle::getAire() {
    return tdim1 * tdim2;
}

std::string Rectangle::afficheInfo() {
    return "Rectangle";
}
