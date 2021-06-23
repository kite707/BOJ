#include <iostream>
#include <queue>
using namespace std;

int main() {
	ios::sync_with_stdio(false);
	cin.tie(0);
	cout.tie(0);

	int n;
	cin >> n;
	queue<int> q;
	for (int i = 1; i <= n; i++) {
		q.push(i);
	}
	int i = 1;
	while (q.size() != 1) {
		if (i % 2 == 1) {
			q.pop();
		}
		else {
			int num = q.front();
			q.pop();
			q.push(num);
		}
		i++;
	}
	cout << q.front();
}