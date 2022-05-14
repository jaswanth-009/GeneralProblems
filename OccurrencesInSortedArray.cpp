#include<bits/stdc++.h>
using namespace std;

int main() {
	vector<int> vec = {1,2,2,3,4,5,5,5,5,6,9,10,14,22,22,24};
	int key = 50;

	auto low = lower_bound(vec.begin(), vec.end(), key);
	if(low == vec.end() || *low != key) {
		cout << "Key not found\n";
		return;
	}

	auto high = upper_bound(vec.begin(), vec.end(), key);

	cout << high - low << "\n";
}
