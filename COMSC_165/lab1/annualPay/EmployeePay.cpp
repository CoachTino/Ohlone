#include "EmployeePay.h"
#include <iostream>

using namespace std;

    double EmployeePay::payAmount = 2200.0;
    double EmployeePay::payPeriods = 26;
    double EmployeePay::annualPay = 0;

    double EmployeePay::calculateAnnualPay(double amount, double periods){

        annualPay = amount * periods;
        return annualPay;
    }

    void EmployeePay::displayResults(){

    cout << "Employee's annual pay is: " << annualPay << ".";
    }
