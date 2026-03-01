#include <iostream>
using namespace std;
main()
{
	int wins, losses , draws , Points ;
	cout<<"Enter total numbers of wins ";
	cin>>wins;
	
	cout<<"enter total numbers of losses";
	cin>>losses;
	
	cout<<"enter total number of draws ";
	cin>>draws;
	
	Points = (wins * 3) + (losses * 0) + (draws*1);
	
	cout<< " Pak team has obtained "<<Points<<" points in asia cup" ;
}
