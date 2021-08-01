#include <iostream>
#include <vector>
using namespace std;

vector <int> vec[101];
int arr[101];
int ans = 0;
void dfs(int x) {
	arr[x] = 1;
	//cout << x << " ";
	ans++;
	for (int i = 0; i < vec[x].size(); i++) {
		int next = vec[x][i];
		if (arr[next] == 0) {
			dfs(next);
		}
	}
}


int main() {
	ios::sync_with_stdio(false);
	cin.tie(0);
	int T, K;
	cin >> T >> K;
	int a, b;
	while (K--) {
		cin >> a >> b;
		vec[a].push_back(b);
		vec[b].push_back(a);
	}
	dfs(1);
	cout << --ans;
}
