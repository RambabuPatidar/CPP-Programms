#include<iostream>
using namespace std;

template<class T> 

void swapValue(T &a, T &b) {
    T temp = a;
     a = b;
     b = temp;
     return ;
}
template<class X>
void sorting(X arr[], int n) {
    for(int i=0; i<n-1 ;i++) {
        for(int j=1; j< n-i; j++) {
            if( arr[j] < arr[j-1]) {
                swapValue(arr[j], arr[j-1]);
            }
        }
    }
}


int main(){

    
    float arr[] = {7.12f, 8.93f, 9.3f, 1.090f, 6.7889f, 4.2343f, 5.234f , 3.0f, 2.987f, 10.345f};
    sorting(arr, 10);
    for(int i=0; i<10; i++ ){
        cout << arr[i] << " ";
    }
    return 0;
}