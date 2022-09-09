#include<bits/stdc++.h>
using namespace std;

int main() {
	// your code goes here
	int t;cin>>t;
	while(t--){
	    int n;
	    cin>>n;
	    string s = "";
	    for( int i=0;i<n;i++){
	        char ch;
	        cin>>ch;
	        s += ch;
	    }
        cout<<s;

        int red = 0, blue = 0, green  = 0;
	    for( int i=0;i<n;i++){
            if( s[i] == 'R'){
                red++;
            }
            else if( s[i] == 'B'){
                blue++;

            }
            else{
                green++;
            }
        }
        // cout<<red<<" "<<green<<" "<<blue<<endl;
        int maxi = INT_MIN;
        maxi =  max (red, blue );
        int maximum =INT_MIN;
        maximum = max(maxi , green );
        cout<<endl<<red + blue + green - maximum<<endl;

	}
	return 0;
}
