#include<iostream>
#include<vector>  // to use vector
#include<iterator> // for  back iterator
#include<algorithm> // for copy and assigning
using namespace std;
int main(){

    vector<int> v1;
      
    v1.push_back(12);
    v1.push_back(1);
    v1.push_back(121);

    vector<int> v2;
    // 1st way to copy  iterate linearly
    for( int i=0;i<v1.size();i++){
        v2.push_back(v1[i]);             
    }
    for( int i =0; i<v2.size();i++){
        cout<<v2[i]<<" ";
    }
    cout<<endl;
    v2.push_back(100);
    v2.push_back(1234);
    // 2nd way to copy    using assign operator =
    v1=v2;              
     for( auto i = v1.begin();i!=v1.end();i++){
         cout<<*i<<" ";
     }

    cout<<endl; 
    //3rd way to copy     directly      
     vector<int> v3(v1);
     for( int i=0;i<v3.size();i++){
         cout<<v3[i]<<" ";
     }
    cout<<endl;
     // 4th way to copy    inbuilt function

     vector<int> v4 ={3,4,53,2,434,2};
     copy(v4.begin(), v4.end(),back_inserter(v3));

     for( auto element:v3){
         cout<<element<<" ";
     }
     cout<<endl;
     cout<<endl;
     // 5th way to copy  
     v4.assign(v1.begin(), v1.end());
     vector<int>::iterator it;
     for( it = v4.begin();it!=v4.end();it++){
         cout<<*it<<" ";
     }
    return 0;
}