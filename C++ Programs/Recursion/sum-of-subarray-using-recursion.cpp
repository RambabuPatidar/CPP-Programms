#include <iostream>
#include <math.h>

using namespace std;

void sumOfSubarray(int arr[], int n, int i)
{
    if (i == n)
    {
        return;
    }

    int tempI = i;
    int sum = 0;
    for (; i < n; i++)
    {

        sum += arr[i];
        cout << sum << " ";
    }
    i = tempI;

    sumOfSubarray(arr, n, i + 1);
}

int main()
{

    int n;
    cin >> n;
    int arr[n];
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    sumOfSubarray(arr, n, 0);

    return 0;
}