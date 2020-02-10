#include <iostream>
#include "SortOrder.h"

using namespace std;

int main()
{
    SortOrder so;

    int arrayOne[so.arraySize] = {8,4,5,1,3,9,10,2,6,7};
    int arrayTwo[so.arraySize] = {10,2,9,7,4,3,6,8,1,5};

    so.bubbleSort(arrayOne, so.arraySize);
    so.selectionSort(arrayTwo, so.arraySize);

    return 0;
}
