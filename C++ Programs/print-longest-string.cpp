#include<iostream>
using namespace std;

string longestString( string name[]){
    int maximum = INT_MIN;
    string  ans;
    for( int i=0;i<5;i++){
        int sOfString =name[i].size();
        if( sOfString>maximum){
            maximum = sOfString;
            ans = name[i];
        }


    }
    return ans;
}

int main(){

    string name[5]={"maya","mayapatidar","mayapatidarpatidar","mayapa","mayapatidarpatidarmaya"};
    cout<<longestString(name);
    return 0;
}