#include <iostream>
#include <queue>
using namespace std;


int main() {
	ios::sync_with_stdio(false);
	cin.tie(0);
	cout.tie(0);
	priority_queue<int> q;
	int a, b;
	cin >> a;

	while (a--) {
		cin >> b;
		if (b == 0) {
			if (q.empty()) {
				cout << 0<< "\n";
			}
			else {
				cout << q.top() << "\n";
				q.pop();
			}
		}
		else {
			q.push(b);
		}
	}
}
