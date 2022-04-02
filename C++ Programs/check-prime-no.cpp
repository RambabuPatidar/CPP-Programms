#include <iostream>
using namespace std;

main()
{
    int num, i;

    cout << " This is a programm to calculate wether a number is prime or not.. \n\n";
    cout << " Enter the number you want to check?";
    cin >> num;
    for (i = 2; num > i; i++)
    {
        if (num % i == 0)
        {
            cout << "this is not a prime number.";
            break;
        }
    }
    if (i == num)
    {
        cout << "this a prime number.";
    }

    return 0;
}