#include<bits/stdc++.h>
using namespace std;

int main() {
	// your code goes here
	int t;
	cin>>t;
	while( t--){
	    int n, k;
	    cin>>n>>k;
	    queue<int> q;
	    for( int i=0;i<n;i++){
	        int temp;
	        cin>>temp;
	        q.push(temp);
	    }
	    string s ="";
	    for(int i=0;i<n;i++){
	        if( k >= q.front()){
	            s = s+ '1';
	            k -= q.front();
                q.pop();   
	        }
            else{
                s = s + '0';
                q.pop();
            }
	    }
        cout<<s<<endl;
	}
	return 0;
}