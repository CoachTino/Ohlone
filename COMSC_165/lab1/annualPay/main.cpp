#include <iostream>
#include "EmployeePay.h"

using namespace std;

int main()
{
    EmployeePay eo;
    eo.calculateAnnualPay(eo.payAmount, eo.payPeriods);
    eo.displayResults();

    return 0;
}
