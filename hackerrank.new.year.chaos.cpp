#include <bits/stdc++.h>
using namespace std;

int main() {
	bool chaotic = false;
	int t, n, bribes = 0;
	cin >> t;
	while (t--) {
		cin >> n;
		vector<int> line(n);
		for (int i = 0; i < n; i++) cin >> line[i];

		for (int i = line.size()-1; i >= 0; i--) {
			if (line[i]-(i+1) > 2) {
				cout << "Too chaotic" << endl; chaotic = true;
				break;
			}
			for (int j = max(0, line[i] - 2); j < i; j++)
				if (line[j] > line[i]) bribes++;
		}
		if (!chaotic) cout << bribes << endl;
		chaotic = false;
		bribes = 0;
	}
	return 0;
}
