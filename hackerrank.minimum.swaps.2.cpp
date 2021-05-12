#include <bits/stdc++.h>
using namespace std;

int main() {
	int n, swaps = 0;
	cin >> n;
	vector<int> arr(n);
	for (int i = 0; i < n; i++) cin >> arr[i];

	for (int i = 0; i < arr.size(); i++) {
		if (arr[i] == i+1) continue;
		iter_swap(arr.begin() + i, arr.begin() + arr[i]-1);
		swaps++;
		i--;
	}
	
	cout << swaps << endl;
	
	return 0;
}
