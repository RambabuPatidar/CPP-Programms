#include<iostream>
//to find the maximum frequency of elemen in the array and print the element 
// i am successful in getting prior task but failed to to later part of the question.
using namespace std;

int main(){

    int  n;
    cin>>n;
    int arr[n];
    for (int  i = 0; i < n; i++)
    {
       cin>>arr[i];
    }
    int count=0;
    int maximum=INT_MIN;
    for (int  i = 0; i < n; i++)
    {
        count=0;
       for (int j = 0; j < n; j++)
       {
           if ( arr[i]==arr[j]){
               count++;
           }
       }
       maximum= max( count,maximum);
       
    }
    cout<<maximum <<endl;
    return 0;
}                              