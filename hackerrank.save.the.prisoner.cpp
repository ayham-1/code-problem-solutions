#include <bits/stdc++.h>
using namespace std;

int main() {
	int t, n, m, s;
	cin >> t;
	while (t--) {
		cin >> n >> m >> s;
		cout << ((s+m-2)%n)+1 << endl;
	}
	return 0;
}
