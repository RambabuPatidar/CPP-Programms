#include<iostream>
#include<vector>
using namespace std;
// in first one the copy of the vector is gets sotred and no changes can be 
// reflect in the main function , indirectly i mean it is only local to that 
//function only 
// void increaseElement(vector<int> v){
//     v.push_back(100);

// }

// by using this what we calling it call by referrence it can reflect the changes
// and can be somewhat like global variable.
void increaseElement(vector<int> &v){
    v.push_back(100);

}

int main(){

    vector<int> v;
    v.push_back(1);
    v.push_back(2);
    v.push_back(3);
    v.push_back(4);
    v.push_back(5);
    v.push_back(6);
    v.push_back(7);
    v.push_back(8);
    v.push_back(9);
    increaseElement(v);
   for( int i=0;i<v.size();i++){
      cout<<v[i]<<" ";
   }
    return 0;
}

// for more go to gfg passsing vector to a function in c++.