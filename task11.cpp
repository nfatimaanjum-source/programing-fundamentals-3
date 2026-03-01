#include<iostream>
using namespace std;
main()
{
	float population , birth_rate , three_decade ;
	
	cout<<"enter current world population:";
	cin>>population;
	
	cout<<"enter births per month:";
	cin>> birth_rate ;
	
	three_decade = birth_rate * 360 ;
	
	cout<<"population in three decades will be "<<three_decade<<"";
	
	
}
