#include <iostream>
#include <string>
#include <vector>

class objet2D{
    public:
        int dim1, dim2;
        objet2D();
        objet2D(dim1, dim2);
        virtual int getPerimeter();
        virtual int getAire();
        virtual std::string afficheInfo();
};

class rectangle : public objet2D{
    public:
        Rectangle();
        Rectangle(dim1, dim2);
        int getLongueur();
        int getLargeur();
        virtual int getPerimetre();
        virtual int getAire();
        virtual std::string afficheInfo();
};

class cube : public objet2D{
    private:
        int tcode;

    public:
        Cube();
        Cube(tcode);
        int getCode();
        virtual int getPerimeter() ;
        virtual int getAire() ;
        virtual std::string afficheInfo() ;
};

class stockageObjet2D{
    private:
        std::vector<Objet2D> objets;
        int index;

    public:
        void ajouter(objet2D objet);
        void ajouter(objet2D* objet, index);
        void afficherInfos();
};

int main(){
    int dim1, dim2, tcode;
    StockageObjet2D stockage;

    Rectangle rectangle(dim1, dim2);
    Cube cube(tcode);

    stockage.ajouter(&rectangle);
    stockage.ajouter(&cube);

    stockage.afficherInfos();

    return 0;
}