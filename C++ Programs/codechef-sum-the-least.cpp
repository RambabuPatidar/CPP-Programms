#include <iostream>
using namespace std;

void merge(int arr[], int n, int l, int mid, int r)
{
    int solarr[n] = {0};
    int i = l;
    int j = mid + 1;
    int k = l;
    while ((i <= mid) && (j <= r))
    {
        if (arr[i] < arr[j])
        {
            solarr[k++] = arr[i++];
        }
        else
        {
            solarr[k++] = arr[j++];
        }
    }

    if (i > mid)
    {
        while (j <= r)
        {
            solarr[k++] = arr[j++];
        }
    }
    else
    {
        while (i <= mid)
        {
            solarr[k++] = arr[i++];
        }
    }

    for (k = l; k <= r; k++)
    {
        arr[k] = solarr[k];
    }
    return;
}
void mergeSort(int arr[], int n, int l, int r)
{
    if (l < r)
    {

        int mid = ((l + r) / 2);
        mergeSort(arr, n, l, mid);
        mergeSort(arr, n, mid + 1, r);

        merge(arr, n, l, mid, r);
    }
    return;
}
int main()
{

    int n;
    cin >> n;
    int arr[n];
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }

    mergeSort(arr, n, 0, n - 1);
   
    cout<<arr[0]+arr[1]<<endl;
    return 0;
}