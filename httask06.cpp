#include <iostream>
using namespace std;
main()
{
	double weight, cost, area , PricePerPound;
	float CostPerSquareFoot;
	cout<<"enter the weight of the fertilizer bag (in pounds)";
	cin>> weight;
	
	cout<<"enter the cost of the bag:";
	cin>>cost;
	
	cout<<"enter the area that the bag can cover :";
	cin>> area;
	
	PricePerPound= cost/weight;
	CostPerSquareFoot = cost/area;
	
	cout<<" Price Per Pound "<<PricePerPound<<" ";
	cout<<"cost per square foot "<<CostPerSquareFoot<<"";
}
