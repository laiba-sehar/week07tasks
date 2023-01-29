#include <iostream>
using namespace std;
void patient(int number);
main()
{
    int number;
    cout << " enter number:";
    cin >> number;
    patient(number);
}
void patient(int number)
{
    int treatedpatients = 0;
    int untreatedpatients = 0;
    int doctors = 7;
    for (int i = 1; i <= number; i++)
    {
        int number1;
        cin >> number1;
        if (number1 <= doctors)
        {
            treatedpatients = treatedpatients + number1;
        }
        if (number1 > doctors)
        {
            untreatedpatients = untreatedpatients + (number1 - doctors);
            treatedpatients = treatedpatients + doctors;
        }
        if (i % 2 == 0)
        {

            if (untreatedpatients > treatedpatients)
            {
                doctors=doctors+1;
                // if (number1 == doctors)
                // {
                //     treatedpatients = number1 + 1;
                // }
                // if (number1 > doctors)
                // {
                //     untreatedpatients = number1 - treatedpatients;
                // }
            }
        }
    }
    cout << "Treated patients :" << treatedpatients;
    cout << "Untreated patients :" << untreatedpatients;
}