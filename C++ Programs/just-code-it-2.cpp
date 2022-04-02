#include<iostream>
using namespace std;

int main() {

    int t ; cin>> t;
    int k =1;
    while( t--)  {
        cout << "Case #" << k++ << ": ";

        int arr1[4];
        int arr2[4];
        int arr3[4];
        for(int i=0; i<4; i++) {
            cin>> arr1[i];
        }
        for(int i=0; i<4; i++) {
            cin>> arr2[i];
        }
        for(int i=0; i<4; i++) {
            cin>> arr3[i];
        }
        long long  int ans = 0;
        int i=0;
        int arr[4] = {0};
        
        while( i != 4){
            int minimum = min(arr1[i], min(arr2[i], arr3[i]));
            ans += minimum;
            if( ans > 1000000) {
                arr[i] = minimum - (ans - 1000000) ;
                
                break;
            }
            arr[i++] = minimum;
        }

        if(ans < 1000000) {
            cout << "IMPOSSIBLE";
        }

        else{
            cout << arr[0] << " " << arr[1] << " " << arr[2] << " " <<  arr[3];
        }
        cout<< endl;

    }
    return 0;
}