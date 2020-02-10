/*
Program: movie_theater.cpp
Author: Valentino Lei'a
Online Class: cs102
Semester: Spring 2018
Description: calculates a theater's gross and net box office profit for a night
*/

#include <iostream>
#include <iomanip>
#include <string>

using namespace std;


int main()
{
    string  movieName;

    int     adultTicketsSold,
            childTicketsSold;

    float   adultTicketPrice = 6.00,
            childTicketPrice = 3.00,
            boxOfficeProfit,
            grossBoxOfficeProfit,
            netBoxOfficeProfit,
            moneyPaidToDistributor;

    // Ask the user for the name of the movie
    cout << "Enter a movie Name: ";
    getline(cin,movieName);

    // Ask the user for the amount of adult tickets sold and validate input
    cout << "How many adult tickets were sold: ";
    cin  >> adultTicketsSold;
        if(cin.fail())
            {
                cout << "Invalid entry.";
            }

    // Ask the user for the amount of child tickets sold and validate input
    cout << "How many child tickets were sold: ";
    cin  >> childTicketsSold;
        if(cin.fail())
            {
                cout << "Invalid entry.";
            }

    // calculate gross box office profit, net box office profit, and amount paid to distributor
    grossBoxOfficeProfit   = ((float)adultTicketsSold * adultTicketPrice) + ((float)childTicketsSold * childTicketPrice);
    netBoxOfficeProfit     = grossBoxOfficeProfit * .20;
    moneyPaidToDistributor = grossBoxOfficeProfit - netBoxOfficeProfit;

    // Print movie, adult/child tickets sold, gross/net profit, and amount paid to distributor to console
    cout << fixed << setprecision(2) << endl;
    cout << "Movie Name:                 " << "\""    << movieName          << "\"" << endl;
    cout << "Adult Tickets Sold:         " << right << setw(8) << adultTicketsSold << endl;
    cout << "Child Tickets Sold:         " << right << setw(8) << childTicketsSold << endl;
    cout << "Gross Box Office Profit:    " << "$" << right << setw(10) << grossBoxOfficeProfit << endl;
    cout << "Net Box Office Profit:      " << "$" << right << setw(10) << netBoxOfficeProfit << endl;
    cout << "Amount Paid to Distributor: " << "$" << right << setw(10) << moneyPaidToDistributor << endl;

    return 0;
}
