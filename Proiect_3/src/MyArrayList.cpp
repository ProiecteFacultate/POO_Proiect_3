#include "MyArrayList.h"
#include "Node.h"
#include "FelPrincipal.h"
#include "Desert.h"
#include "Ciorba.h"

using namespace std;

template<class T>
MyArrayList<T>::MyArrayList()
{
    this->firstNode = nullptr;
    this->lastNode = nullptr;
    this->length = 0;
}

template<class T>
MyArrayList<T>::MyArrayList(const MyArrayList& obj)
{
    if(obj.length == 0)
    {
        this->length = 0;
        return;
    }

    Node<T> *actualNodeInObj = obj.firstNode;
    Node<T> *newNode = new Node<T>(actualNodeInObj->getValue());
    this->firstNode = newNode;
    this->lastNode = newNode;

    while(actualNodeInObj->getNextNode() != nullptr)
    {
        actualNodeInObj = actualNodeInObj->getNextNode();
        newNode = new Node<T>(actualNodeInObj->getValue());
        this->lastNode->setNextNode(newNode);
        newNode->setPreviousNode(this->lastNode);
        this->lastNode = newNode;
    }

    this->length = obj.length;
}

template<class T>
MyArrayList<T>::~MyArrayList()
{
    if(this->length == 0)
        return;

    Node<T> *actualNode = this->firstNode;
    while(actualNode->getNextNode() != nullptr)
    {
        actualNode = actualNode->getNextNode();
        delete actualNode->getPreviousNode();
    }

    delete this->lastNode;     //in final actualNode ajunge sa indice catre acelasi nod catre care indica this->lastNode

    cout<<"ARRAYLIST DELETED"<<endl;
}


//////////////////////////////////////////////////////////////
////////////////////////////////////////////////////////////
/////////////////////////////////////////////////////////

template<class T>
void MyArrayList<T>::pushFront(T object)
{
    Node<T> *newNode = new Node<T>(object);
    if(firstNode == nullptr)
        this->firstNode = newNode;
    else
        this->lastNode->setNextNode(newNode);

    newNode->setPreviousNode(this->lastNode);
    this->lastNode = newNode;
    this->length++;
}

template<class T>
void MyArrayList<T>::popFront()
{
    if(this->length != 0)
    {
        this->lastNode = this->lastNode->getPreviousNode();
        delete this->lastNode->getNextNode();
        this->lastNode->setNextNode(nullptr);
        this->length--;
    }
}


template<class T>
void MyArrayList<T>::pushBack(T object)
{
    Node<T> *newNode = new Node<T>(object);
    if(firstNode == nullptr)
        this->lastNode = newNode;
    else
        this->firstNode->setPreviousNode(newNode);

    newNode->setNextNode(this->firstNode);
    this->firstNode = newNode;
    this->length++;
}


template<class T>
void MyArrayList<T>::popBack()
{
    if(this->length != 0)
    {
        this->firstNode = this->firstNode->getNextNode();
        delete this->firstNode->getPreviousNode();
        this->firstNode->setPreviousNode(nullptr);
        this->length--;
    }
}



template<class T>
T MyArrayList<T>::get(int pos)
{
    int actualPos = 0;
    Node<T> *actualNode = this->firstNode;

    while(actualPos != pos)
    {
        actualPos++;
        actualNode = actualNode->getNextNode();
    }

    return actualNode->getValue();
}


template<class T>
void MyArrayList<T>::add(T object, int pos)
{
    int actualPos = 0;
    Node<T> *actualNode = this->firstNode;

    while(actualPos != pos)
    {
        actualPos++;
        actualNode = actualNode->getNextNode();
    }

    Node<T> *newNode = new Node<T>(object);
    newNode->setPreviousNode(actualNode->getPreviousNode());
    actualNode->getPreviousNode()->setNextNode(newNode);
    actualNode->setPreviousNode(newNode);
    newNode->setNextNode(actualNode);

    this->length++;
}


template<class T>
void MyArrayList<T>::drop(int pos)
{
    if(this->length <= pos)
        return;

    int actualPos = 0;
    Node<T> *actualNode = this->firstNode;

    while(actualPos != pos)
    {
        actualPos++;
        actualNode = actualNode->getNextNode();
    }

    actualNode->getPreviousNode()->setNextNode(actualNode->getNextNode());
    actualNode->getNextNode()->setPreviousNode(actualNode->getPreviousNode());
    delete actualNode;

    this->length--;
}

template<class T>
bool MyArrayList<T>::isEmpty()
{
    if(this->length == 0)
        return true;

    return false;
}

template<class T>
void MyArrayList<T>::iterate()
{
    if(this->length == 0)
        return;

    Node<T> *actualNode = this->firstNode;

    while(actualNode->getNextNode() != nullptr)
    {
        T value = actualNode->getValue();
        cout<<value<<" ";
       // cout<<actualNode->getValue()<<" ";
        actualNode = actualNode->getNextNode();
    }

    T value = actualNode->getValue();
        cout<<value<<" ";
    //cout<<actualNode->getValue()<<endl;
}


template<class T>
int MyArrayList<T>::getLength()
{
    return this->length;
}


template<class T>
void MyArrayList<T>::copyy(MyArrayList<T>& obj)
{
    if(this->length != 0)          //sterge elementele din lista veche
    {
        Node<T> *actualNode = this->firstNode;
        while(actualNode->getNextNode() != nullptr)
        {
            actualNode = actualNode->getNextNode();
            delete actualNode->getPreviousNode();
        }

        delete this->lastNode;
        this->firstNode = nullptr;
        this->lastNode = nullptr;
    }

    if(obj.length == 0)
    {
        this->length = 0;
        return;
    }

    Node<T> *actualNodeInObj = obj.firstNode;
    Node<T> *newNode = new Node<T>(actualNodeInObj->getValue());
    this->firstNode = newNode;
    this->lastNode = newNode;

    while(actualNodeInObj->getNextNode() != nullptr)
    {
        actualNodeInObj = actualNodeInObj->getNextNode();
        newNode = new Node<T>(actualNodeInObj->getValue());
        this->lastNode->setNextNode(newNode);
        newNode->setPreviousNode(this->lastNode);
        this->lastNode = newNode;
    }

    this->length = obj.length;
}


template class MyArrayList<int>;
template class MyArrayList<string>;
template class Node<FelPrincipal>;
template class Node<Ciorba>;
template class Node<Desert>;
