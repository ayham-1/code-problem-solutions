#include <bits/stdc++.h>
using namespace std;

int main() {
	int t, n, res = 0;
	cin >> t;
	while (t--) {
		cin >> n;
		string str = to_string(n);
		for (auto digit : str)
			if (digit-'0' != 0 && n % (digit-'0') == 0) res++;
		cout << res << endl; res = 0;
	}
	return 0;
}
