#include "MyArrayList.h"
#include "FelPrincipal.h"
#include "Desert.h"
#include "Ciorba.h"
#include "Manager.h"
#include <iostream>

using namespace std;

string comanda;

int main()
{
    Manager manager;
    manager.listaComenzi();

    cin.clear();
    cin.sync();
    getline(cin, comanda);

    while(comanda != "Inchide")
    {
        manager.executa(comanda);
        cin.clear();
        cin.sync();
        getline(cin, comanda);
    }

    cout<<"PROCES INCHEIAT";

    return 0;
}


