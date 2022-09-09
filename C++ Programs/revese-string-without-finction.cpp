#include<iostream>
#include<string>
#include<algorithm>
using namespace std;



int main(){

    string s="rambabu patidar is a good soul.";
    int max_size = s.length();
    cout<<max_size<<endl;
      char reverse[max_size];
      int strindex=max_size -1;
      int reveindex = 0;
      while( strindex>=0){
          reverse[reveindex]=  s[strindex];
          strindex --;
          reveindex++;
      }

      for(int i=0;i<max_size;i++){
          cout<<reverse[i];
      }

    return 0;
}



// #include<iostream>
// using namespace std;

// int main(){

//     string s ={"rambabu"};
//     int n =s.size();
//     for( int i =n-1 ; i>=0;i--){
//         cout<<s[i];
//     }
//     return 0;
// }