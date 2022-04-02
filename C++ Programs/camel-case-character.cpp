#include<iostream>
using namespace std;

int main(){

    string s={"CamelCasE"};
    int counter =0;
    for( int i=0;i<s.length();i++){
        if( s[i]<=91 && s[i]>=65){
            counter++;
        }else{
            continue;
        }

    }
    cout<<"the number of camel case character are:"<<counter<<endl;
    return 0;
}