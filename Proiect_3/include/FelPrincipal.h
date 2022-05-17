#ifndef FELPRINCIPAL_H
#define FELPRINCIPAL_H
#include <iostream>


class FelPrincipal
{
private:
    std::string nume;
    int pret;
    int calorii;
    int numarIngrediente;
    std::string ingrediente[100];

public:
    FelPrincipal(){};
    FelPrincipal(std::string, int, int, int);
    FelPrincipal(const FelPrincipal&);
    FelPrincipal& operator=(FelPrincipal&);
    ~FelPrincipal();

    friend std::istream& operator>>(std::istream&, FelPrincipal&);
    friend std::ostream& operator<<(std::ostream&, FelPrincipal&);
};

#endif // FELPRINCIPAL_H
