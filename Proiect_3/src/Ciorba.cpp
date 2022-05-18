#include "Ciorba.h"
#include <string.h>

using namespace std;

Ciorba::Ciorba(string nume, int pret, bool isSupaCrema, bool isCiorba, bool isDeLegume)
{
    this->nume = nume;
    this->pret = pret;
    this->isSupaCrema = isSupaCrema;
    this->isCiorba = isCiorba;
    this->isDeLegume = isDeLegume;
}

Ciorba::Ciorba(const Ciorba& obj)
{
    this->nume = obj.nume;
    this->pret = obj.pret;
    this->isSupaCrema = obj.isSupaCrema;
    this->isCiorba = obj.isCiorba;
    this->isDeLegume = obj.isDeLegume;
}

Ciorba& Ciorba::operator=(Ciorba& obj)
{
    if(this != &obj)
    {
        this->nume = obj.nume;
        this->pret = obj.pret;
        this->isSupaCrema = obj.isSupaCrema;
        this->isCiorba = obj.isCiorba;
        this->isDeLegume = obj.isDeLegume;
    }

    return *this;
}

Ciorba::~Ciorba()
{
   // cout<<"CIORBA DELETED"<<endl;
}

istream& operator>>(istream& in, Ciorba& obj)
{
    cout<<"Introduceti nume (un cuvant): ";
    in>>obj.nume;

    cout<<"Introduceti pret (un int): ";
    in>>obj.pret;

    cout<<"Este supa crema? [DA/NU]: ";
    in>>obj.isSupaCrema;

    cout<<"Este ciorba? [DA/NU]: "
    in>>obj.isCiorba;

    cout<<"Este ciorba de legume? [DA/NU]: ";
    in>>obj.isDeLegume;

    cout<<endl;
    return in;
}

ostream& operator<<(ostream& out, Ciorba& obj)
{
    out<<"Numele ciorbei este "<<obj.nume;
    out<<endl;

    out<<"Pretul este: "<<obj.pret;
    out<<endl;

    out<<"E ciorba: "<<obj.isCiorba;
    out<<endl;

    out<<"E supa crema: "<<obj.isSupaCrema;
    out<<endl;

    out<<"E ciorba de legume: "<<obj.isDeLegume;
    out<<endl<<endl;
}

