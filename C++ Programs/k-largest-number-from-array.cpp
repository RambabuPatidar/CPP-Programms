#include<iostream>
using namespace std;

// this is offcourse not an efficient way but 
// the way in which this algorithm make us thinking is amazing;
// for more see the link number 3 of some important question;

int getMinifromarrr(int arrr[], int k) {
    int minimum = INT_MAX;
    int minimumidx;
    for(int i=0; i<k ;i++) {
        if( arrr[i] < minimum) {
            minimum = arrr[i];
            minimumidx = i;
        }
    }
    return minimumidx;
}

int main() {

    int n;
    cin >> n ;
    int arr[n];
    for(auto &i: arr) {
        cin >> i;
    }
    cout << "original array is " << endl;
    for( auto i:arr ) {
        cout << i << " ";
    }
    cout << endl;
    int k;
    cout << "how many largest element you want" << endl;
    cin >> k;
    int arrr[k];
    for( int i=0; i<k; i++) {
        arrr[i] = arr[i];
    }

    int minimumidx = getMinifromarrr(arrr, k);

    for( int i= k; i<n;i++) {
        if( arrr[minimumidx] < arr[i]) {
            arrr[minimumidx] = arr[i];
            minimumidx = getMinifromarrr(arrr, k);
        }
    }

    for( int i=0; i<k; i++) {
        cout << arrr[i] << " ";
    }

    return 0;
}