#include <iostream>
using namespace std;

int gcd(int l, int b){
    if( b==0){
        return l;
        
    }
    return gcd(b,l%b);
}

int main() {
	// your code goes here
	int t;
	cin>>t;
	while( t--){
	    int l, b;
	    cin>>l>>b;
	    int sqL = gcd(l,b);
	    cout<<(l*b)/(sqL*sqL)<<endl;
	}
	return 0;
}