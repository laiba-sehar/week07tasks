#include<iostream>
using namespace std;
void print(int rows);
main()
{
  int rows;
  cout<<"Enter number of rows:";
  cin>>rows;
  print(rows);  
}
void print(int rows)
{
  for(int i=rows;i>=1;i--)
  {
    for(int j=1;j<=i;j++)
    {
      cout<<"*";  
    }
    cout<<endl;
  }  
}