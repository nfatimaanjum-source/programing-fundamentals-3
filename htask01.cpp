#include <Iostream>
using namespace std;
main()
{
    string country ;
    int price, discount ;

    cout<<"enter country:";
    cin >> country;

    cout<<"enter price:";
     cin>> price ;

    if(country== "ireland")
    { discount=  price -(price *0.05); }

    else
    { discount= price - (price *0.10);}

    cout<<"country is "<<country ;
    cout<<"total ticket cost is :"<<discount;
}