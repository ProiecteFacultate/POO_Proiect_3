#include "Manager.h"
#include "FelPrincipal.h"
#include "Desert.h"
#include "Ciorba.h"
#include "Comenzi.h"
#include <iostream>


using namespace std;

Manager::Manager()
{

}

void Manager::listaComenzi()
{
    cout<<"COMENZILE DISPONIBILE SUNT:"<<endl;
    cout<<"Adauga fel principal"<<endl;
    cout<<"Adauga desert"<<endl;
    cout<<"Adauga ciorba"<<endl;
    cout<<"Enumera feluri principale"<<endl;
    cout<<"Enumera deserturi"<<endl;
    cout<<"Enumera ciorbe"<<endl;
    cout<<"Ajutor"<<endl;

    cout<<endl;
}

void Manager::executa(string textComanda)
{
    if(textComanda == "Adauga fel principal")
        Comenzi::comanda1(this->principalList);
    else if(textComanda == "Adauga desert")
        Comenzi::comanda2(this->desertList);
  //  else if(textComanda == "Adauga ciorba")
      //  Comenzi::comanda3(this->ciorbaList);
    else if(textComanda == "Enumera feluri principale")
        Comenzi::comanda4(this->principalList);
    else if(textComanda == "Enumera deserturi")
        Comenzi::comanda5(this->desertList);
   // else if(textComanda == "Enumera ciorbe")
       // Comenzi::comanda6(this->ciorbaList);
    else if(textComanda == "Ajutor")
        this->listaComenzi();
    else
        cout<<"Comanda incorecta!"<<endl;
}

