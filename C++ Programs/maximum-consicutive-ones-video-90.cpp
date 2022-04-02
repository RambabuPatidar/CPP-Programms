#include<iostream>
using namespace std;

int maximumOnes(int arr[],int n, int k){
        int maxOnes = -1;
    for( int i=0;i<n;i++){
        int ones = k;
        int count =0;
        int j = i;
        while(ones and j<n){
            if( arr[j] == 0){
                ones--;
            }
            count++;
            j++;
        }
        while( arr[j] == 1){
            count++;j++;
        }
        if( count>maxOnes){
            maxOnes = count;
        }
    
    }
    return maxOnes;
}

int main(){

    int n;
    cin>>n;
    int arr[n];
    for( int i=0;i<n;i++){
        cin>>arr[i];
    }
    int k ;cout<<"enter the value of K"<<endl;
    cin>>k;
   cout<< maximumOnes(arr, n, k);
    return 0;
}
// this is mine methode try seeing the video methode also 
// that is also an amazing method
