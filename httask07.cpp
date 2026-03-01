#include<iostream>
using namespace std;
main()
{
	float veg,fruit,veg_kilo , fruit_kilo, total ,coins,rupees ;
	cout<<"enter vegtable price  per kilogram in coins:";
	cin>>veg;
	
	cout<<"enter fruit price per kilogram in coins:";
	cin>>fruit;
	
	cout<<"enter total kilogram of vegtables:";
	cin>>veg_kilo;
	
	cout<<"enter total kilo of fruits ";
	cin>> fruit_kilo;
	
	
	total= (veg_kilo * veg) + (fruit_kilo*fruit);
	rupees = total*1.94 ;
	cout<<"total earning in rupees is "<<rupees<<"";
}
