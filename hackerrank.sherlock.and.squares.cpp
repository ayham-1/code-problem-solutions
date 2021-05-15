#include <bits/stdc++.h>
using namespace std;

bool is_sqr(long long number) {
	if (number >= 0) {
		long long sr = sqrt(number);
		return (sr * sr == number);
	}
	return false;
}

int main() {
	int q;
	long long a, b;
	cin >> q;
	while (q--) {
		cin >> a >> b;
		long long counter = 0;

		// long long i = ceil(sqrt(a));
		// while (true) {
		// 	if (pow(i, 2) <= b && pow(i, 2) >= a)
		// 		counter++;
		// 	else break;
		// 	i++;
		// }

		if (is_sqr(b)) counter++;
		counter += abs(ceil(sqrt(a))-ceil(sqrt(b)));

		cout << counter << endl;
	}
	return 0;
}
