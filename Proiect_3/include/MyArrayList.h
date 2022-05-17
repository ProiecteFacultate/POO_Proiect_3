#ifndef MYARRAYLIST_H
#define MYARRAYLIST_H
#include "Node.h"
#include <iostream>

template<class T>
class MyArrayList
{
private:
    Node<T> *firstNode;
    Node<T> *lastNode;
    int length;         //elementele sunt initializate de la 0

public:
    MyArrayList();
    ~MyArrayList();

    void pushFront(T);  //adauga in dreapta
    void popFront();   //sterge din dreapta
    void pushBack(T);  //adauga in stanga
    void popBack();   //sterge din stanga
    void add(T, int);   //adauga elem pe pozitita pos
    void drop(int);      //sterge elem de pe pozititia pos;
    T get(int);    //returneaza obiectul de pe pos data, indexare de la 0

    bool isEmpty();
    void iterate();
    int getLength();
};

#endif // MYARRAYLIST_H
