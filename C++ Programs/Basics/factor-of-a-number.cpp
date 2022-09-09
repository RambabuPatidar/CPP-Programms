#include <iostream>
using namespace std;

int main()
{
    int number, factor;
    cout << "enter a number to find out the factors of that?";
    cin >> number; //this is the programm to find all the factors of an number.
    for (int i = 1; i <= number; i++)
    {
        if (number % i == 0)
        {
            factor = i; //factor of a number include itself and 1.
            cout << factor << endl;
        }
        else
            continue;
    }
    return 0;
}