#include<iostream>
using namespace std;
main()
{
	int num , sum;
	cout<<"enter a four digit number";
	cin>>num;
	
	int dig1,dig2,dig3,dig4;
	 
	
	dig1 = num%10;
	num=num/10;
	
	dig2 = num%10;
	num=num/10;
	
	dig3= num%10;
	num=num/10;

    dig4=num%10;
    num=num/10;
    
    sum = dig1+dig2+dig3+dig4 ;
    cout<<" sum of digits= "<<sum<<"";
}
