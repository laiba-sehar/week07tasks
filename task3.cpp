#include<iostream>
using namespace std;
main()
{
    int number;
    int counter=0;
    cout<<"Enter a number";
    cin>>number;
    while(number>0)
    {
      number=number/10;
      counter++;
    }
      cout<<"No of digits :"<<counter;  
    
    
}