#include <iostream>
#include<vector>;
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
	int top() {
		if (empty()) {
			return -1;
		}
		return head->next->elem;
		
	}

};

int main() {
	int k;
	cin >> k;
	Stack st;
	vector <int> vec;
	string str = "";
	for (int i = 0; i < k; i++) {
		int j;
		cin >> j;
		vec.push_back(j); //vec¿¡ 43687421ÀúÀåµÊ
	}
	int stacknum = 1;
	for (int i = 0; i < k; i++) {
		int curnum = vec[i];
		while (stacknum <= curnum) {
			st.push(stacknum);
			str += "+";
			stacknum++;
		}
		if (st.top() == vec[i]) {
			st.pop();
			str += "-";
		}
	}
	if (st.empty()) {
		for (int i = 0; i < str.length()-1; i++) {
			cout << str[i] << "\n";
		}
		cout << str[str.length() - 1];
	}
	else {
		cout << "NO";
	}
}