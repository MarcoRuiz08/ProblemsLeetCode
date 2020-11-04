//============================================================================
// Name        : AddTwoNumbers.cpp
// Author      : Marco Ruiz
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World in C++, Ansi-style
//============================================================================

#include <iostream>
using namespace std;

struct ListNode{
	int data;
	ListNode* next;
};

class Solution {
private:
	ListNode *head, *tail;
public:

	void linked_list(){
		head = NULL;
		tail = NULL;
	}

	void add_node(int n){
		ListNode *tmp = new ListNode;
		tmp->data = n;
		tmp->next = NULL;

		if(head == NULL)
		{
			head = tmp;
			tail = tmp;

		} else
		{
			tail->next = tmp;
			tail = tail->next;

		}
	}
    ListNode* addTwoNumbers(ListNode* l1, ListNode* l2) {

    }
};

int main() {
	cout << "!!!Hello World!!!" << endl; // prints !!!Hello World!!!
	return 0;
}
