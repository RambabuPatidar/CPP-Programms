#include<iostream>
using namespace std;
void reverse(int arr[], int start, int end){
    int arr2[end-start] ={0};
    int k = 0;
    for(int i=end;i>=start;i--){
        arr2[k++] = arr[i];
    }
    int s = start;
    for( int i=0;i<=end-start;i++){
        arr[s++] = arr2[i];
    }
}
int main(){
    int n ;cin>>n;
    int arr[n];

    // input the code
    for( int &i: arr){
        cin>>i;
    }
int key ;
    cout<<" enter the value of key"<<endl;
    cin>>key;
    int idx = key-1;
    reverse(arr, 0 , idx);  
    reverse(arr, idx+1 , n-1);
    reverse(arr, 0, n-1);
    


    // printing code 
    for(int i: arr){
        cout<<i<<" ";
    }
    return 0;

}