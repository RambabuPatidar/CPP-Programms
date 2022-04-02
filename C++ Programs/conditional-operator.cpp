#include <iostream>
using namespace std;

int main()
{
    int number;
    cout << "enter a number?";
    cin >> number;
    number % 2 == 0 ? cout << "even" << endl : cout << "odd" << endl;

    return 0;
}