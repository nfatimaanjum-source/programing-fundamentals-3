#include <iostream>
using namespace std;
main()
{
    int salary = 10000;
    int laptopPrice = 50000;
    int advancePerMonth = salary * 0.5;
    int monthsRequired = laptopPrice / advancePerMonth;
    int months;
    cout << "enter number of months for advance :";
    cin >> months;
    if (((advancePerMonth * months)) >= laptopPrice)
    {
        cout << "Ali can buy the laptop." << endl;
    } 
    else 
    {
        cout << "Ali cannot buy the laptop." << endl;
        cout << "Months required: " << monthsRequired << endl;
    }
}