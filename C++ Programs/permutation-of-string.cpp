#include<iostream>
using namespace std;

void permutation(string st, string ans ){
    if ( st.length()==0){
        cout<<ans<<endl;
        return;
    }
    for( int i=0;i<st.length();i++){
        char ch= st[i];

        string resrofstring = st.substr(0,i)+ st.substr(i+1);
        permutation( resrofstring, ans+ch );
    }
}


int main(){

    
    permutation( "abc" ,"" );
    return 0;
}