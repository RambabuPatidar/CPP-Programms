#include<iostream>
using namespace std;



int main(){

    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
      string s=  to_string(n);
      int counter =0;
        for( int i=0;i<s.length();i++){
            if( s[i]=='4'){
                counter++;
            }
        }
        cout<<counter<<endl;
       
        
    }
    return 0;
}