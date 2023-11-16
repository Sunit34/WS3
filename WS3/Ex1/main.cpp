#include <iostream>
#include "Objet2D.h"
#include "Rectangle.h"
#include "Cube.h"

int main() {
    int dim1, dim2, tdim1, tdim2, tcode;

    std::cout << "Saisir les dimensions pour Objet2D (dim1 dim2): ";
    std::cin >> dim1 >> dim2;

    Objet2D objet2D(dim1, dim2);
    std::cout << "Objet2D - Périmètre : " << objet2D.getPerimeter() << ", Aire : " << objet2D.getAire() << std::endl;

    std::cout << "Saisir les dimensions pour Rectangle (tdim1 tdim2): ";
    std::cin >> tdim1 >> tdim2;

    Rectangle rectangle(tdim1, tdim2);
    std::cout << "Rectangle - Périmètre : " << rectangle.getPerimetre() << ", Aire : " << rectangle.getAire() << std::endl;

    std::cout << "Saisir les dimensions pour Cube (tcode): ";
    std::cin >> tcode;

    Cube cube(tcode);
    std::cout << "Cube - Périmètre : " << cube.getPerimeter() << ", Aire : " << cube.getAire() << std::endl;

    return 0;
}
