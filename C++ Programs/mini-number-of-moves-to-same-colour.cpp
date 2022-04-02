#include<iostream>
using namespace std;
 //there are  only two type of letter in a string and we have to 
 //find the mini number of changes to do the whole string of 
 //same colours and we have to print the number which is minimum 

 int changeColour( string s){
     int counter1=0;
     int counter2=0;

    for( int i=0;i<s.length();i++){
        if( s[i]=='G'){
            counter1++;
        }
        else if (s[i]=='R'){
            counter2++;
        }
        else{
            cout<<"there are more than two colours variables";
        }
        
        
    }
    int ans = min(counter1,counter2);
    return ans;


 }

int main(){

    string s ={"RGRGR"};
    cout<<changeColour(s);
    return 0;
}