#include <bits/stdc++.h>
using namespace std;

#define ll long long

int main() {
	ll max_num = -1, height = 0;
	ll n, m;
	ll a=0, b=0, k=0;
	cin.sync_with_stdio(false);
	cin >> n >> m;
	vector<ll> *arr = new vector<ll>(n+1);
	fill((*arr).begin(), (*arr).end(), 0);
	while (m--) {
		cin >> a >> b >> k;
		(*arr)[a] += k;
		if ((b+1) <= n) (*arr)[b+1] -= k;
	}

	for (int i = 1; i <= n; i++) {
		height = height + (*arr)[i];
		if (max_num < height) max_num = height;
	}
	
	cout << max_num << endl;
	return 0;
}
