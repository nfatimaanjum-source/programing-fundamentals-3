#include <iostream>
using namespace std;
main()
{
    int rose , tulips , wroses , discount , total ;
    cout<<"enter no. of red roses:";
    cin>>rose;
    
    cout<<"enter no. of white  roses:";
    cin>>wroses;
    
    cout<<"enter no. of tulips:";
    cin>>tulips;
    
    total= ( rose*2.00)+ (wroses*4.100)+(tulips*2.50);

    if(total>200)
    {
        discount= total-(total*0.20);
        cout<<"total price:"<<total;

        
        cout<<"total after discount:"<<discount;
    }



    

    
}