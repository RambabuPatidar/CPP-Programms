#include<iostream>
#include<vector>
using namespace std;

int findPivot(vector<int> arr ) {
		
		int start= 0;
		int end= arr.size() -1;
		
		while( start <= end) {
			int mid = start + (end - start )/2;
			
			if(mid +1 <= end  && arr[mid] > arr[mid +1] ) {
				return mid;
			}
			else if( mid-1 >=start &&  arr[mid] < arr[mid-1]) {
				return mid-1;
			}
			else if (arr[mid] > arr[start]){
				start = mid+1;
			}
			else{
				end = mid-1;
			}	
		}
		
		return -1;
		
	}
	
	int binarySearch(vector<int> v, int start , int end, int target) {
		while( start<= end) {
			int mid = start + (end  - start)/ 2;
			
			if(v[mid] == target) {
				return mid;
			}
			else if( v[mid] > target) {
				end = mid -1;
			}
			else{
				start = mid+1;
			}
		}
		return -1;
	}
	int findIndex(vector<int> const &arr, int target)
	{
		
		int pivot = findPivot(arr);
		cout << "Pivot : " << pivot << endl;
		
		if( pivot < 0) {
			return binarySearch(arr, 0, arr.size() -1, target );
		}
		else if( pivot == 0) {
			if( arr[pivot] == target) {
				return pivot;
			}
			else{
				return binarySearch(arr, pivot+1, arr.size() -1, target);
			}
		}
		else if((arr[pivot] >= target and target>= arr[0])){
			return binarySearch(arr, 0, pivot,target);
		}
		return binarySearch(arr, pivot+1, arr.size()-1, target);
		
		
		
	}
	

int main(){

    // vector<int> v  = {1, -7, -6, -5, -4, -3, -2};
    vector<int> v  = {9, 1, 4, 5, 8};
cout << findIndex(v,1);
    return 0;
}