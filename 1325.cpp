#include <iostream>
#include <vector>
#include <queue>
#include <string.h>
#include <utility>
#include <algorithm>
#define P pair<int,int>
using namespace std;

int checker[10001];
vector <int> v[10001];
vector <P> vv;
int bfs(int start) {
	queue<int> q;
	int count = 0;
	checker[start] = 1;
	q.push(start);

	while (!q.empty()) {
		int curidx = q.front();
		q.pop();
		count++;

		for (int i = 0; i < v[curidx].size(); i++) {
			if (checker[v[curidx][i]] == 0) {
				q.push(v[curidx][i]);
				checker[v[curidx][i]] = 1;
			}
			
		}
	}
	return count;
}

void setting() {
	memset(checker, 0, sizeof(checker));
}

int main() {
	ios::sync_with_stdio(false);
	cin.tie(0);
	int N, M;
	int a, b;
	cin >> N >> M;



	while (M != 0) {
		cin >> a >> b;

		v[b].push_back(a);

		M--;
	}

	for (int i = 1; i <= N; i++) {
		vv.push_back(P(-bfs(i), i));
		setting();
	}
	sort(vv.begin(), vv.end());

	for (int i = 0; i < vv.size(); i++) {
		if (vv[0].first != vv[i].first) {
			break;
		}
		cout << vv[i].second << " ";
	}

	//for (int i = 0; i < vv.size(); i++) {
	//	cout << vv[i].first << " " << vv[i].second << endl;
	//}
}
