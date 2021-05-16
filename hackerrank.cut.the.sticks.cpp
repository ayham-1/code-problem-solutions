#include <bits/stdc++.h>
using namespace std;

int main() {
	int n;
	cin >> n;
	vector<int> arr(n);
	for (int i = 0; i < n; i++) cin >> arr[i];

	sort(arr.begin(), arr.end());
	
	vector<int> answer;
	int shortened = 0;
	for (int i = 0; i < n; i++) {
		if (i > 0 && arr[i-1] == arr[i]) {
			continue;
		}
		if (arr[i] - shortened < 0)
			break;
		shortened = arr[i];
		answer.push_back(arr.size()-i);
	}

	for (auto item : answer) cout << item << endl;
	return 0;
}
