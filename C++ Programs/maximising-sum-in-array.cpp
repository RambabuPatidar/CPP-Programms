#include <iostream>
using namespace std;

void merge(int arr[], int l, int mid, int r, int n)
{
    int arr2[n] = {0};
    int i = l;
    int j = mid + 1;
    int k = l;
    while ((i < (mid + 1)) && (j <= r))
    {
        if (arr[i] < arr[j])
        {
            arr2[k++] = arr[i++];
        }
        else
        {
            arr2[k++] = arr[j++];
        }
    }
    if (i > mid)
    {
        while (j <= r)
        {
            arr2[k++] = arr[j++];
        }
    }
    else
    {
        while (i <= mid)
        {
            arr2[k++] = arr[i++];
        }
    }
    for (k = l; k <= r; k++)
    {
        arr[k] = arr2[k];
    }
}

void sortingArray(int arr[], int l, int r, int n)
{
    if (l < r)
    {
        int mid = ((l + r) / 2);
        sortingArray(arr, l, mid, n);
        sortingArray(arr, mid + 1, r, n);

        merge(arr, l, mid, r, n);
    }
}

int main()
{

    int t;
    cin >> t;
    while (t--)
    { //the variable k is here is the number of digits we take to
        // make the sum greatest. ok and variable uppper is differene one.
        cout << "enter the value of the size of array and number of element"<<endl;
        int n, r;
        cin >> n >> r;
        int arr[n];
        cout << "now enter the value of the n element in the array."<<endl;
        for (int i = 0; i < n; i++)
        {
            cin >> arr[i];
        }
        sortingArray(arr, 0, n - 1, n);
        int sum = 0;
        
        for( int i=n-1;i>=(n-r);i--){
            cout<<arr[i]<<" ";
            sum +=arr[i];
        }
        cout<<endl<<sum<<endl;
    }
    return 0;
}