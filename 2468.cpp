#include <iostream>
#include <algorithm>
#include <queue>
#define P pair<int,int>
using namespace std;

int map[101][101];
int map2[101][101];
int width;
int highest;
int a;
int comp[4][2] = { {0,1},{0,-1},{1,0},{-1,0} };
vector<int> answer;

void flood(int height) {
	for (int i = 0; i < width; i++) {
		for (int j = 0; j < width; j++) {
			if (map[j][i] <= height) {
				//물에 잠기면 -1
				map[j][i] = -1;
			}
		}
	}
}

void bfs(int x, int y) {
	queue <pair<int, int>> q;
	q.push(P(x, y));
	while (!q.empty()) {
		P cur = q.front();
		q.pop();
		int x = cur.first;
		int y = cur.second;
		for (int i = 0; i < 4; i++) {
			int dx = x + comp[i][0];
			int dy = y + comp[i][1];

			if (dx >= 0 && dy >= 0 && dx < width && dy < width && map[dx][dy] != -1) {
				q.push(P(dx, dy));
				map[dx][dy] = -1;
			}
		}
	}

}

int main() {
	ios::sync_with_stdio(false);
	cin.tie(0);
	cin >> width;
	for (int i = 0; i < width; i++) {
		for (int j = 0; j < width; j++) {
			cin >> a;
			map2[j][i] = a;
			if (highest < a) {
				highest = a;
			}
		}
	}
	
	

	for (int i = 0; i <= highest; i++) {
		copy(&map2[0][0], &map2[0][0] + 10201, &map[0][0]);
		flood(i);
		int ans = 0;
		for (int i = 0; i < width; i++) {
			for (int j = 0; j < width; j++) {
				if (map[j][i] != -1) {
					bfs(j, i);
					ans++;
				}
			}
		}
		answer.push_back(ans);
	}
	sort(answer.begin(), answer.end());
	cout << answer[answer.size() - 1];
	
}
