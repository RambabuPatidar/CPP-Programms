#include<iostream>
#include<vector> 

using namespace std;

void possibleSubSetPrint(int arr[], int n , vector<int> innerList, int index) {
    if( n == index ) {
        for(int i=0; i<innerList.size(); i++) {
            cout << innerList[i] << " ";
        }
        cout << endl;
        return ;
    }

    possibleSubSetPrint(arr, n , innerList, index+ 1);

    innerList.push_back(arr[index]);

    possibleSubSetPrint(arr, n , innerList, index + 1);

}

vector<vector<int>> possibleSubSet(int arr[],int n, vector<int> innerList, int index ) {
    vector<vector<int>> list ;
    if(index == n ) {
        list.push_back(innerList);
        return list;
    }

    vector<vector<int>> left = possibleSubSet(arr, n, innerList, index + 1) ;

    innerList.push_back(arr[index]);
    vector<vector<int>> right = possibleSubSet(arr, n, innerList, index + 1);

    list.insert(list.end(), left.begin(), left.end());
    list.insert(list.end(), right.begin(), right.end());
    return list;
}

int main() {

    int arr[] = {1,2, 3};
    vector<int> innerList;
    vector<vector<int>> list = possibleSubSet(arr, 3, innerList, 0);

    for(int i =0; i<list.size(); i++) {
         cout << "[ ";
        for(int j = 0 ; j<list[i].size(); j++) {
           
            cout << list[i][j] << " ";
        }
        cout << "]";
        cout << endl;
    }

    cout << endl;
    vector<int> innerList02;
    possibleSubSetPrint(arr, 3, innerList02, 0);
    return 0;
}