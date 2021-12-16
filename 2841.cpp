#include <iostream>
#include <vector>
#include <deque>
#include <queue>
#define P pair<int,int>
using namespace std;

int N, p;
int a, b;
int ans;

//각 줄 눌렸는지 체크용
int checker[7][300001]; 
priority_queue<int> q[7][300001];

void ply(int a, int b) {
	if (checker[a][b] == 1) {
		while (q[a]->top() != b) {
			int linenum = q[a]->top();
			checker[a][linenum] = 0;
			q[a]->pop();
			ans++;
		}
	}
	else {
		checker[a][b] = 1;
		q[a]->push(b);
		ans++;
		while (q[a]->top() != b) {
			int linenum = q[a]->top();
			checker[a][linenum] = 0;
			q[a]->pop();
			ans++;
		}
	}
}

int main() {
	ios::sync_with_stdio(false);
	cin.tie(0);
	cin >> N >> p;
	while (N != 0) {
		cin >> a >> b;
		ply(a, b);
		N--;
	}
	cout << ans;
}
