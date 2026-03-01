#include <iostream>
using namespace std;
main()
{
	 float intial_velocity , acceleration , time , final_velocity ;
	cout<<"enter intial velocity:";
	cin>>intial_velocity ;
	
	cout<<"enter acceleration :";
	cin>>acceleration;
	
	cout<<"enter total time :";
	cin>>time;
	
	final_velocity = intial_velocity + time*acceleration ;
		cout<<" final velocity is "<<final_velocity<< "";
	
	
}
