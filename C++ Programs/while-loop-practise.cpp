#include <iostream>
using namespace std;

int main()
{

    int overtime, employee = 1, number = 1;

    while (employee <= 10)
    {
        cout << "employee " << number << " Enter the over time you had done.\n";
        cin >> overtime;
        if (overtime > 0)
        {
            int bonus = overtime * 12;
            cout << "the bonus you made is :" << bonus << endl;
        }
        else
        {
            cout << "your overtime is 0 and hence you are not made any bonus.\n";
        }

        employee++;
        number++;
    }
    return 0;
}