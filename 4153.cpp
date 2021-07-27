#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main() {

	while (true) {
		int a, b, c;
		cin >> a >> b >> c;
		if (a == 0) {
			break;
		}
		vector<int> v;
		v.push_back(a);
		v.push_back(b);
		v.push_back(c);

		sort(v.begin(), v.end());

		if (v[0] * v[0] + v[1] * v[1] == v[2] * v[2]) {
			cout << "right\n";
		}
		else {
			cout << "wrong\n";
		}

	}

}
