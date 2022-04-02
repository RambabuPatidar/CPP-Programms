#include<iostream>
using namespace std;

int main(){

    int arr[] = {5, 3, 2, 1, 8, 9, 10};

    for(int i=0; i<6; i++) {

        int swapped = false;
        for(int j =1; j<6-i; j++) {
            if(arr[j-1] > arr[j]) {
                int temp = arr[j];
                arr[j] = arr[j-1];
                arr[j-1] = temp;
                swapped = true;
            }
        }

        if(!swapped ) {
            break;
        }
    }
    return 0;
}