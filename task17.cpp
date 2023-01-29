#include <iostream>
using namespace std;
void percentage(int number);
main()
{
    int number;
    cout<<"Enter a number :";
    cin>>number;
    percentage(number);
}
void percentage(int number)
{
    int n1 = 0;
    int n2 = 0;
    int n3 = 0;
    int p1, p2, p3;
    for (int i = 1; i <= number; i++)
    {
        int num;
    cin >> num;
    if (num % 2 == 0)
    {
        n1 = n1 + 1;
    }
    if (num % 3 == 0)
    {
        n2 = n2 + 1;
    }
    if (num % 4 == 0)
    {
        n3 = n3 + 1;
    }
    }
    p1=n1*100/number;
    p2=n2*100/number;
    p3=n3*100/number;
    cout<<p1<<"%"<<endl;
    cout<<p2<<"%"<<endl;
    cout<<p3<<"%"<<endl;

}