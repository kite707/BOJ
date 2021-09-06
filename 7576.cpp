#include <iostream>
#include <queue>
#define P pair<int,int>
using namespace std;

queue <pair<int, int>> q;
int map[1001][1001];
int sizeX, sizeY;
int dire[4][2] = { {0,1},{0,-1},{1,0},{-1,0} };


void bfs(){
	
	while (!q.empty()) {
		P cur = q.front();
		q.pop();
		int x = cur.first;
		int y = cur.second;

		for (int i = 0; i < 4; i++) {
			int dx = x + dire[i][0];
			int dy = y + dire[i][1];

			if (dx >= 0 && dy >= 0 && dx < sizeX && dy < sizeY && map[dx][dy] == 0) {
				map[dx][dy] = map[x][y] + 1;
				q.push(P(dx, dy));
			}
		}
	}
}

int main() {
	ios::sync_with_stdio(false);
	cin.tie(0);

	cin >> sizeX >> sizeY;
	int a;
	for (int i = 0; i < sizeY; i++) {
		for (int j = 0; j < sizeX; j++) {
			cin >> a;
			map[j][i] = a;
			if (a == 1) {
				q.push(P(j, i));
			}
		}
	}

	bfs();

	int res = 0;
	for (int i = 0; i < sizeY; i++) {
		for (int j = 0; j < sizeX; j++) {
			if (map[j][i] == 0) {
				cout << -1;
				return 0;
			}
			if (res < map[j][i]) {
				res = map[j][i];
			}
		}
	}
	cout << res - 1;

}
