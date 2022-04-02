#include <iostream>
using namespace std;

int main()
{
//programm to find the odd and even times occured element 
    int n;
    cin >> n;
    int arr[n];
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    int counter = 0;
    for (int i = 0; i < n; i++)
    {
        counter=0;
        for (int j = 0; j < n; j++)
        {
            if( arr[i]==arr[j]){
                counter++;
            }

        }
        if ( counter%2!=0){
            cout<<arr[i]<<"  odd times\n ";
        }
        else{
            cout<<arr[i]<<" this even times\n";
        }
    }
    return 0;
}