#include<bits/stdc++.h>
using namespace std;

int main(){

    int t;
    cin>>t;
    while(t--){
        string s;
        cin>>s;
        int l = s.length();
        bool flag1 = false , flag2 = false, flag3 = true;

        if(s[0] == '<' and s[1] == '/'){
                flag1 = true;
            }
        if(s[l-1] == '>'){
                flag2 = true;
            }
        for(int i=2;i<l-1;i++){
            
            if( !((s[i] >= 97 and s[i] <= 122) or ((s[i] >= 48 and s[i] <= 57))) ){
                flag3 = false;
                break;
            }
        }
        // for empty tag

        if( s[2] == '>'){
            flag3 = false;
        }
        if( flag1== true and flag2 == true and flag3 == true){
            cout<<"Success"<<endl;
        }
        else{
            cout<<"Error"<<endl;
        }

    }
    return 0;

}