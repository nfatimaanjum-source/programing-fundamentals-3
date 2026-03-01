#include<iostream>
using namespace std;
main()
{
	float voltage , power , current ;
	cout<<"enter voltage (in volts)";
	cin>>voltage;
	
	cout<<"enter current  (in watts)";
	cin>>power;
	
	power = current * voltage ;
	cout<<"the power is "<<power<<"";
	
	
}
