#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;

//using function we can manage which col we want to sort
bool sortcol( vector<int> &v1 , vector<int> &v2){
     return v1[1]>v2[1];
}

int main(){
   
   vector<vector<int>> v{{211,4,7},
                        {3,70,9},
                        {12,54,123}};
    
    int n= v.size();
    int m= v[0].size();
    sort(v.begin(), v.end(),sortcol);
    for( int i=0;i<n;i++){
        for(int j=0;j<m;j++){
            cout<<v[i][j]<<" ";
        }
        cout<<endl;
    }
    
    return 0;
}