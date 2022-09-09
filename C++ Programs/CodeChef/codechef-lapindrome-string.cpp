#include <iostream>
#include<string>
#include<algorithm>
using namespace std;

bool check(string s, int l){
    
    if( l%2==0){
        
        string s1 = s.substr(0,l/2);
       string s2 = s.substr(l/2);
       sort(s1.begin(), s1.end());
       sort(s2.begin(), s2.end());
        if(s1==s2){
            return true;
        }else{
            return false;
        }
    }
    else{
         
       string s1 = s.substr(0,((l/2)));
       string s2 = s.substr(l/2+1);
       sort(s1.begin(), s1.end());
       sort(s2.begin(), s2.end());

        if(s1 ==s2){
            return true;
        }else{
            return false;
        }
    }
}

int main() {
	int t;
	cin>>t;
	while(t--){
	    string s ;
	    cin>>s;
	    int l = s.length();
	    if(check(s,l)){
	        cout<<"YES"<<endl;
	       
	    }
	    else{
	        cout<<"NO"<<endl;
	    }
	    
	    
	}
	return 0;
}