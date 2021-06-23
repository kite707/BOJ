//#include <utility>
//#include <queue>
//#include <vector>
//#include <iostream>
//#include <algorithm>
//using namespace std;
//
//int main() {
//	ios::sync_with_stdio(false);
//	cin.tie(0);
//	int n;
//	cin >> n;
//	while (n != 0) {
//		int a, b;
//		cin >> a >> b;
//		queue<pair<int,int>> que;
//		vector<int> v;
//		for (int i = 0; i < a; i++) {
//			int k;
//			cin >> k;
//			pair<int, int> p = make_pair(i, k);
//			v.push_back(k);
//			que.push(p);
//		}
//		int cnt = 0;
//		sort(v.begin(), v.end());
//		while (!que.empty()) {
//			pair<int, int> si = que.front();
//			
//			que.pop();
//			if (si.second != v[v.size() - 1]) {
//				que.push(si);
//			}
//			else {
//				v.pop_back();
//				if (si.first == b) {
//					cout << cnt+1 << "\n";
//					break;
//				}
//				cnt++;
//			}
//		}
//
//		n--;
//	}
//	
//}