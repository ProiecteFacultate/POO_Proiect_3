#ifndef RESTAURANT_H
#define RESTAURANT_H
#include "MyArrayList.h"
#include "Desert.h"
#include "FelPrincipal.h"
#include "Ciorba.h"


class Restaurant
{
    private:
    int numarAngajati;
    MyArrayList<Ciorba> ciorbaList;
    MyArrayList<FelPrincipal> felPrincipalList;
    MyArrayList<Desert> desertList;

public:
    Restaurant(){};
    Restaurant(std::string, int, std::string, std::string);
    Restaurant(const Restaurant&);
    Restaurant& operator=(Restaurant&);
    ~Restaurant();

    friend std::istream& operator>>(std::istream&, Restaurant&);
    friend std::ostream& operator<<(std::ostream&, Restaurant&);
};

#endif // RESTAURANT_H
