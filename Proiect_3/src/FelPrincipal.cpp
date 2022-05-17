#include "FelPrincipal.h"
#include <string.h>

using namespace std;

FelPrincipal::FelPrincipal(string nume, int pret, int calorii, int numarIngrediente)
{
    this->nume = nume;
    this->pret = pret;
    this->calorii = calorii;
    this->numarIngrediente = numarIngrediente;

    cout<<"Introduceti ingrediente: "<<endl;

    for(int i = 1; i <= numarIngrediente; i++)
    {
        cout<<"Ingredientul "<<i;
        cin>>this->ingrediente[i];
        cout<<endl;
    }
}

FelPrincipal::FelPrincipal(const FelPrincipal& obj)
{
    this->nume = obj.nume;
    this->pret = obj.pret;
    this->calorii = obj.calorii;
    this->numarIngrediente = obj.numarIngrediente;

    for(int i = 1; i <= obj.numarIngrediente; i++)
        this->ingrediente[i] = obj.ingrediente[i];
}

FelPrincipal& FelPrincipal::operator=(FelPrincipal& obj)
{
    if(this != &obj)
    {
        this->nume = obj.nume;
        this->pret = obj.pret;
        this->calorii = obj.calorii;
        this->numarIngrediente = obj.numarIngrediente;

        for(int i = 1; i <= obj.numarIngrediente; i++)
            this->ingrediente[i] = obj.ingrediente[i];
    }

    return *this;
}

FelPrincipal::~FelPrincipal()
{
    cout<<"FEL PRINCIPAL DELETED"<<endl;
}

istream& operator>>(istream& in, FelPrincipal& obj)
{
    cout<<"Introduceti nume (un cuvant): ";
    in>>obj.nume;

    cout<<"Introduceti pret (un int): ";
    in>>obj.pret;

    cout<<"Cate calorii are: ";
    in>>obj.calorii;

    cout<<"Numarul ingredientelor este (dupa va trebui introdus fiecare ingredient): ";
    in>>obj.numarIngrediente;

    cout<<"Introduceti ingrediente: "<<endl;

    for(int i = 1; i <= obj.numarIngrediente; i++)
    {
        cout<<"Ingredientul "<<i;
        in>>obj.ingrediente[i];
        cout<<endl;
    }

    cout<<endl;
    return in;
}

ostream& operator<<(ostream& out, FelPrincipal& obj)
{
    out<<"Numele felului principal este "<<obj.nume;
    out<<endl;

    out<<"Pretul este: "<<obj.pret;
    out<<endl;

    out<<"Numarul caloriilor este: "<<obj.calorii;
    out<<endl;

    out<<"Numarul ingredientelor este: "<<obj.numarIngrediente;
    out<<endl;

    out<<"Ingredientele sunt: "<<endl;

     for(int i = 1; i <= obj.numarIngrediente; i++)
    {
        out<<"Ingredientul "<<i<<": ";
        out<<obj.ingrediente[i];
    }

    out<<endl;

    return out;
}
