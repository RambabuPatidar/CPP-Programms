//a small mistakec  lead your code a code of fool programmer for eg.
//at very last for loop put ++ instead -- the result will be sucidal.scary 
#include <iostream>

using namespace std;

int main()
{

    int a, b;
    cin >> a >> b;
    int array[a][b];
    for (int i = 0; i < a; i++)
    {
        for (int j = 0; j < b; j++)
        {
            cin >> array[i][j];
        }
    }
    int rowst = 0, rowed = a - 1, colst = 0, coled = b - 1;

    while ((rowst <= rowed) && (colst <= coled))
    {
        for (int i = colst; i <= coled; i++)
        {
            cout << array[rowst][i] << " ";
        }

        rowst++;

        for (int j = rowst; j <= rowed; j++)
        {
            cout << array[j][coled] << " ";
        }

        coled--;

        for (int i = coled; i >= colst; i--)
        {
            cout << array[rowed][i] << " ";
        }

        rowed--;

        for (int j = rowed; j >= rowst; j--)
        {
            cout << array[j][colst] << " ";
        }

        colst++;
    }

    return 0;
}