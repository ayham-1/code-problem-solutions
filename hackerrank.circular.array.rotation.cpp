#include <bits/stdc++.h>
using namespace std;

int main() {
	int n, k, q;
	cin >> n >> k >> q;
	vector<int> a(n), queries(q);
	for (int i = 0; i < n; i++) cin >> a[i];
	for (int i = 0; i < q; i++) {
		int tmp;
		cin >> tmp;
		cout << a[((n-(k%n))+tmp) % n] << endl;
	}
	return 0;
}
