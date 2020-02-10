#include <iostream>
#include "Account.h"

using namespace std;

int main()
{

    int accountChargeNumber = 0;
    int validChargeNumbers[18] = {5658845, 4520125, 7895122, 8080152, 4562555, 5552012,
                                  5050552, 7825877, 1250255, 8777541, 8451277, 1302850,
                                  1005231, 6545231, 3852085, 7576651, 7881200, 4581002};

    cout << "Enter account charge number: ";
    cin >> accountChargeNumber;

    Account ao;
    ao.linearArraySearchAndDisplayResults(validChargeNumbers, ao.arraySize, accountChargeNumber);

    return 0;
}
