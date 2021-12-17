#include <iostream>
#include <queue>
#include <vector>
#include <algorithm>
#define P pair<int,int>
#define MAXX 987654321
using namespace std;
int maxx = 987654321;
int cost_store[1001];
vector<P>v [1001];


void dijkstra(int start) {
	priority_queue<P,vector<P>,greater<P>> PQ;
	PQ.push(P(0, start));
	cost_store[start] = 0;

	while (!PQ.empty()) {
		int current = PQ.top().second;
		int cost = PQ.top().first;
		PQ.pop();

		//이거 없으면 시간 초과
		if (cost_store[current]<cost) {
			continue;
		}

		for (int i = 0; i < v[current].size(); i++) {
			int next = v[current][i].first;
			int ncost = v[current][i].second + cost_store[current];

			if (cost_store[next] > ncost) {
				cost_store[next] = ncost;
				PQ.push(P(ncost, next));
			}
			
		}
	}
}

int main() {
	ios::sync_with_stdio(false);
	cin.tie(0);
	fill(&cost_store[0], &cost_store[0] + 1001, MAXX);
	int n, m;
	cin >> n >> m;
	int a, b, c;
	while (m != 0) {
		cin >> a >> b >> c;
		v[a].push_back(P(b, c));
		//v[b].push_back(P(cost, a));
		m--;
	}
	cin >> a >> b;
	//fill_n(cost_store, 1001, 987654321);
	
	dijkstra(a);
	

	cout << cost_store[b];

	
}
