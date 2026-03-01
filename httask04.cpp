#include<iostream>
using namespace std;
main()
{
	int i,p, imposter;
	
	cout<<"enter imposter count:";
	cin>>i;
	
	cout<<"enter players count:";
	cin>>p;
	
	imposter = 100*(i/p);
	cout<<"chance of being imposter are "<<imposter<<"";
}
