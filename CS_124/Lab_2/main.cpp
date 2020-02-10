#include <iostream>

#include "arrayListType.h"

using namespace std;

int main()
{
    arrayListType<int> intList(100);

    int counter;
    int number;
    int position;

    cout << "Enter 5 integers: ";

    for (counter = 0; counter < 5; counter++)
    {
		cin >> number;
		intList.insertAt(counter, number);
    }

    cout << endl;
    cout << "The list you entered is: ";
    intList.print();
    cout << endl;

    cout << "Enter the position of item to be deleted: ";
    cin >> position;
    intList.removeAt(position);
    cout << "After removing element at " << position
		 << ", the list is:" << endl;
    intList.print();

    intList.removeAll(number);
    cout << endl;
    cout << "The list after deletion is: " << endl;
    intList.print();
    cout << endl;

    return 0;
}
