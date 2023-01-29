#include <iostream>
using namespace std;
float calculatemoney(int age, int price, int priceOfToy);
main()
{
    float age, price, priceOfToy;
    float result,totalprice;
    cout << "Enter age";
    cin >> age;
    cout << "Enter price of washing machine :";
    cin >> price;
    cout << "Enter price of toy :";
    cin >> priceOfToy;
    result = calculatemoney(age, price, priceOfToy);
    totalprice=result-price;
    if(result>=price)
    {
        cout<<"yes !"<<totalprice;
    }
    else 
    {
        cout<<"No !"<<-(totalprice);
    }
    
}
float calculatemoney(int age, int price, int priceOfToy)
{
    int toys = 0;
    int money = 0;

    int even =1;
    for (int i = 1; i <= age; i++)
    {
        if (i % 2 == 0)
        {

            money = money + (even*10);
            even++;
            money = money - 1;
        
        }
        if (i % 2 != 0)
        {
            toys = toys + 1;
        }
    }
    money= money +(priceOfToy * toys);
    return money;
}