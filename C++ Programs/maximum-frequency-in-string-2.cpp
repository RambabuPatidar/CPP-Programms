#include <iostream>
#include<string>
#include<algorithm>
using namespace std;

int main (){

   string s ="ksjfksjiewakdflksdjienckjdjaiksdkjdhfkdkeiodjkdjdkddkdkjdjaqqqnvcxvasjdaghlahdakjcb";
   int arr[26] ={0};
   for(int i=0;i<s.length();i++){
        arr[s[i] -97]++;

   }
   int storeI =0;
   int maximum =INT_MIN;
   for(int i=0;i<26;i++){
       if(arr[i]>maximum){

           maximum = arr[i];
           storeI =i;

       }
   }

    cout<<maximum<<endl;
    char ch = storeI + 97;
    cout<<ch<<endl;
    return 0;
}