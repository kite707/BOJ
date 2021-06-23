//#include <iostream>
//#include <queue>
//using namespace std;
//
//int num;
//
//int main() {
//	ios::sync_with_stdio(false);
//	cin.tie(0);
//	cout.tie(0);
//
//	int k;
//	cin >> k;
//	queue <int> q1;
//	while (k != 0) {
//		string oper;
//		cin >> oper;
//		if (oper == "push") {
//			cin >> num;
//			q1.push(num);
//		}
//		else if (oper == "pop") {
//			if (q1.empty()) {
//				cout << -1 << "\n";
//			}
//			else {
//				cout << q1.front() << "\n";
//				q1.pop();
//			}
//		}
//		else if (oper == "size") {
//			cout << q1.size() << "\n";
//		}
//		else if (oper == "empty") {
//			cout << q1.empty() << "\n";
//		}
//		else if (oper == "front") {
//			if (q1.empty()) {
//				cout << -1 << "\n";
//			}
//			else {
//				cout << q1.front() << "\n";
//			}
//			
//		}
//		else if (oper == "back") {
//			if (q1.empty()) {
//				cout << -1 << "\n";
//			}
//			else {
//				cout << q1.back() << "\n";
//			}
//			
//		}
//
//		k--;
//	}
//}