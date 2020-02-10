#include "Account.h"
#include <iostream>

using namespace std;

    void Account::linearArraySearchAndDisplayResults(int validChargeNumbers[], int arraySize, int accountChargerNumber){

        bool chargeNumberMatch = false;
        for(int i = 0; i < arraySize; i++){

            if(accountChargerNumber == validChargeNumbers[i]){

                chargeNumberMatch = true;
                break;
            }
        }
        if(chargeNumberMatch = true){

            cout << "\nNumber is valid.";
        }else{
            cout << "\nNumber is invalid.";
        }
    }


