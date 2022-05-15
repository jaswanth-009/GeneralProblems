#include<bits/stdc++.h>
using namespace std;

int binarySearch(int arr[], int low, int high, int key) {
	if(low>high) {
		return -1;
	}

	int middle = (low + high)/2;

	if(key == arr[middle]) {
		return middle;
	}

	if(arr[middle] > key) {
		return binarySearch(arr,low,middle-1,key);
	} else {
		return binarySearch(arr,middle+1,high,key);
	}
}

int countOfOccurrences(int arr[], int n, int key) {
	int low = 0;
	int high = n-1;
	int count = 1;
	int i;
	int find = binarySearch(arr,low,high,key);

	if (find == -1) {
		return 0;
	}
	i = find+1;
	while(i<n && arr[i] == key){
		i++;
		count++;
	}
	i = find-1;
	while(i>-1 && arr[i] == key) {
		i--;
		count++;
	}
	return count;
}

int main() {
	int arr[] = {1,2,2,3,4,5,5,5,5,6,9,10,14,22,22,24};
	int n = sizeof(arr)/sizeof(arr[0]);
	int key = 5;
	int count;

	count = countOfOccurrences(arr,n,key);
	cout << count << "\n";
}
