#include <iostream>
#include <vector>
#include <queue>
using namespace std;
#define P pair<int,int>

int main() {
	int k;
	cin >> k;
	priority_queue<P, vector<P>, greater<P>> pq;
	while (k--) {
		int a, b;
		cin >> a >> b;
		pq.push(P(a, b));
	}
	while (!pq.empty()) {
		P cur = pq.top();
		cout << cur.first << " " << cur.second << "\n";
		pq.pop();
	}
}
