#include <iostream>
using namespace std;
main()
{
   string shapes;
   
   cout<<"enter shapes:";
   cin>>shapes;

   if(shapes=="square")
   {
    int sides , square;
    cout<<"enter sides";
    cin>>sides;
    square = sides*sides ;
    cout<< "square:"<<square;
    
   }
   else if (shapes =="triangle")
   {
    int base,height, triangle ;
    cout<<"enter base:";
    cin>>base;
    cout<<"enter height:";
    cin>>height;
    triangle= 0.5*base*height;
    cout<<"triangle :"<<triangle;

   }
   else if ( shapes=="rectangle")
   {
    int lenght , width , rec ;
    cout<<" enter lenght:";
    cin>>lenght;
    cout<<"enter width:";
    cin>>width;
    rec= lenght*width;
    cout<<"rectangle is : "<<rec ;
   }
   else if (shapes == "circle" )
   {
    int circle,radius;
    cout<<"enter radius:";
    cin>>radius;
    circle= 3.14*(radius*radius);
    cout<<"radius of circle is :"<<circle;
   }
}