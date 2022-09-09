#include <iostream>
using namespace std;

int main() {
	// your code goes here
	
	int t;
	cin>>t;
	while(t>0){
	    int d, n,sum;
	    cin>>d>>n;
	    while(d>0){
           sum  = 0;
	        for(int i=1;i<=n;i++){
	            sum +=i;
	        }
	        n=sum;
	        d--;
	    }
	    cout<<sum<<endl;
	    t--;
	}
	return 0;
}
