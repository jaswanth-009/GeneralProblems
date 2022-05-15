#include<bits/stdc++.h>
using namespace std;

int main() {
	int n = 5;
	int arr[5] = {0};
	int num = 53465,i=0;

	int startIndex, endIndex, min, temp;

	while(num>0) {
		arr[i] = num % 10;
		num = num/10;
		i++;
	}

	reverse(arr,arr+n);
	
	for(i=n-1;i>0;i--) {
		if (arr[i] > arr[i-1]) {
			break;
		}
	}

	if(i==0){
		cout << "Not Possible\n";
		return 0;
	}

	startIndex = --i;
	min = INT_MAX;

	for(int j = startIndex+1;j<n;j++) {
		if(arr[j] < min) {
			min = arr[j];
			endIndex = j;
		}
	}

	temp = arr[startIndex];
	arr[startIndex] = arr[endIndex];
	arr[endIndex] = temp;

	sort(arr+startIndex+1, arr+endIndex);

	for(int i:arr) {
		cout << i << " ";
	}
	
	return 0;
}
