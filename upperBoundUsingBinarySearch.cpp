#include<iostream>
using namespace std;

int upperBound(int arr[], int key, int low, int high, int size) {
	if(low>high) {
		return low;
	}

	int middle = (low+high)/2;

	if(key == arr[middle]) {
		int index = middle;
		while(index < size && arr[index] == key) {
			index++;
		}
		return index;
	}

	if(arr[middle] > key) {
		return upperBound(arr,key,low,middle-1,size);
	} else {
		return upperBound(arr,key,middle+1,high,size);
	}
}


int main() {
	int arr[] = {1,2,3,4,5,5,5,5,5,6,8};
	int n = sizeof(arr)/sizeof(arr[0]);
	int key = 3;
	int index = upperBound(arr,key,0,n-1,n);
	if(index == n){
		cout << -1 << "\n";
	} else {
		cout << index << "\n";
	}

}
