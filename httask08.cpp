#include<iostream>
using namespace std;
main()
{
	string name;
	float adult,children, adult_ticket , children_ticket , charity;
	float total_sold , charity_percentage , remain;
	
	cout<<"enter the movie name :";
	cin>>name;
	
	cout<<"enter the children ticket price :";
	cin>>children;
	
	cout<<"enter the adult ticket price:" ;
	cin>>adult;
	
	cout<<"enter the number of adult tickets sold:";
	cin>> adult_ticket ;
	
	cout<<"enter the number of children tickets sold:";
	cin>>children_ticket;
	
	cout<<"enter the total percentage of charity :";
	cin>>charity;
	
	total_sold= adult*adult_ticket + children*children_ticket ;
	charity_percentage = total_sold*charity/100;
	
	remain= total_sold - charity_percentage;
	
	
	cout<<"-------------------------------------------------- "<<endl;
	
	cout<<"movie name :"<<name<<" " <<endl;
	cout<<"total amount generated from ticket sales : "<<total_sold<<"" <<endl;
	cout<<"donation to charity: "<<charity<<"" <<endl;
	cout<<"remaing amount after donation:  "<<remain<<"" <<endl;
	
	
	
}
