#ifndef NODE_H
#define NODE_H
#include "FelPrincipal.h"
#include "Desert.h"
#include "Ciorba.h"
#include<iostream>

template<class T>
class Node
{
private:
    T value;
    Node<T> *nextNode;
    Node<T> *previousNode;

public:
    Node();
    Node(T);
    ~Node();

    void setNextNode(Node<T>*);
    void setPreviousNode(Node<T>*);
    Node<T>* getNextNode();
    Node<T>* getPreviousNode();

    T getValue();
};

#endif // NODE_H
