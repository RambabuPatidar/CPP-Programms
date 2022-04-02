//write a programm to find out the second largest number of the array.
#include <iostream>
using namespace std;

int main()
{

    int n;
    cin >> n;
    int array[n];
    for (int i = 0; i < n; i++)
    {
        cin >> array[i];
    }
    for (int i = 0; i < n - 1; i++)
    {
        for (int j = i + 1; j < n; j++)
        {
            if (array[j] < array[i])
            {
                int temporary = array[j];
                array[j] = array[i];
                array[i] = temporary;
            }
        }
    }
    cout << array[n - 2];
    return 0;
}