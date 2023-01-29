#include<iostream>
using namespace std;
void numberofdots(int number);
main()
{
    int number;
    cout<<"Enter a number :";
    cin>>number;
    numberofdots(number);
    

}
void numberofdots(int number)
{
    int sum=0;
    for(int i=1;i<=number;i++)
    {
        sum=sum+i;
    }
    cout<<sum;

}