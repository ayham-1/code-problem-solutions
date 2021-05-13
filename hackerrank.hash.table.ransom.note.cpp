#include <bits/stdc++.h>
using namespace std;

int main() {
	cin.sync_with_stdio(false);
	int m, n, num = 0;
	map<string, int> magazine;
	cin >> m >> n;

	while (m--) {
		string mag;
		cin >> mag;
		if (magazine[mag] <= 0) magazine[mag] = 1;
		else magazine[mag]++;
	}

	for (int i = 0; i < n; i++) {
		string note;
		cin >> note;
		if (magazine.find(note) != magazine.end() && (magazine[note]--) != 0) num++;
	}
	cout << ((num == n) ? "Yes" : "No") << endl;
	
	return 0;
}
