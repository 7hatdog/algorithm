#include <iostream>
#include <algorithm>
using namespace std;

int P[1001];

int main() {

	int i, n, sum = 0, ans = 0;
	cin >> n;
	for (i = 0; i < n; i++) {
		cin >> P[i];
	}
	sort(P, P + n);
	for (i = 0; i < n; i++) {
		sum = sum + P[i];
		ans += sum;
	}
	cout << ans;

	return 0;
}