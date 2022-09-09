#include<iostream>
#include<vector>
using namespace std;

vector<string> printPaths(int mat[][3], string p, int row, int col, int level) {
	vector<string> list;
	if( row == 2 && col == 2) {
		list.push_back(p);
		mat[row][col] = level;
		for(int i =0; i< 3; i++) {
			for(int j = 0; j < 3; j++) {
				cout << mat[i][j] << " ";
			}
			cout << endl;
		}
		
		cout << p << endl;
		cout << endl;
		return list;
	}

	if(mat[row][col] != 0) {
		
		return list;
	}
	mat[row][col] = level;
	vector<string> left ;
	vector<string> right;
	vector<string > up ;
	vector<string> down;


	if( row < 2) {
		left = printPaths(mat , p + 'D', row + 1, col, level + 1);
	}
	if( col < 2) {
		right = printPaths(mat , p + 'R' , row , col  + 1, level + 1);
	}
	if(row > 0) {
		up = printPaths(mat, p + 'U', row - 1, col, level + 1);
	}
	if(col > 0) {
		down = printPaths(mat, p + 'L', row, col - 1, level + 1);
	}

	list.insert(list.end(), left.begin(), left.end());
	list.insert(list.end(), right.begin(), right.end());
	list.insert(list.end(), up.begin(), up.end());
	list.insert(list.end(), down.begin(), down.end());
	mat[row][col] = 0;
	return list;
}

int main () {

	int mat[][3] = {
				  {0, 0, 0},
				  {0, 0, 0},
				  {0, 0, 0}
				  

	};


	vector<string> ans = printPaths(mat,"", 0, 0, 1);
	for(string str : ans) {
		cout << str << " ";
	}
	return 0;
}