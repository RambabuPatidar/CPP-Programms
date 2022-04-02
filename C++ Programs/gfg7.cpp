#include <iostream>
using namespace std;

int main()
{

    int n;
    cin >> n;
    int arr[n];
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    int sumOFSeries=((n+2)*(n+1))/2;
    int sumOFArray=0;
    for( int i=0;i<n;i++){
        sumOFArray+=arr[i];
    }
    cout<<sumOFSeries - sumOFArray<<endl;
    return 0;
}