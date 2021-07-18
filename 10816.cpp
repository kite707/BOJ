#include <iostream>
#include <vector>
using namespace std;

int vecplus[10000001] = { 0 };
int vecminus[10000001] = { 0 };
vector<int> que;

int main() {
	ios::sync_with_stdio(false);
	cin.tie(0);
	cout.tie(0);
	int N;
	int a;
	int zero = 0;
	cin >> N;
	while (N--) {
		cin >> a;
		if (a > 0) {
			vecplus[a]++;
		}
		if (a < 0) {
			a = a * -1;
			vecminus[a]++;
		}
		if(a==0) {
			zero++;
		}
	}
	int M;
	cin >> M;
	while (M--) {
		cin >> a;
		que.push_back(a);
	}
	for (int i = 0; i < que.size(); i++) {
		if (que[i] > 0) {
			cout << vecplus[que[i]] << " ";
		}
		else if (que[i] < 0) {
			int jj = que[i] * -1;
			cout << vecminus[jj] << " ";
		}
		else {
			cout << zero << " ";
		}
	}
}
