#ifndef CIORBA_H
#define CIORBA_H
#include "Ciorba.h"

#include <iostream>
#include <string.h>

using namespace std;

class Ciorba
{
private:
    string nume;
    int pret;
    string isSupaCrema;
    string isCiorba;
    string isDeLegume;

public:
    Ciorba(){};
    Ciorba(string nume, int pret, bool isSupaCrema, bool isCiorba, bool isDeLegume);
    Ciorba(const Ciorba&);
    Ciorba& operator=(Ciorba&);
    ~Ciorba();

    friend istream& operator>>(istream&, Ciorba&);
    friend ostream& operator<<(ostream&, Ciorba&);
};

#endif // CIORBA_H
