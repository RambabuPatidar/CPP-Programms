#include<iostream>
#include<vector>
using namespace std;

int main(){

    vector<int> v;
     v.push_back(1);
     v.push_back(3);
     v.push_back(5);

     for( int i=0;i<v.size();i++){
         cout<<v[i]<<" ";
     }
     cout<<endl;
     //1 3 5
     vector<int>::iterator it;
     for( it = v.begin();it!=v.end();it++){
         cout<<*it<<" ";

     }
    cout<<endl;
     for( auto element:v){
         cout<<element<<" ";
     }
     cout<<endl;
     v.pop_back(); // 1 3

     vector<int> v2 (4, 46);
     // 46 46 46 46

     swap(v, v2); // we have swaped values if the vector.

     for(auto element:v){
         cout<<element<<" ";
     }
     cout<<endl;
     for( auto element:v2){
         cout<<element<<" ";
     }
     
     
    return 0;
}