#include <bits/stdc++.h>
using namespace std;

int main()
{

    int n, q;
    cin >> n >> q;
    int arr[n];
    int query[q];
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    for (int i = 0; i < q; i++)
    {
        cin >> query[i];
    }
    sort(arr, arr + n);
    for (int i = 0; i < q; i++)
    {
        if (query[i] <= arr[n - 1] and query[i] >= arr[0])
        {
            cout << "Yes" << endl;
        }
        else
        {
            cout << "No" << endl;
        }
    }

    return 0;
}