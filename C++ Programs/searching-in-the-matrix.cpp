#include <iostream>
using namespace std;

int main()
{

    int n, m;
    cin >> n >> m;
    int arr[n][m];
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            cin >> arr[i][j];
        }
    }
    int target;
    cout<<" target?";
    cin >> target;
    bool found = false;

    int row = 0, col = m - 1;
    while ((row < n) && (col >= 0))
    {
        if (target == arr[row][col])
        {
            found = true;
            break;
        }
        else if (target > arr[row][col])
        {
            row++;
        }
        else
        {
            col--;
        }
    }

    if (found)
    {
        cout << "exist ";
    }
    else
    {
        cout << "not exist";
    }
    return 0;
}