#include<iostream>
using namespace std;

void reverseString( string s , int n){
    if( s.length()==0){
        return;
    }
    string preString = s.substr(1,n);
    reverseString(preString  , n );
    cout<<s[0];

}

int main(){

    string s = "BalramPatidar";
    int n=s.length();
    reverseString(s,n);
    return 0;
}

// #include<iostream>
// using namespace std;

// void reverseString( string s){
//     for ( int i=0;i<((s.length())/2);i++){
//          int temp = s[i];
//         s[i]= s[s.length()-i-1];
//         s[s.length()-i-1] = temp;
         
//     }
//     cout<<s<<endl;
// }

// int main(){

//     string s ={"RambabuPatidarIsAGoodBoy"};
//     reverseString(s);
//     return 0;
// }