#include <iostream>
using namespace std;
void percentage(int number);
main()
{
    int number;
    cout << "Enter a number :";
    cin >> number;
    percentage(number);
}
void percentage(int number)
{
    int sum = 0;
    int num1 = 0;
    int num2 = 0;
    int num3 = 0;
    int p1, p2, p3, p4;
    for (int i = 1; i <= number; i++)
    {
        int num;
        cin >> num;
        sum = sum + num;
        if (num >= 1 && num <= 3)
        {
            num1 = (num1 + num);
        }
        if (num > 3 && num <= 11)
        {
            num2 = (num2 + num);
        }
        if (num > 11)
        {
            num3 = (num3 + num);
        }
    }
    p1 = (num1 * 100) / sum;
    p2 = (num2 * 100) / sum;
    p3 = (num3 * 100) / sum;
    p4 = (num1 * 200 + num2 * 175 + num3 * 120) / sum;
    cout << p1 << endl;
    cout << p2 << endl;
    cout << p3 << endl;
    cout << p4 << endl;
}