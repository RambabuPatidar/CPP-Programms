#include<iostream>
using namespace std;

int catalanUtil(int arr[], int i, int n) {
    if(i < 0) {
        return  0;
    }

     int ans = arr[i]* arr[n] ;
     n++;
     i--;
     ans += catalanUtil(arr, i, n);
    return ans;
}

void catalanNum(int n) {
   
    int c0 = 1;
    int c1 = 1;
    int arr[n];
    arr[0] = 1;
    arr[1] = 1;

    for( int i=2; i<n; i++ ) 
        arr[i] =  catalanUtil(arr, i-1, 0 ) ;

    for( int i=0; i<n; i++ ) {
        cout << arr[i] << " ";
    }

}

int main( ) {

    int n;
    cout << "Number of Catalan digits required" << endl;
    cin >> n;

    catalanNum(n);
    return 0;
}