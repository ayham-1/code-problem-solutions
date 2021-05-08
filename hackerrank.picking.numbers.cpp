#include <bits/stdc++.h>

using namespace std;

int pickingNumbers(vector<int> a) {
	sort(a.begin(), a.end());
	int result = 0;
	int max = 0;
	for (int i = 0; i < a.size(); i++) {
		for (int j = i + 1; j < a.size(); j++) {
			if (abs(a[i] - a[j]) > 1) break;
			else result += 1;
		}
		if (result > max) max = result;
		cout << result << endl;
		result = 0;
	}
	return max + 1;
}

int main() {
	cout << pickingNumbers({4, 6, 5, 3, 3, 1});
	return 0;
}
