#include <iostream>
#include <queue>
#define P pair<int,int>
using namespace std;

int w, h;
int map[51][51];
int dir[8][2] = { {0,1},{0,-1},{1,1},{1,-1},{-1,-1},{-1,0},{-1,1},{1,0} };

void bfs(int x, int y) {
	queue <pair<int, int>> q;
	q.push(P(x, y));

	while (!q.empty()) {
		P cur = q.front();
		q.pop();
		int x = cur.first;
		int y = cur.second;

		for (int i = 0; i < 8; i++) {
			int dx = x + dir[i][0];
			int dy = y + dir[i][1];

			if (dx >= 0 && dy >= 0 && dx < w && dy < h && map[dx][dy] == 1) {
				map[dx][dy] = 0;
				q.push(P(dx, dy));
			}
		}
	}
}

int main() {
	ios::sync_with_stdio(false);
	cin.tie(0);
	
	while (true) {
		int ans = 0;
		cin >> w >> h;
		if (w==0&&h==0) {
			break;
		}

		for (int i = 0; i < h; i++) {
			for (int j = 0; j < w; j++) {
				cin >> map[j][i];
			}
		}

		for (int i = 0; i < h; i++) {
			for (int j = 0; j < w; j++) {
				if (map[j][i] == 1) {
					bfs(j, i);
					ans++;
				}
			}
		}

		cout << ans << "\n";
	}
}
