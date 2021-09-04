#include <iostream>
#include <queue>
#include <algorithm>
#include <vector>
#pragma warning(disable : 4996)
#define P pair<int,int>
using namespace std;

int direction[4][2] = { {0,1},{0,-1},{1,0},{-1,0} };
int siz;
int map[26][26];

int cur_number;
vector<int> num;

void checker(int x, int y) {
	int h = 1;
	queue<pair<int, int>> q;
	q.push(P(x, y));
	map[x][y] = 0;
	while (!q.empty()) {
		P current = q.front();
		q.pop();
		

		for (int i = 0; i < 4; i++) {
			int dx = current.first + direction[i][0];
			int dy = current.second + direction[i][1];

			if (dx >= 0 && dx < siz && dy >= 0 && dy < siz && map[dx][dy] == 1) {
				q.push(P(dx, dy));
				map[dx][dy] = 0;
				h++;
			}
		}

	}
	
	num.push_back(h);
}

int main() {
	cin >>siz;
	for (int i = 0; i < siz; i++) {
		for (int j = 0; j < siz; j++) {
			scanf("%1d", &map[j][i]);
		}
	}
	for (int i = 0; i < siz; i++) {
		for (int j = 0; j < siz; j++) {
			if (map[j][i] == 1) {
				checker(j, i);
				cur_number++;
			}
		}
	}
	cout << cur_number << "\n";
	sort(num.begin(), num.end());
	for (int i = 0; i < num.size(); i++) {
		cout << num[i] << "\n";
	}
}
