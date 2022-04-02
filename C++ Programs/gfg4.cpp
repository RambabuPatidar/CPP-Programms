#include<iostream>
using namespace std;

int main(){

    int n;
    cin>>n;
    int arr[n];
    for (int  i = 0; i < n; i++)
    {
        cin>>arr[i];
    }

    cout<<"enter the value you want the pairs as ans.\n";
    int value;
    cin>>value;
  for (int i = 0; i < n; i++)
  {
      for (int j = i+1; j < n; j++)
      {
          if(( arr[i]+arr[j])==value){
              cout<<" the pairs are "<<arr[i]<<","<<arr[j]<<"  ";
          }
          else{
              continue;
          }
      }
      
  }
  
    
    return 0;
}