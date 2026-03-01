#include<iostream>
using namespace std;
main()
{
string name;
float   matric_marks,inter_marks,ecat;
float aggregate;
cout<<"enter your name";
cin>>name;

cout<<"total marks in matric (out of 1100):" ;
cin>> matric_marks ;

cout<<" total marks in inter (out of 550):" ;
cin>> inter_marks ;

cout<<" total marks in ecat (out of 400):";
cin>>ecat;

aggregate = ((matric_marks /1100)*10) + ((inter_marks / 550)*40) + ((ecat /400)*50);

cout<< ""<<name<<" your aggregate is "<<aggregate<<"";


}
