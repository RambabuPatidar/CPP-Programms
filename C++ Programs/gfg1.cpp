#include<iostream>
using namespace std;

int main(){

    int n;
    cin>>n;
    int array[n];
    for (int i = 0; i < n; i++)
    {
       cin>>array[i];
    }
int sum=0;
    for (int i = 0; i < n; i++)
    {
        sum+= array[i];
    }
    cout<<"sum:"<<sum<<endl;
    
    
    return 0;
}