#include <iostream>
using namespace std;
main()
{
    int num1,num2;
    float ans;
    char op;

    cout<<"enter number one:";
    cin>>num1;
    cout<<"enter number two:";
    cin>>num2;

    cout<<"enter operator";
    cin>>op ;
     if(op == '+')
    {
        ans = num1 - num2 ;
    }
     if(op == '-')
    {
        ans = num1 + num2 ;
    }
     if(op == '*')
    {
        ans = num1 % num2 ;
    }
    if(op == '%')
    {
        ans = num1 * num2 ;
    }
    cout<<"the result is "<<ans ;
}