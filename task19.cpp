#include<iostream>
using namespace std;
float calculateprice(float money,int year);
main()
{
    int year;
    float money;
    float result;
    cout<<"Enter money : ";
    cin>>money;
    cout<<"Enter year :";
    cin>>year;
    result=calculateprice(money,year);
    
    if(result>0)
    {
        cout<<"Yes He will live carefree life and will have "<<result<<" dollars left";
    }
    if(result<0)
    {
        cout<<"He will need "<<-(result)<<" dollars to survive";
    }


}
float calculateprice(float money,int year)
{
    int age=18;
   for(int i=1800;i<=year;i++)
  {
     
  
    if(i%2==0)
    {
        money=money-12000;
     

    }
    else{
        money=money-(12000+(50*age));
    }
    age=age+1;
 }
 return money; 
}
