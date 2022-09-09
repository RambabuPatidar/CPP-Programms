#include <iostream>
using namespace std;

int main() {
	// your code goes here
	int t;cin>>t;
	while(t--){
	    int n;cin>>n;int budget;cin>>budget;
	    int width[n],height[n], price[n];
	    for( int i=0;i<n;i++){
	        cin>>width[i]>>height[i]>>price[i];
	    }
	    int max_area = INT_MIN;
	    for( int i =0 ;i<n;i++){
	        if( price[i]> budget){
	           continue;
	        }
	        else{
	            max_area = max(width[i]*height[i], max_area);
	        }
	    }
        if( max_area == INT_MIN){
            cout<<"no tablet"<<endl;
        }
        else{
	        cout<<max_area<<endl;
        }
	    
	    
	}
	return 0;
}
