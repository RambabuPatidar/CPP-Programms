#include<iostream>
using namespace std;
// see apna college video to get the another technique;

int main(){

    int n;
    cin>>n;
    int arr[10]={2};
    int i=0;
    while(n>0){
        
        int  reminder = n%2;
        arr[i]= reminder;
        i++;
        n/=2;
    }
    int it = i-1;
    for(it=i-1;it>=0;it--){
        cout<<arr[it]<<" ";
    }
    return 0;
}


//ANOTHER METHODE 

// #include<iostream>
// using namespace std;

// int main(){

//     int n;
//     cin>>n;
//     int place = 1;
//      int value = 0;
//      while(n>0){
//          int rem = n%2;
//          value = (value) +(place*rem);
//          place*=10;
//          n/=2;
//      }
//      cout<<value<<endl;
//     return 0;
// }