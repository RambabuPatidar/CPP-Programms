#include<bits/stdc++.h>
using namespace std;

void DFS(vector<vector<int>> &country, int row, int col) {
    
    country[row][col] = 1;

    if (col + 1 < country[0].size() && country[row][col + 1] == 0) {
        DFS(country, row, col + 1);
    }

    if (row + 1 < country.size() && country[row + 1][col] == 0) {
        DFS(country, row + 1, col);
    }

    if (col - 1 >= 0 && country[row][col - 1] == 0) {
        DFS(country, row, col - 1);
    }

    if (row - 1 >= 0 && country[row - 1][col] == 0) {
        DFS(country, row -1, col);
    }
}

int numberOfIsland(vector<vector<int>> country){
    int island = 0;
    for (int row = 0; row < country.size(); row++) {
        for (int col = 0; col < country[row].size(); col++) {
            if(!country[row][col]){
                island++;
                DFS(country, row, col);
            }
        }
    }
    return island;
}

int main() {
    vector<vector<int>> country = {
        {0, 0, 1, 0, 1, 1, 1, 1},
        {0, 0, 1, 1, 1, 0, 1, 1},
        {1, 1, 1, 1, 1, 1, 1, 0},
        {1, 1, 0, 0, 0, 1, 1, 0},
        {1, 1, 1, 1, 0, 1, 1, 0},
        {1, 0, 1, 1, 1, 1, 1, 0},
        {1, 1, 0, 1, 1, 1, 1, 0}
    };

    cout << numberOfIsland(country);
    return 0;
}