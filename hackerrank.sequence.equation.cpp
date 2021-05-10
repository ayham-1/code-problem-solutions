#include <bits/stdc++.h>
using namespace std;

int main() {
	int n;
	cin >> n;
	vector<int> p(n);
	for (int i = 0; i < n; i++) cin >> p[i];
	for (int x = 1; x <= n; x++) {
		auto x1_index = find(p.begin(), p.end(), x) - p.begin();
		auto x2_index = find(p.begin(), p.end(), x1_index+1) - p.begin();
		cout << x2_index+1 << endl;
	}
	return 0;
}
