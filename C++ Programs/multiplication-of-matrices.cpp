#include <iostream>
using namespace std;

void multiplyMatrices()
{

    int n1, n2, n3;
    cin >> n1 >> n2 >> n3;
    int ma[n1][n2];int  mb[n2][n3];
    int mans[n1][n3];
    for (int i = 0; i < n1; i++)
    {
        for (int j = 0; j < n2; j++)
        {
            cin >> ma[i][j];
        }
    }
    cout << " imput the second matrix element ";
    for (int i = 0; i < n2; i++)
    {
        for (int j = 0; j < n3; j++)
        {
            cin >> ma[i][j];
        }
    }
    for (int i = 0; i < n1; i++)
    {
        for (int j = 0; j < n3; j++)
        {
            mans[i][j] = 0;
        }
    }

    cout << "the multiplication of the matrix is :";
    for (int i = 0; i < n1; i++)
    {
        for (int j = 0; j < n3; j++)
        {
            for (int k = 0; k < n2; k++)
            {
                mans[i][j] += ma[i][k] * mb[k][j];
            }
        }
    }
    for (int i = 0; i < n1; i++)
    {
        for (int j = 0; j < n3; j++)
        {
            cout << mans[i][j] << " ";
        }
        cout << endl;
    }
    
}
int main(){
    multiplyMatrices();
    return 1;
}