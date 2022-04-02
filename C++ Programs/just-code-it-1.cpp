#include<iostream>
using namespace std;

int main(){

	int t;
	 cin >> t ;
	 int k = 1;
	 while( t --) {
		 int row;
		 int col;
		 cout << "Case #" << k++ << ":" << endl;
		 cin >> row >> col;
		string s = "";
		string ss = "";
		 for(int i=1; i<=2*col +1 ; i++) {
			 if( (i & 1 ) == 1) {
				 s += '+';
				 ss += '|';
			 }
			 else{
				 s+= '-';
				 ss += '.';
			 }
		 }

		 for(int i=1 ; i<= 2*row +1 ; i++) {
			if( i == 1 ) {
				cout << ".." << s.substr(2,2*col -1);
			}
			else if(i == 2) {
				cout << ".." << ss.substr(2,2*col-1);
			}
			else if( (i & 1 ) ==1){
				cout << s;
			}
			else{
				cout << ss;
			}
			cout << endl;
			
		 }
		 
	 }
	return 0;
}