#include <iostream>
using namespace std;

int main() {
    int t;
    cin>>t;
    while( t--){
        int n;
        cin>>n;
        int sum =0, i=1;
        while(!(sum>n)){
            sum+= i;
            i++;
        }
        cout<<i-2<<endl;
    } 
	return 0;
}
