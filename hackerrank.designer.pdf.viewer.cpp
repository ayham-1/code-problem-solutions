#include <bits/stdc++.h>
using namespace std;

int main() {
	int max_height = -1;
	vector<int> heights(26);
	string word;
	for (int i = 0; i < heights.size(); i++) cin >> heights[i];
	cin >> word;
	for (auto letter : word) if (heights[letter-'a'] >= max_height) max_height = heights[letter-'a'];
	cout << max_height * word.size() << endl;
	return 0;
}
