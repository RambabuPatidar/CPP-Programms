
#include<iostream>
#include<bits/stdc++.h>
using namespace std;

int main(){

    int t;cin>>t;
    while( t--){
        int n,sum =0;
        cin>>n;
        int arr[n];
        for(int &i:arr){
            cin>>i;
            
        }
        for( int i=0;i<n;i++){
            sum += arr[i];
        }

        double x = log2(sum);
        int wholePart = ceil(x);
        if( wholePart - x== 0){
            // cout<<"it is a good sequence"<<endl;
            cout<<0<<endl;
        }
        else{
            
            int remain = pow(2,wholePart)- sum;
            int multiplier = 0;
            int sIdx = 0;
            int eIdx = 0;
            int i, j;
            for( i=0;i<n;i++){
             bool  flag =0;
                int sum =0;
                for(  j = i;j<n;j++ ){
                    sum += arr[j];
                    if(remain%sum == 0){
                        multiplier =( remain + sum )/sum;
                        sIdx = i;
                        eIdx= j;
                        flag = 1;
                        break;
                    }
                }
                if( flag){
                    break;
                }
            }
            cout<<1<<endl;
            cout<<j-i+1<<" "<<multiplier<<endl;
            for(int k = i;k<=j;k++){
                cout<<k+1<<" ";
            }
            cout<<endl;
        }

        
    }
    
    return 0;
}

