#include <bits/stdc++.h>

using namespace std;

int pageCount(int n, int p) {
	if (p == 1 || p == n) return 0;

	if (n % 2 == 0 && p == n-1) return 1;
	else if (n % 2 != 0 && p == n-1) return 0;
	
	// ascending order first
	int ascending = p / 2;
	// descending order
	int descending = std::ceil((double)(n-p) / 2);
	return (ascending < descending)? ascending : descending;
}

int main() {
	cout << pageCount(6, 5);
	return 0;
}
