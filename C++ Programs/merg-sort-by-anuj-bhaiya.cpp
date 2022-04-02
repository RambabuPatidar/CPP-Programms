#include <iostream>
using namespace std;

//ANUJ BHAIYA methode is good in this merge sort...

void merge(int arr[], int l, int mid, int r, int n)
{
    int a[n] = {0};
    int i = l;
    int j = mid + 1;
    int k = l;
    while ((i < (mid + 1)) && (j <= r)) //debugging is the hardest than writing full code again
    {
        if (arr[i] < arr[j])
        {
            a[k++] = arr[i++];
        }
        else
        {
            a[k++] = arr[j++];
        }
    }
    if (i > mid)
    {
        while (j <= r)
        {
            a[k++] = arr[j++];
        }
    }
    else
    {
        while (i <= mid)
        {
            a[k++] = arr[i++];
        }
    }
    for (k = l; k <= r; k++)
    {
        arr[k] = a[k];
    }
}

void mergeSort(int arr[], int l, int r, int n)
{
    if (l < r)
    {
        int mid = ((l + r) / 2);
        mergeSort(arr, l, mid, n);
        mergeSort(arr, mid + 1, r, n);

        merge(arr, l, mid, r, n);
    }
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

    mergeSort(arr, 0, n - 1, n);
    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }
    return 0;
}