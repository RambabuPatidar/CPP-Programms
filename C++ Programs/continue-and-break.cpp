#include <iostream>
using namespace std;

int main()
{

    int num1, num2;
    cout << " Enter the number a and b ";
    cin >> num1 >> num2;
    if (num1 != num2)
    {
        int sum = num1 + num2;
        cout << " the sum of two number is :" << sum << endl;
    }
    else
    {
        int sum = (num1 + num2) * 3;
        cout << sum;
    }
    return 0;
}