#include <iostream>
using namespace std;

int main()
{

    int n;
    cin >> n;
    char palindrome[n + 1];
    cin >> palindrome;
    bool check = 1;
    for (int i = 0; i < n; i++)
    {
        if (palindrome[i] != palindrome[n - 1 - i])
        {
            check = 0;
            break;
        }
    }
    if (check)
    {
        cout << " this name is a palindrome number.";
    }
    else
    {
        cout << "this is not a palindrome number.";
    }
    return 0;
}