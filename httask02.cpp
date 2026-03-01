#include <iostream>
using namespace std;
main()
{
	float FPS, minutes , total;
	
	cout<<"enter number of frames per seconds :";
	cin>> FPS;
	
	cout<<"enter total time in minutes :";
	cin>>minutes;
	
	total = minutes * 60* FPS ;
	cout<<"total number of frames are "<<total<<"";
}
