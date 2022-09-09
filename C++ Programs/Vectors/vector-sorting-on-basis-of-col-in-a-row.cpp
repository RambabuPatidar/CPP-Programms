#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;

// Driver function to sort the 2D vector
// on basis of a no. of columns in 
// ascending order
bool sortsize(vector<int> &v1 ,vector<int> &v2){
   return v1.size()<v2.size();
}


// Driver function to sort the 2D vector
// on basis of a no. of columns in 
// decending order

bool sortsizee(vector<int> &v1 , vector<int> &v2){
    return v1.size()> v2.size();
}


int main(){
     
    vector<vector<int>> v{{1,2,3},{5,6},{8,4,5,8},{0}};
    // this will iterate to the rows of the vector matrix
    for(int i=0;i<v.size();i++){
        // this loop iterate the elements in row by finding each size
        for( int j=0;j<v[i].size();j++){
            cout<<v[i][j]<<" ";
        }
        cout<<endl;
    }


    // sorting that vector matrix in size term in ascending order

    sort(v.begin(),v.end(),sortsize);

    for( int i=0;i<v.size();i++){
        for( int j=0;j<v[i].size();j++){
            cout<<v[i][j]<<" ";
        }
        cout<<endl;
    }
    cout<<endl;
    // sorting that vector matrix in size term in decending order
     
    sort(v.begin(),v.end(),sortsizee);
    for( int i=0;i<v.size();i++){
        for( int j=0;j<v[i].size();j++){
            cout<<v[i][j]<<" ";
        }
        cout<<endl;
    }
    return 0;
}