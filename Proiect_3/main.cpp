#include "MyArrayList.h"
#include "FelPrincipal.h"
#include "Desert.h"
#include "Ciorba.h"
#include <iostream>

using namespace std;

int main()
{
    MyArrayList<int> arrayList;

    for(int i = 0; i < 10; i++)
        arrayList.pushFront(10 * i);


    MyArrayList<int> arrayList2(arrayList);


    arrayList.drop(2);

    arrayList.iterate();

    arrayList2.iterate();

    FelPrincipal fp;
    cin>>fp;
    cout<<fp;


    return 0;
}
