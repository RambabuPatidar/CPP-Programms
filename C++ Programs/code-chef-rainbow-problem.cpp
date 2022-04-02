#include<iostream> 
using namespace std ;

// this is the neive approch this can be changed in many better way ;

int mirror(int arr[] , int n){
    int i = 0;
    int j= n-1;
    int flag = true;
    while( i < j){
        if( arr[i] != arr[j]){
            flag = false;
        }
        i++;j--;
    }
    return flag;
}
 
int main( ){
    int t;
    cin>>t;
    while( t--){
        int n; 
        cin>>n;
        int arr[n];
        for( int i=0;i<n;i++){
            cin>>arr[i];
        }
        
        if(n%2 == 0){
            int check[7] = {0};
            for(int i=0;i<n/2;i++){
                check[arr[i]-1] = 1;
            }
            int k ;
            for(  k=0;k<7;k++){
                if( check[k] == 0 ){
                    cout<<"no"<<endl;
                    break;
                }
            }
            if(mirror(arr, n) ){
                cout<<"yes"<<endl;
            }
            if( !mirror(arr, n)){
                cout<<"no"<<endl;
            }
        }
        else{
            int check[7] = {0};
            for(int i=0;i<=n/2; i++){
                check[arr[i] -1] =1;
            }
            int k; bool flag= 0;
             for(  k=0;k<7;k++){
                if( check[k] == 0 ){
                    cout<<"no"<<endl;
                    flag = 1;
                    break;
                }
            }
            if(mirror(arr, n)  and !flag){
                cout<<"yes"<<endl;
            }
            if(! mirror(arr, n) and !flag){
                cout<<"no"<<endl;
            }
        }
        
    }
    return 0;
}