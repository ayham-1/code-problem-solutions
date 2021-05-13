#include <bits/stdc++.h>
using namespace std;

int main() {
	int p;
	string a, b;
	cin >> p;
	while (p--) {
		bool has_substring = false;
		map<char, int> repeats;
		cin >> a >> b;
		sort(a.begin(), a.end());
		sort(b.begin(), b.end());
		auto a_last = unique(a.begin(), a.end());
		a.resize(distance(a.begin(), a_last));
		auto b_last = unique(b.begin(), b.end());
		b.resize(distance(b.begin(), b_last));
		
		for (auto i : a) {
			if (repeats.find(i) == repeats.end()) repeats[i] = 1;
			else repeats[i]++;
		}

		for (auto i : b) {
			if (repeats.find(i) == repeats.end()) repeats[i] = 1;
			else repeats[i]++;
		}

		for (auto it : repeats) {
			if (it.second > 1) {
				has_substring = true;
				break;
			}
		}

		cout << ((has_substring) ? "YES" : "NO") << endl;
	}
	return 0;
}
