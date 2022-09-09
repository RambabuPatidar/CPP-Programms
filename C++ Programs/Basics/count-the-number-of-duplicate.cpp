#include<iostream>
using namespace std;


int main(){

    string s="aaabbbbccccddddddddmmmmmmmmmmeeeeefffff";
   int n=s.length();
   int counter ;
   int maximum =0;
   for( int i=0;i<n;i++){
       counter =0;
      for( int j=i+1;j<n;j++){
          if( s[i]==s[j]){
              counter++;
              
          }
          else{
              break;
          }
      }
      maximum = max(maximum , counter);
   }
   cout<<maximum+1<<endl;
    return 0;
}