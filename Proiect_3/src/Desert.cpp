#include "Desert.h"
#include<string.h>

using namespace std;

Desert::Desert(string nume, int pret, string desertVegan, string eDinCiocolata)
{
    this->nume = nume;
    this->pret = pret;
    this->desertVegan = desertVegan;
    this->eDinCiocolata = eDinCiocolata;
}

Desert::Desert(const Desert& obj)
{
    this->nume = obj.nume;
    this->pret = obj.pret;
    this->desertVegan = obj.desertVegan;
    this->eDinCiocolata = obj.eDinCiocolata;
}

Desert& Desert::operator=(Desert& obj)
{
    if(this != &obj)
    {
        this->nume = obj.nume;
        this->pret = obj.pret;
        this->desertVegan = obj.desertVegan;
        this->eDinCiocolata = obj.eDinCiocolata;
    }

    return *this;
}

Desert::~Desert()
{
  //  cout<<"DESERT DELETED"<<endl;
}

istream& operator>>(istream& in, Desert& obj)
{
    cout<<"Introduceti nume (un cuvant): ";
    in>>obj.nume;

    cout<<"Introduceti pret (un int): ";
    in>>obj.pret;

    cout<<"Este desert vegan? [DA/NU]: ";
    in>>obj.desertVegan;

    cout<<"Este din ciocolata? [DA/NU]: ";
    in>>obj.eDinCiocolata;

    cout<<endl;
    return in;
}

ostream& operator<<(ostream& out, Desert& obj)
{
    out<<"Numele desertului este "<<obj.nume;
    out<<endl;

    out<<"Pretul este: "<<obj.pret;
    out<<endl;

    out<<"Desertul este vegan: "<<obj.desertVegan;
    out<<endl;

    out<<"Desertul este din ciocolata: "<<obj.eDinCiocolata;
    out<<endl<<endl;

    return out;
}
