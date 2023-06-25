#include<bits/stdc++.h>
using namespace std;

void DFS(vector<vector<int>> &country, int row, int col, int &area) {
    
    country[row][col] = 1;
    area += 1;
    if (col + 1 < country[0].size() && country[row][col + 1] == 0) {
        DFS(country, row, col + 1, area);
    }

    if (row + 1 < country.size() && country[row + 1][col] == 0) {
        DFS(country, row + 1, col, area);
    }

    if (col - 1 >= 0 && country[row][col - 1] == 0) {
        DFS(country, row, col - 1,area);
    }

    if (row - 1 >= 0 && country[row - 1][col] == 0) {
        DFS(country, row -1, col,area);
    }
}

int numberOfIsland(vector<vector<int>> country){
    int island = 0;
    int maxArea = INT_MIN;
    for (int row = 0; row < country.size(); row++) {
        for (int col = 0; col < country[row].size(); col++) {
            if(!country[row][col]){
                island++;
                int area = 0;
                DFS(country, row, col, area);
                maxArea = max(maxArea, area);
            }
        }
    }
    cout <<"maximum area island : "<< maxArea << endl;
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

    int num = numberOfIsland(country);
    cout << "Total Number of Island: " << num << endl;
    return 0;
}

// Note something not good in this code:
/*
1. I had changed the original array so if you don't want to do that you can take a visited matrix and work 
2. I had put conditions for individual call in the DFS that can also be removed with a single base codition.
    Here we are first thinking the consequences and then making calls 
    but we can make call and then see the cosequences that does we are on right move with base condition.

    that is provided in the next code.
*/