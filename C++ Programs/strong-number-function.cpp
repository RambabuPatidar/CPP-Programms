// this is not working let know later about the error
#include <iostream>
using namespace std;

int result(int num)
{
    int sum = 0;
    while (num > 0)
    {
        int lastdigit = num % 10;
        int factorial = 1;
        for (int i = 1; i <= lastdigit; i++)
        {
            factorial *= i;
        }
        sum += sum + factorial;
    }
    return sum;
}

int main()
{

    int n;
    cout << "enter a number to check it is an strong number or not?";
    cin >> n;

    int ans = result(n);
    if (n == ans)
    {
        cout << "strong number";
    }
    else
    {
        cout << "not an strong number.";
    }
    return 0;
}