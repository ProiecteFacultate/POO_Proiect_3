#ifndef DESERT_H
#define DESERT_H
#include<iostream>


class Desert
{
private:
    std::string nume;
    int pret;
    std::string desertVegan;
    std::string eDinCiocolata;

public:
    Desert(){};
    Desert(std::string, int, std::string, std::string);
    Desert(const Desert&);
    Desert& operator=(Desert&);
    ~Desert();

    friend std::istream& operator>>(std::istream&, Desert&);
    friend std::ostream& operator<<(std::ostream&, Desert&);

};

#endif // DESERT_H
