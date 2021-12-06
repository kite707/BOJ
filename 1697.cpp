#include <iostream>
#include <vector>
#include <queue>
#include <algorithm>
using namespace std;

vector <int> vec[100001];
int checker[100001];

void setting() {
	//#include <algorithm>
	fill(checker, checker+100001, 100002);
}

bool valid(int n) {
	if (n < 0 || n>100000 || checker[n] != 100002) {
		return false;
	}
	else {
		return true;
	}
}

void bfs(int start,int end) {
	queue <int> q;
	checker[start] = 0;

	q.push(start);

	while (!q.empty()) {
		int curidx = q.front();
		q.pop();

		if (valid(curidx - 1)) {
			q.push(curidx - 1);
			checker[curidx - 1] = checker[curidx] + 1;
		}

		if (valid(curidx + 1)) {
			q.push(curidx + 1);
			checker[curidx + 1] = checker[curidx] + 1;
		}
		if (valid(curidx*2)) {
			q.push(curidx*2);
			checker[curidx*2] = checker[curidx] + 1;
		}

		if (checker[end] != 100002) {
			break;
		}
	}

}


int main() {
	ios::sync_with_stdio(false);
	cin.tie(0);

	int a, b;
	cin >> a >> b;

	setting();
	bfs(a, b);
	cout << checker[b];
	

}
