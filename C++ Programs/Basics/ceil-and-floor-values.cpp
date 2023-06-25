#include<bits/stdc++.h>
using namespace std;

int main() {

    // Q. find the greatest number which is smaller than given number.
    // we can say that the floor of the number.

    int arr[] = {3, 5, 1, 12, 53, 12, 34, 65, 76, 56, 54, 45};
    int ans = INT_MIN;
    for(int nums: arr) {
        if (nums < 56 && nums > ans) {
            ans = nums;
        }
    }
    cout << ans <<endl;


    // similarly
    // Q. find the smallest number which is greater than given number.
    // also the ceil of the number 
    int ans2 = INT_MAX;
    for (int nums: arr)  {
        if(nums > 56 && nums < ans2) {
            ans2 = nums;
        }
    }
    cout << ans2 <<endl;
    return 0;
}