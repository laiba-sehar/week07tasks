#include<iostream>
using namespace std;
main()
{
   int number;
   int previous=0;
   int current=1;
   int next; 
   cout<<"Enter a number :";
   cin>>number;
   cout<<previous<<endl;
   cout<<current<<endl;
   for(int count=1;count<=number-2;count++)
   {
     next=previous+current;//FIBONACCI SERIES 
    cout<<next<<endl;//in this series next number is the sum of previous two numbers 
     previous=current;
     current=next;
    
     
   }
}