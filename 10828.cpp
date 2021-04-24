#include <iostream>
using namespace std;

class Node {
public:
	Node* next;
	int elem;
};

class Stack {
public:
	Node* head;
	Node* trailer;
	int n;

	Stack() {
		head = new Node;
		trailer = new Node;
		head->next = trailer;
		n = 0;
	}

	void push(int a) {
		Node* curnode = new Node;
		curnode->elem = a;

		curnode->next = head->next;
		head->next = curnode;
		n++;
	}

	bool empty() {
		return(head->next == trailer);
	}
	void pop() {
		if (empty()) {
			cout << -1 << endl;
		}
		else {
			Node* cur = head->next;
			cout << cur->elem << endl;
			head->next = cur->next;
			delete cur;
			n--;
		}
	}
	void size() {
		cout << n << endl;
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
	Stack st;
	while (k > 0) {
		string oper;
		cin >> oper;
		if (oper == "push") {
			int j;
			cin >> j;
			st.push(j);
		}
		if (oper == "pop") {
			st.pop();
		}
		if (oper == "size") {
			st.size();
		}
		if (oper == "empty") {
			cout << st.empty() << endl;
		}
		if (oper == "top") {
			st.top();
		}
		k--;
	}
}