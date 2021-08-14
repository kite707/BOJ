#include <iostream>
#include <vector>
using namespace std;

int checker[1001];
vector<int> graph[1001];
int dfsnum = 0;
void dfs(int x) {
	//cout << x;
	checker[x] = 1;
	dfsnum--;
	for (int i = 0; i<graph[x].size(); i++) {
		if (checker[graph[x][i]] != 1) {
			dfs(graph[x][i]);
		}
	}
}


int main() {
	ios::sync_with_stdio(false);
	cin.tie(0);
	cout.tie(0);
	
	int N, M;
	cin >> N >> M;
	dfsnum = N;
	int a, b;
	while (M--) {
		cin >> a >> b;
		graph[a].push_back(b);
		graph[b].push_back(a);
		checker[a] = 10;
		checker[b] = 10;
	}
	int ans = 0;
	for (int i = 0; i < 1001; i++) {
		if (checker[i] == 10) {
			dfs(i);
			ans++;
		}
	}
	cout << ans+dfsnum;

}
