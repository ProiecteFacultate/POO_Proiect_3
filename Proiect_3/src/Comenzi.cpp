#include<iostream>
#include "Comenzi.h"
#include "MyArrayList.h"
#include "FelPrincipal.h"
#include "Desert.h"
#include "Ciorba.h"

using namespace std;

void Comenzi::comanda1(MyArrayList<FelPrincipal>& principalList)
{
    FelPrincipal felPrincipal;
    cin>>felPrincipal;
    principalList.pushFront(felPrincipal);
}

void Comenzi::comanda2(MyArrayList<Desert>& desertList)
{
    Desert desert;
    cin>>desert;
    desertList.pushFront(desert);
}
/*
void Comenzi::comanda3(MyArrayList<Ciorba>& ciorbaList)
{
    Ciorba ciorba;
    cin>>ciorba;
    ciorbaList.pushFront(ciorba);
}*/

void Comenzi::comanda4(MyArrayList<FelPrincipal>& principalList)
{
    principalList.iterate();
}

void Comenzi::comanda5(MyArrayList<Desert>& desertList)
{
    desertList.iterate();
}
/*
void Comenzi::comanda6(MyArrayList<Desert>& ciorbaList)
{
    ciorbaList.iterate();
}*/


