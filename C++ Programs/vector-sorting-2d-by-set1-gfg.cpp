#include <iostream>
#include <vector>
#include <algorithm> // to use the sort function
using namespace std;

int main()
{

    vector<vector<int>> v{{3, 4, 2}, {5, 6, 7}, {0, 9, 8}, {11, 34, 4}};

    for (int i = 0; i < 4; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            cout << v[i][j] << " ";
        }
        cout << endl;
    }

    cout << v.size() << endl; // this gives the numeber of rows
    int row = v.size();

    cout << v[0].size() << endl; //this gives the number of cols
    int col = v[0].size();
    sort(v[1].begin(), v[1].end()); //element with smallest value will come on top
    for (int i = 0; i < row; i++)
    { // this will sort the element of the raw
        sort(v[i].begin(), v[i].end());
    }
    for (int i = 0; i < row; i++)
    { // priting the vector matrix
        for (int j = 0; j < col; j++)
        {
            cout << v[i][j] << " ";
        }
        cout << endl;
    }
    return 0;
}