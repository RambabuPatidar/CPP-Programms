// do the code here after a week bro.

// solved the first problem which we discussed in the previous code comment

// I am creating the second function named DFS2 to illustrate the second efficient which will reduce the code but the 
// idea is exactly same;

#include<bits/stdc++.h>
using namespace std;


void DFS(vector<vector<int>> &country, int row, int col, int &area,  vector<vector<bool>> &visited) {
    
    visited[row][col] = true;
    area += 1;
    if (col + 1 < country[0].size() && country[row][col + 1] == 0 && visited[row][col + 1] == false) {
        DFS(country, row, col + 1, area, visited);
    }

    if (row + 1 < country.size() && country[row + 1][col] == 0 && visited[row + 1][col] == false) {
        DFS(country, row + 1, col, area, visited);
    }

    if (col - 1 >= 0 && country[row][col - 1] == 0 && visited[row][col - 1] == false) {
        DFS(country, row, col - 1,area, visited);
    }

    if (row - 1 >= 0 && country[row - 1][col] == 0 && visited[row - 1][col] == false) {
        DFS(country, row -1, col,area, visited);
    }
}

void DFS2(vector<vector<int>> &country, int row, int col, int &area,  vector<vector<bool>> &visited){
    if (row >= country.size() || col >= country[0].size()|| row < 0 || col < 0 
        || visited[row][col] == true || country[row][col] == 1){
            return;
        }

        visited[row][col] = true;
        area += 1;
        DFS2(country, row, col + 1, area, visited);
        DFS2(country, row + 1, col, area, visited);
        DFS2(country, row, col - 1,area, visited);
        DFS2(country, row -1, col,area, visited);
}


int numberOfIsland(vector<vector<int>> country,  vector<vector<bool>> &visited){
    int island = 0;
    int maxArea = INT_MIN;
    for (int row = 0; row < country.size(); row++) {
        for (int col = 0; col < country[row].size(); col++) {
            if(!country[row][col] && !visited[row][col]){
                island++;
                int area = 0;
                DFS2(country, row, col, area, visited);
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

    vector<vector<bool>> visited(country.size(), vector<bool>(country[0].size()));
    for (vector<bool> v: visited) {
        for (bool nums : v) {
            cout << nums << " ";
        }
        cout << endl;
    }
    int num = numberOfIsland(country, visited);
    cout << "Total Number of Island: " << num << endl;
    for (vector<bool> v: visited) {
        for (bool nums : v) {
            cout << nums << " ";
        }
        cout << endl;
    }
    return 0;
}
