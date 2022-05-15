#include<iostream>
using namespace std;

int lowerBound(int arr[], int key, int low, int high) {
	if(low>high) {
		return low;
	}

	int middle = (low+high)/2;

	if(key == arr[middle]) {
		int index = middle;
		while(index >-1 && arr[index] == key) {
			index--;
		}
		return ++index;
	}

	if(arr[middle] > key) {
		return lowerBound(arr,key,low,middle-1);
	} else {
		return lowerBound(arr,key,middle+1,high);
	}
}


int main() {
	int arr[] = {1,2,4,5,5,5,6,8,9,10};
	int n = sizeof(arr)/sizeof(arr[0]);
	int key = 3;
	int index = lowerBound(arr,key,0,n-1);
	if(index == n){
		cout << -1 << "\n";
	} else {
		cout << index << "\n";
	}

}
