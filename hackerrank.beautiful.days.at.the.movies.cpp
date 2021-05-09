#include <bits/stdc++.h>
using namespace std;

int reverse(int num) {
	string tmp = to_string(num);
	reverse(tmp.begin(), tmp.end());
	return stoi(tmp);
}

int main() {
	int i, j, k, res = 0;
	cin >> i >> j >> k;
	for (; i <= j; i++)
		if (abs(i-reverse(i)) % k == 0) res++;
	cout << res << endl;
	return 0;
}
