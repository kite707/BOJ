#include <iostream>
#include <vector>
#include <algorithm>
#define P pair<int,int>
using namespace std; 

int n, p;
vector<int> v;

int main() {
	ios::sync_with_stdio(false);
	cin.tie(0);
	cin >> n;
	for (int i = 1; i <= n; i++) {
		cin >> p;
		v.push_back(p);
	}
	sort(v.begin(), v.end());

	int ans = 0;
	for (int i = 0; i <n; i++) {
		ans += v[i] * (v.size() - i);
	}
	cout << ans;
}
