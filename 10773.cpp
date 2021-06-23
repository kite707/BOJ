//#include <iostream>
//#include<vector>;
//using namespace std;
//
//
//class Node {
//public:
//	Node* next;
//	int elem;
//};
//
//class Stack {
//public:
//	Node* head;
//	Node* trailer;
//
//	Stack() {
//		head = new Node;
//		trailer = new Node;
//		head->next = trailer;
//	}
//
//	void push(int a) {
//		Node* curnode = new Node;
//		curnode->elem = a;
//
//		curnode->next = head->next;
//		head->next = curnode;
//
//	}
//
//	bool empty() {
//		return(head->next == trailer);
//	}
//	int pop() {
//		if (empty()) {
//			return -1;
//		}
//		else {
//			Node* cur = head->next;
//			head->next = cur->next;
//			return cur->elem;
//			delete cur;
//		}
//	}
//	int top() {
//		if (empty()) {
//			return -1;
//		}
//		return head->next->elem;
//
//	}
//
//};
//
//int main() {
//	int counter;
//	cin >> counter;
//	Stack st;
//	while (counter > 0) {
//		int inin;
//		cin >> inin;
//
//		if (inin == 0) {
//			st.pop();
//		}
//		else {
//			st.push(inin);
//		}
//		counter--;
//	}
//	int sum = 0;
//	while (!st.empty()) {
//		sum += st.pop();
//	}
//	cout << sum;
//}