int mat_diff(vector<vector<int>> s, vector<vector<int>> m) {
	int diff = 0;
	for (int i = 0; i < 3; i++)
		for (int j = 0; j < 3; j++) {
			diff += abs(s[i][j] - m[i][j]);
		}
	return diff;
}

int formingMagicSquare(vector<vector<int>> s) {
	vector<vector<int>> magic_sqr_1 = {
		{2, 7, 6},
		{9, 5, 1},
		{4, 3, 8}
	};
	vector<vector<int>> magic_sqr_2 = {
		{6, 1, 8},
		{7, 5, 3},
		{2, 9, 4}
	};
	vector<vector<int>> magic_sqr_3 = {
		{8, 3, 4},
		{1, 5, 9},
		{6, 7, 2}
	};
	vector<vector<int>> magic_sqr_4 = {
		{4, 9, 2},
		{3, 5, 7},
		{8, 1, 6}
	};

	vector<int> diffs = {
		mat_diff(s, magic_sqr_1),
		mat_diff(s, magic_sqr_2),
		mat_diff(s, magic_sqr_3),
		mat_diff(s, magic_sqr_4)};

	return diffs[distance(diffs.begin(), std::min_element(diffs.begin(), diffs.end());
}
