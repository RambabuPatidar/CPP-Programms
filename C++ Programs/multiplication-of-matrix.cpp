#include <iostream>
using namespace std;

int main()
{

    int n;
    cout << " enter the orders of the matrix ";
    cin >> n;
    int aa[n][n];
    int ab[n][n];
    cout << "this is an square matrix input the element of matrix";
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            cin >> aa[i][j];
        }
    }
    cout << " enter the same order matrix to multiply with .";
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            cin >> ab[i][j];
        }
    }
    //multiplication i wrote this code by myself without ever knowing

    cout << "multipliction of the matrix is :";
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            int sum = 0;
            for (int k = 0; k < n; k++)
            {
                sum += ((aa[i][k]) * (ab[k][j]));
            }
            cout << sum << " ";
        }
        cout << endl;
    }

    return 0;
}