#include <iostream>
using namespace std;
main()
{
	float KB , bits , MB, bytes ;
	
	cout<<"enter the size of megabytes (MB)" ;
	cin>>MB;
	
	bits = MB * 1024 * 1024 * 8 ;
	
	cout<< ""<<MB<<"  is equal to "<<bits<<" bits ";
	}
