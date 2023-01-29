#include<iostream>
using namespace std;
int checkfrequency(int number,int digit);
main()
{
    int number;
    int remainder;
    int digit;
    int result;
    cout<<"Enter a number:";
    cin>>number;
    cout<<"Enter a digit :";
    cin>>digit;
    result=checkfrequency(number,digit);
    cout<<"Number of digits= "<<result;
}
    int checkfrequency(int number,int digit)
    {
      int counter=0;
      int remainder;
      int quo;
     
        
      while(number>0)
    {  
        quo=number/10;
        remainder=number%10;
        number=quo;
    if(remainder==digit) 
    {
       counter++;
    }
    }
   return counter;

}
