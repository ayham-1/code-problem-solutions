#include <bits/stdc++.h>
using namespace std;

int main() {
	int n;
	cin >> n;
	int recipients = 5;
	int total_likes = 0;
    while (n--) {
		total_likes += floor(recipients/2);
		recipients = floor(recipients/2)*3;
	}
	cout << total_likes <<endl;
	
	return 0;
}
