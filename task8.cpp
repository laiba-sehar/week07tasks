#include <iostream>
using namespace std;
void printpercentage(int number);
main()
{
    int number;
    cout << "Enter a number:";
    cin >> number;
    printpercentage(number);
}
void printpercentage(int number)
{
    float n1 = 0;
    float n2 = 0;
    float n3 = 0;
    float n4 = 0;
    float n5 = 0;
    float p1, p2, p3, p4, p5;

    for (int i = 1; i <= number; i++)
    {
        int number2;
        cin >> number2;

        if (number2 > 0 && number2 <= 199)
        {
            n1 = n1 + 1;
        }
        if (number2 >= 200 && number2 <= 399)
        {
            n2 = n2 + 1;
        }
        if (number2 >= 400 && number2 <= 599)
        {
            n3 = n3 + 1;
        }
        if (number2 >= 600 && number2 <= 799)
        {
            n4 = n4 + 1;
        }
        if (number2 >= 800)
        {
            n5 = n5 + 1;
        }
    }


    p1 = n1 * 100 / number;
    cout << p1 << endl;
    p2 = n2 * 100 / number;
    cout << p2 << endl;
    p3 = n3 * 100 / number;
    cout << p3 << endl;
    p4 = n4 * 100 / number;
    cout << p4 << endl;
    p5 = n5 * 100 / number;
    cout << p5 << endl;
}