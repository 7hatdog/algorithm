#include <iostream>
#include <algorithm>
using namespace std;

int coin[10];

int main() {
	int i, n, k, res = 0;
	cin >> n >> k;
	for (i = 0; i < n; i++) {
		cin >> coin[i];
	}
	for (i = n - 1; i >= 0; i--) {
		if (k >= coin[i]) {
			int tmp;
			tmp = k / coin[i];
			res += tmp;
			k = k % coin[i];
		}
	}
	cout << res;

	return 0;
}