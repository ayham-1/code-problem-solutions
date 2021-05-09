#include <bits/stdc++.h>
using namespace std;

int main() {
	int n, k, doses = 0;
	vector<int> height;
	cin >> n >> k;
	for (int i = 0; i < n; i++) {
		int tmp;
		cin >> tmp;
		height.push_back(tmp);
		if (k < tmp) {
			doses += tmp-k;
			k += tmp-k;
		}
	}
	cout << doses << endl;
	return 0;
}
