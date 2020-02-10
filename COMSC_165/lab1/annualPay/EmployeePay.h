#ifndef EMPLOYEEPAY_H
#define EMPLOYEEPAY_H
#include <string>


class EmployeePay
{
    public:

        static double payAmount, payPeriods, annualPay;

        double calculateAnnualPay(double, double);
        void displayResults();
};

#endif // EMPLOYEEPAY_H
