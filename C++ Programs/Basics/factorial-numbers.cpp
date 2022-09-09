#include <iostream>
using namespace std;

int main()
{

    int number, factorial = 1;
    cout << "Enter any number of which you want to find factorial?";
    cin >> number;
    int n;
    n = number;
    while (n > 0)
    {
        factorial = factorial * n;
        n--;
    }
    if (n == 0)
    {
        cout << " the factorial of the number is :" << factorial << endl;
    }
    return 0;
}