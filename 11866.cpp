//#include <iostream>
//#include <queue>
//using namespace std;
//
//int main() {
//	ios::sync_with_stdio(false);
//	cin.tie(0);
//	cout.tie(0);
//
//	queue<int> q;
//	int n, k;
//	cin >> n >> k;
//	for (int i = 1; i <= n; i++) {
//		q.push(i);
//	}
//	int dan = 1;
//	cout << "<";
//	while (q.size()!=1) {
//		if (dan % k == 0) {
//			cout << q.front() << ", ";
//			q.pop();
//		}
//		else {
//			int num = q.front();
//			q.pop();
//			q.push(num);
//		}
//		dan++;
//	}
//	cout << q.front() << ">";
//}