#include <iostream>
using namespace std;

class Node {
public:
	int data;
	Node* next;
	Node(int e) {
		this->data = e;
		this->next = NULL;
	}
};

class stack {
public:

	Node* head;
	Node* tail;
	int n;

	stack() {
		this->head = NULL;
		this->tail = NULL;
		this->n = 0;
	}
	int size() {
		return n;
	}
	bool empty() {
		if (n == 0) {
			return 1;
		}
		else {
			return 0;
		}
		
	}
	int top() {
		if (empty()) {
			return -1;
		}
		else {
			return head->data;
		}
	}
	void push(int e) {
		Node* newNode = new Node(e);
		if (empty()) {
			head = tail = newNode;
			n++;
		}
		else {
			newNode->next = head;
			head = newNode;
			n++;
		}
	}
	int pop() {
		if (empty()) return -1;
		else {
			Node* tmp = head;
			head = head->next;
			n--;
			return tmp->data;
		}
	}
};

int main() {
	
	int testNum = 0;
	cin >> testNum;

	stack stk;

	for (int i = 0; i < testNum; i++) {
		string st = "";
		cin >> st;

		if (st == "push") {
			int data = 0;
			cin >> data;
			stk.push(data);
		}
		else if (st == "top") {
			cout << stk.top() << endl;
		}
		else if (st == "pop") {
			cout << stk.pop() << endl;
		}
		else if (st == "empty") {
			cout << stk.empty() << endl;
		}
		else if (st == "size") {
			cout << stk.size() << endl;
		}
	}
	
}