#include <iostream>
using namespace std;

int fact(int n)
{
    int factorial = 1;
    for (int i = n; i >= 1; i--)
    {
        factorial = factorial * i;
    }
    return factorial;
}

int main()
{

    int n;

    cin >> n;

    int ans = fact(n);
    cout << ans;

    return 0;
}