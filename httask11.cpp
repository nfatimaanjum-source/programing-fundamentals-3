#include <iostream>
using namespace std;
 main()
{
    int age, moves , houses , average;

    cout<< "Enter the person's age: ";
    cin>> age;

    cout << "Enter the number of times they've moved: ";
    cin>> moves;

    houses = moves + 1;
    average = age / houses;
    
    cout<< "Average number of years lived in the same house: " << average <<"";


}
