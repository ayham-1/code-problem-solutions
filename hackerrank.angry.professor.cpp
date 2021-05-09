#include <bits/stdc++.h>
using namespace std;

int main() {
	int t, n, k;
	cin >> t;
	while (t--) {
		int count = 0;
		cin >> n >> k;
		for (int i = 0; i < n; i++) {
			int tmp;
			cin >> tmp;
			if (tmp <= 0) count++;
		}
		cout << ((count >=  k) ? "NO" : "YES") << endl;
	}
	return 0;
}
