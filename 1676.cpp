#include <iostream>
using namespace std;

int main() {
	ios::sync_with_stdio(false);
	cin.tie(0);
	cout.tie(0);
	int T;
	cin >> T;
	int sum = 0;
	for (int i = 1; i <= T; i++) {
		int save = i;
		int count = 0;
		while (save % 5 == 0) {
			save /= 5;
			count++;
		}
		if (count != 0) {
			sum += count;
		}
	}
	cout << sum;
}
