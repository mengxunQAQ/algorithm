#include <malloc.h>
#include <stdio.h>



typedef struct ListNode {
	int value;
	struct ListNode *next;
} Node;

Node *init(void);
void add(Node* head, Node* node);

int main(void){
	
	Node *head = init();
	Node node = {
		100
	};
	
	add(head, &node);
	printf("%d\n", (head->next)->value);
	
	return 0;
}

// 链表的初始化 
Node *init(void) {
	Node *head;
	head = (Node *)malloc(sizeof(Node));

	head->next = NULL;
	
	return head;	
}

// 链表增加节点 
void add(Node* head, Node* node) {
	Node *p1;
	p1 = head;
	
	while (p1->next != NULL) {
		p1 = head->next;
	}
	
	p1->next = node;
	node -> next = NULL; 
} 



