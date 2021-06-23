//#include <iostream>
//using namespace std;
//
//int arr[100][2];
//int a, b;
//int ranksaver[100];
//int main() {
//	int k;
//	cin >> k;
//	for (int i = 1; i <= k; i++) {
//		cin >> a >> b;
//		arr[i][0] = a;
//		arr[i][1] = b;
//	}
//
//	for (int i = 1; i <= k; i++) {
//		int rank = 1;
//		for (int j = 1; j <= k; j++) {
//			if (i != j) {
//				if (arr[j][0] > arr[i][0] && arr[j][1] > arr[i][1]) {
//					rank++;
//				}
//			}
//		}
//		ranksaver[i] = rank;
//	}
//	for (int i = 1; i <= k; i++) {
//		cout << ranksaver[i] << " ";
//	}
//}