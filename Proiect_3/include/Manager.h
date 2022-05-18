#ifndef MANAGER_H
#define MANAGER_H
#include "MyArrayList.h"
#include "FelPrincipal.h"
#include "Desert.h"
#include "Ciorba.h"
#include <iostream>

class Manager
{
private:
    //  MyArrayList<Ciorba> ciorbaList;
    MyArrayList<FelPrincipal> principalList;
    MyArrayList<Desert> desertList;

public:
    Manager();

    void listaComenzi();
    void executa(std::string);
};

#endif // MANAGER_H
