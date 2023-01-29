#include<iostream>
using namespace std;
void checksum(int number);
main()
{
int number;
cout<<"Enter a number :";
cin>>number;
checksum(number);
}
void checksum(int number)
{
   int R,Q;
   int sum=0;
   int count=0;
   while(number>0)
   {
    R=number%10;
    Q=number/10;
    number=Q;
    sum=sum+R;
    count++;
   }
   cout<<sum; 
}
