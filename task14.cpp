#include <iostream>
using namespace std;
void amplify(int number);
main()
{
    int number;
    int result;
    cout << "Enter a number:";
    cin >> number;
    amplify(number);
}
void amplify(int number)
{
    int num;

    for (int count = 1; count <= number; count++)
    {
        if (count % 4 == 0)
        {
           num = count * 10;
          cout<<num<<endl;
        }
        else{
        cout << count<<endl;
        }
    }
}