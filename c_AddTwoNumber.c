/*
 ============================================================================
 Name        : c_AddTwoNumber.c
 Author      : 
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>

struct ListNode{

	int val;
	struct ListNode* next;
};

//Define node has typedef the kind of struct ListNode
typedef struct ListNode node;

struct ListNode* addTwoNumbers(struct ListNode* l1, struct ListNode* l2){

	node r1,r2,r3;
	node* headR;

	while(l1->next != NULL && l2->next != NULL)
	{
		r1.val = l1->val + l2->val;

	}

	r2.val = l1->

}

//Function to cretae a new node
/*
 * The function return a pointer of type node
 */
node *createANewNode(int value){

	node *result = malloc(sizeof(node)); //Create a new node with the size of node
	result->val  = value;
	result->next = NULL;

	return result;
}


int main(void) {

	node n1,n2,n3;
	node l1,l2,l3;


	node* head1 = NULL;
	node* head2;
	node* r;


	n1.val = 2;
	n2.val = 4;
	n3.val = 3;

	l1.val = 5;
	l2.val = 6;
	l3.val = 4;

	head1 = &n1;
	head2 = &l1;

	n1.next = &n2;
	n2.next = &n3;
	n3.next = NULL;

	l1.next = &l2;
	l2.next = &l3;
	l3.next = NULL;

	r = addTwoNumbers(head1,head2);

	return 0;
}
