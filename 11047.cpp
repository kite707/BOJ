#include <iostream>
#include <vector>
using namespace std;
int main() {
	ios::sync_with_stdio(false);
	cin.tie(0);
	cout.tie(0);

	int N, K;
	cin >> N >> K;
	int a;
	vector<int> coin;
	while (N--) {
		cin >> a;
		coin.push_back(a);
	}
	int ans=0;
	int time = 0;
	int st = coin.size()-1;
	while (ans != K) {
		if (ans + coin[st] <= K) {
			ans += coin[st];
			time++;
		}
		else {
			st--;
		}
	}

	cout << time;

}
