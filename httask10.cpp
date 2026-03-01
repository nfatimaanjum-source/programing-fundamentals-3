#include <iostream>
using namespace std;
main()
{
	int n1,n2,n3,n4,n5;
    int n6,n7,n8,n9,n10;
    int n11,n12,n13,n14,n15;

    cout << "Enter 15 numbers:\n";
    cin >> n1 >> n2 >> n3 >> n4 >> n5;
    cin >> n6 >> n7 >> n8 >> n9 >> n10;
    cin >> n11 >> n12 >> n13 >> n14 >> n15;

    int sum = n1 + n2 + n3 + n4 + n5;
    int product = n6 * n7 * n8 * n9 * n10;
    int subtract = n11 - n12 - n13 - n14 -n15;

 cout<<"sum of first 5="<<sum<<""<<endl;
 cout<<"multipe of  second 5 = "<<product<<""endl;
 cout<<"subtract of third 5="<<subtract<<""endl;
}
