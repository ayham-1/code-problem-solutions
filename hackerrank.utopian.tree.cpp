#include <bits/stdc++.h>
using namespace std;

int main() {
	int t, n;
	int x, y;
	cin >> t;
	while (t--) {
		cin >> n;
		cout << to_string((1<<((n>>1)+1))-1<<n%2) << endl;
	}
	return 0;
}
