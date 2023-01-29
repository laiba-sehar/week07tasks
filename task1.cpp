#include<iostream>
using namespace std;
void printTable(int number);
 int count;
main()
{
int number;
cout<<"Enter a number :";
cin>>number;
for(count=1;count<=10;count++)
{
   printTable(number); 
}
}
void printTable(int number)
{

int num=number*count;
cout<<number <<"*" <<count<<"="<<num<<endl;
}
