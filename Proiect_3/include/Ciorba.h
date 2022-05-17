#ifndef CIORBA_H
#define CIORBA_H
#include "Ciorba.h"
#include <string.h>

class Ciorba
{
private:
    std::string nume;
    int pret;
    std::string isSupaCrema;
    std::string isCiorba;
    std::string isDeLegume;

public:
    Ciorba(){};
    Ciorba(std::string nume, int pret, bool isSupaCrema, bool isCiorba, bool isDeLegume);
    Ciorba(const Ciorba&);
    Ciorba& operator=(Ciorba&);
    ~Ciorba();

    friend std::istream& operator>>(std::istream&, Ciorba&);
    friend std::ostream& operator<<(std::ostream&, Ciorba&);
};

#endif // CIORBA_H
