/******************************************************************************
The program calculates and displays the change in price
for a country club membership over the period.

@version 11/01/2020
*******************************************************************************/
#include <iostream>
#include <iomanip>
using namespace std;

int main()
{
    double price = 2500;
    double percent = 0.04;
    int period_years = 6; 
    
    cout << "Original fee for the country club membership is $" << price << endl;
    cout << "The price will be increased by 4% each year for the next "
         << period_years << " years\n\n";
    
    for (int number = 1; number <= period_years; number++) {
        price += price * percent;
        cout << setw(4) << number << " year" << setw(4) << '$' << price << endl;
    }
    
    return 0;
}
