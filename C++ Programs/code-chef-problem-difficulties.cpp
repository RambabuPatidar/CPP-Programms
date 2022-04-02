#include <iostream>
using namespace std;

int main() {
	// your code goes here
	int t;cin>>t;
    while(t--){
        int arr[4];
		int check[10] = {0};

		for( int i=0;i<4;i++){
			cin>>arr[i];
			check[arr[i] -1]++;
		}
		int maximum = INT_MIN;
		for( int i=0;i<10;i++){
			maximum = max(maximum, check[i]);
		}

		if( maximum == 1 or maximum == 2){
			cout<<2<<endl;
		}
		else if(maximum == 3){
			cout<<1<<endl;
		}
		else{
			cout<<0<<endl;
		}

		  
    }
	return 0;
}