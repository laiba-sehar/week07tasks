#include <iostream>
using namespace std;
void space1(int rows);
void space2(int rows);
void shape1(int rows);
void shape2(int rows);
main()
{
    int rows;

    cout << "Enter number of rows :";
    cin >> rows;
  
    shape1(rows);
    shape2(rows);
}
void space1(int rows)
{
 for(int i=10;i<=1;i--)
 {
    for(int j=1;j<=i;j++)
    cout<<" ";
 }
 cout<<endl;
}
void shape1(int rows)
{

    for (int i = rows; i >= 1; i++)
    {
         for (int j = 1; j <= i; j++)
        {
        
            cout<<"*";
        }
        cout << endl;
    }
}
void shape2(int rows)
{
     for (int i = rows; i>=1; i--)
    {
        for (int j = 1; j <= i; j++)
        {
           
            cout<<"*";
        }
        cout << endl;
    } 
}