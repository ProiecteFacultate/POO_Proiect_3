#include "Node.h"

using namespace std;

template<class T>
Node<T>::Node()
{
    this->nextNode = nullptr;
    this->previousNode = nullptr;
}

template<class T>
Node<T>::Node(T value)
{
    this->nextNode = nullptr;
    this->previousNode = nullptr;
    this->value = value;
}

template<class T>
Node<T>::~Node()
{
    //cout<<"NODE DELETED, VALUE: "<<this->value<<endl;
}

//////////////////////////////////////////////////////////////
////////////////////////////////////////////////////////////
/////////////////////////////////////////////////////////

template<class T>
void Node<T>::setNextNode(Node<T> *node)
{
    this->nextNode = node;
}

template<class T>
Node<T>* Node<T>::getNextNode()
{
    return this->nextNode;
}

template<class T>
void Node<T>::setPreviousNode(Node<T> *node)
{
    this->previousNode = node;
}

template<class T>
Node<T>* Node<T>::getPreviousNode()
{
    return this->previousNode;
}



template<class T>
T Node<T>::getValue()
{
    return this->value;
}




template class Node<int>;
template class Node<string>;
