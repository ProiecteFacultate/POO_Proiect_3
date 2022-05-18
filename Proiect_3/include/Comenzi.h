#ifndef COMENZI_H
#define COMENZI_H
#include "MyArrayList.h"
#include "FelPrincipal.h"
#include "Desert.h"
#include "Ciorba.h"


class Comenzi
{
public:
    static void comanda1(MyArrayList<FelPrincipal>&);    //adauga fel princ
    static void comanda2(MyArrayList<Desert>&);    //adauga desert
   // static void comanda3(MyArrayList<Ciorba>&);    //adauga ciorba
    static void comanda4(MyArrayList<FelPrincipal>&);    //enumara felurile princ
    static void comanda5(MyArrayList<Desert>&);    //enumara deserturile
  //  static void comanda6(MyArrayList<Ciorba>&);    //enumara ciorbele
};

#endif // COMENZI_H
