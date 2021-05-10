#include <bits/stdc++.h>
using namespace std;

int main() {
	int n, k;
	cin >> n >> k;
	vector<int> c(n);
	for (int i = 0; i < n; i++) cin >> c[i];
	int c_num = 0, energy = 100;
	do {
		c_num = (c_num + k) % n;
		energy--;
		if (c[c_num] == 1) energy  -= 2;
	} while (c_num != 0 || energy <= 0);
	cout << energy << endl;
	return 0;
}
