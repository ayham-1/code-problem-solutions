#include <bits/stdc++.h>
using namespace std;

int main() {
	int d1, m1, y1;
	int d2, m2, y2;
	cin >> d1 >> m1 >> y1;
	cin >> d2 >> m2 >> y2;

	if (y1>y2) cout << "10000" << endl;
	else if (y1<y2) cout << "0" << endl;
	else if (m1>m2) cout << to_string(500*abs(m1-m2)) << endl;
	else if (m1<m2) cout << "0" << endl;
	else if (d1>d2) cout << to_string(15*abs(d1-d2)) << endl;
	else cout << "0" << endl;
	
	return 0;
}
