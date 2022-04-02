#include<bits/stdc++.h>
using namespace std;

int main(){

	int t,n,k,l;
	string x, y;
	cin>>t;
	while( t--){
		cin>>n>>k;
		vector<string> u, v;
		for(int i=0;i<n;i++){
			cin>>x;
			u.push_back(x);
		}

		for(int i=0;i<k;i++){
			cin>>l;
			for( int j=0;j<l;j++){
				cin>>y;
				v.push_back(y);
			}
		}
		bool flag = 0;
		for( int i=0;i<u.size();i++){
			
			for(int j=0;j<v.size();j++){
				if( u[i] == v[j]){
					flag = 1;
				}
			}
			if( flag){
				cout<<"YES"<<" ";
			}
			else{
				cout<<"NO"<<" ";
			}
			flag =0;
		}
		cout<<endl;
	}
	return 0;
}