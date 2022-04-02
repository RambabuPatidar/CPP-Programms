#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;

int main(){

    vector<int> v;
    v.push_back(4);
    v.push_back(3);
    v.push_back(2);
    v.push_back(1);

    v.erase(v.begin()+2);
    
    for( auto element:v){
        cout<<element<<" ";
    }
    cout<<endl;
    for( int i=0; i<v.size();i++){
        cout<<v[i]<<" ";
    }
    cout<<endl;
    vector<int>::iterator it;
    for(it=v.begin();it!=v.end();it++){
        cout<<*it<<" ";
    }
    cout<<endl;
    sort(v.begin(), v.end());
     for( auto element:v){
         cout<<element<<" ";
     }
     v.pop_back();
     v.pop_back();
     cout<<endl;
     for( int i=0;i<v.size();i++){
         cout<<v[i]<<" ";
     }
      pair<int , char> p;
      p.first = 565;
      p.second= 'u';
        cout<<endl;
      cout<<p.first<<endl;
      cout<<p.second<<endl;
      

    return 0;
}