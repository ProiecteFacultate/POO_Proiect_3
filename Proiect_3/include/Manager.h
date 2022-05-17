#ifndef MANAGER_H
#define MANAGER_H
#include "Manager.h"
#include "MyArrayList.h"
#include "FelPrincipal.h"
#include "Desert.h"
#include "Ciorba.h"

class Manager
{
private:
    MyArrayList<Ciorba> ciorbaList;
    MyArrayList<FelPrincipal> principalList;
    MyArrayList<Desert> desertList;

public:
    Manager(){};
};

#endif // MANAGER_H
