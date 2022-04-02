#include <iostream>
using namespace std;

int main() {
	// your code goes here
	int t;cin>>t;
	while( t--){
	    int a, b;
	    cin>>a>>b;
	    int n =1 ;
	    while(a>=0  and b>= 0){
	        if(n%2 !=0){
	           
	            a -= n;
	        }
	        else{
	          
	            b-=n;
	        }
	        n++;
	    }
	    if(a<0){
	        cout<<"Bob"<<endl;
	    }
	    else{
	        cout<<"Limak"<<endl;
	    }
	}
	return 0;
}
// Bob
// Limak
// Limak
// Bob
// Bob
// Limak
// Limak
// Bob
// Bob
// Bob