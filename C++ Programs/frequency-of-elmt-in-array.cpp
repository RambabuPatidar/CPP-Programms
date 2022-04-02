#include<iostream>
using namespace std;

int main(){

    int n,counter =1;
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++){
        cin>>arr[i];
       
    }
    //frequency of all element can be found by running two loops 
    //one is for choosing one element and other is for comaparing that element with every element remained
    //we will set an counter to 1 initially bcz that element itself is present one time so its frequency
    //is one and will increaae the counter by one if we will find number repeating;

    for ( int i=0 ; i<n ;i++){
       
        counter=1;
        for(int j=i+1;j<n;j++){
            if( arr[i]==arr[j]){
                counter++;
                
            }

        }
        cout<<arr[i]<<"-->"<<counter<<endl;
        //but there is a problem that i can not able to solve is that
        //how i write commands to not repeat the number if its once counted.
       
    }
    return 0;
}