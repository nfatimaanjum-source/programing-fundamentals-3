#include <iostream>
using namespace std;
main()
{
	string name ;
	 float target,days;
	
	cout<<"enter name of the person:";
	cin>>name ;
	
	cout<<"enter the target goal of the person :";
	cin>>target;
	
	days = target *15 ;
	cout<<""<<name<<" will need "<<days<<" days  to reach target of "<<target<<" according to doctors suggestion";
}
