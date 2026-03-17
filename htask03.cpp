#include <iostream>
using namespace std;
main()
{
    int tem1 ,tem2 , diff;
    cout<<"enter temperature 1:";
    cin>>tem1;
    cout<<"enter temperature 2:";
    cin>>tem2;

    if (tem1>tem2)
    { diff= tem1=tem2;
    } 
    else
    {diff=tem2-tem1;
    }

    if(diff>10)
    { cout<<" Difference is too big!" ;
    }

}