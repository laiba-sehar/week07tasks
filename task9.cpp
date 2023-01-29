#include<iostream>
using namespace std;
int calculation(int number1,int number2);
main()
{
int number1,number2;
cout<<"Enter number1  :";
cin>>number1;
cout<<"Enter number2  :";
cin>>number2;
int output=calculation(number1,number2);
cout<<output;
}
int calculation(int number1,int number2)
{
  int hcf;
  int count=1;
  int result;
  while(count!=number1&&count!=number2)
  {
  if(number1%count==0&&number2%count==0)
  {
    hcf=count;
  }
   count++;
  }
 
  result=number1*number2/hcf;

  return result;
}