#include <iostream>
using namespace std;
main()
{
    string name1, name2, name3;
    float age1, age2, age3;

    cout << "enter the 1st name:";
    cin >> name1;
    cout << "enter 1st age:";
    cin >> age1;
    cout << "enter the 2nd name:";
    cin >> name2;
    cout << "enter 2nd age:";
    cin >> age2;
    cout << "enter the 3rd name:";
    cin >> name3;
    cout << "enter 3rd age:";
    cin >> age3;

    if (age1 > age2 && age1 > age3)
    {
        cout << " older is " << name1;
    }

    else if (age2 > age1 && age2 > age3)
    {
        cout << " older is" << name2;
    }

    else if (age3 > age1 && age3 > age2)
    {
        cout << "older is" << name3;
    }
}