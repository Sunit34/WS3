#include <iostream>
#include <string>
#include <vector>

class Objet2D {
public:
    int dim1, dim2;
    Objet2D();
    Objet2D(int dim1, int dim2);
    virtual int getPerimeter();
    virtual int getAire();
    virtual std::string afficheInfo();
};

class Rectangle : public Objet2D {
public:
    Rectangle();
    Rectangle(int dim1, int dim2);
    int getLongueur();
    int getLargeur();
    virtual int getPerimetre() override;
    virtual int getAire() override;
    virtual std::string afficheInfo() override;
};

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

class StockageObjet2D {
private:
    std::vector<Objet2D*> objets;  // Utilisation de pointeurs pour stocker des objets
    int index;

public:
    void ajouter(Objet2D* objet);
    void afficherInfos();
};

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

Rectangle::Rectangle() : Objet2D(), dim1(0), dim2(0) {}

Rectangle::Rectangle(int dim1, int dim2) : Objet2D(dim1, dim2) {}

int Rectangle::getLongueur() {
    return dim1;
}

int Rectangle::getLargeur() {
    return dim2;
}

int Rectangle::getPerimetre() {
    return 2 * (dim1 + dim2);
}

int Rectangle::getAire() {
    return dim1 * dim2;
}

std::string Rectangle::afficheInfo() {
    return "Rectangle";
}

Cube::Cube() : Objet2D(), tcode(0) {}

Cube::Cube(int tcode) : Objet2D(), tcode(tcode) {}

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

void StockageObjet2D::ajouter(Objet2D* objet) {
    objets.push_back(objet);
}

void StockageObjet2D::afficherInfos() {
    for (const auto& objet : objets) {
        std::cout << objet->afficheInfo() << " - Périmètre : " << objet->getPerimeter() << ", Aire : " << objet->getAire() << std::endl;
    }
}

int main() {
    int dim1, dim2, tcode;
    StockageObjet2D stockage;

    std::cout << "Saisir les dimensions pour Rectangle (dim1 dim2): ";
    std::cin >> dim1 >> dim2;
    Rectangle rectangle(dim1, dim2);

    std::cout << "Saisir les dimensions pour Cube (tcode): ";
    std::cin >> tcode;
    Cube cube(tcode);

    stockage.ajouter(&rectangle);
    stockage.ajouter(&cube);

    stockage.afficherInfos();

    return 0;
}
