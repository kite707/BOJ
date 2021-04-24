#include <iostream>
using namespace std;

class Node {
public:
	Node* next;
	char elem;
};

class Stack {
public:
	Node* head;
	Node* trailer;

	Stack() {
		head = new Node;
		trailer = new Node;
		head->next = trailer;
	}

	void push(int a) {
		Node* curnode = new Node;
		curnode->elem = a;

		curnode->next = head->next;
		head->next = curnode;
	
	}

	bool empty() {
		return(head->next == trailer);
	}
	char pop() {
		if (empty()) {
			return 'j';
		}
		else {
			Node* cur = head->next;
			head->next = cur->next;
			return cur->elem;
			delete cur;
		}
	}
	void top() {
		if (empty()) {
			cout << -1 << endl;
		}
		else {
			cout << head->next->elem << endl;
		}
	}

};

int main() {
	int k;
	cin >> k;

	while (k > 0) {
		Stack st;
		string oper;
		cin >> oper;
		bool flag = true;
		for (auto j : oper) {
			if (j == '(') {
				st.push(j);
			}
			else {
				if (st.pop() != '(') {
					flag = false;
					break;
				}
			}
		}
		if (flag&&st.empty()) {
			cout << "YES" << endl;
		}
		else {
			cout << "NO" << endl;
		}
		k--;
	}
}
