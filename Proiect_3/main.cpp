#include "MyArrayList.h"
#include <iostream>

using namespace std;

int main()
{
    MyArrayList<int> arrayList;

    for(int i = 0; i < 0; i++)
        arrayList.pushFront(10 * i);

    arrayList.drop(3);



    return 0;
}
