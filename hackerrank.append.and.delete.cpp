#include <bits/stdc++.h>
using namespace std;

int main() {
	int k = -1;
	string s, t;
	cin >> s >> t;
	if (s == t) {cout << "Yes" << endl; return 0; }
	cin >> k;
	int common = 0;
	for (int i = 0; i < min(s.size(), t.size()); i++) {
		if (s[i]==t[i]) common++;
		else break;
	}
    if ((s.size()+t.size()-2*common)>k) cout << "No" << endl;
	else if ((s.size()+t.size()-2*common)%2==k%2) cout << "Yes" << endl;
	else if ((int(s.size()+t.size())-int(k))<0) cout << "Yes" << endl;
	else cout << "No" << endl;
	return 0;
}
