#include <iostream>
#include <vector>
#include <cmath>
using namespace std;


int main() {
	ios::sync_with_stdio(false);
	cin.tie(0);
	int T;
	long long a, b;
	cin >> T;
	while (T != 0) {
		cin >> a >> b;
		int go =(int)sqrt(b - a);

		if (b - a < 4) {
			cout << b - a<<"\n";
		}
		else {
			if (b - a == go * go) {
				cout << 2 * go - 1 << "\n";
			}
			else if (go * go + go < b - a) {
				cout << go * 2 + 1 << "\n";
			}
			else {
				cout << go * 2 << "\n";
			}
		}

		T--;
	}
}
