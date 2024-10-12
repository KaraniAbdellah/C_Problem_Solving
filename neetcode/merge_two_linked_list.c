#include <stdio.h>
#include <stdlib.h>


typedef struct list {
	int data;
	struct list *next;
	struct list *prev;
} list;


void insert_at_list(list **head, int value) {
	
	list *new_node = (list *) malloc(sizeof(list));
	new_node->next = new_node->prev = NULL;
	new_node->data = value;
	if (head == NULL) {
		*head = new_node; return;
	}
	
	new_node->next = *head;
	// if (*head != NULL) (*head)->prev = new_node;
	*head = new_node;
	
}

void print_list(list *head) {
	
	list *temp = head;
	while (temp != NULL) {
		printf("%d--> ", temp->data);
		temp = temp->next;
	} printf("\n");
	
}

void merge_list(list *l1, list *l2) {
	
	if (l1 == NULL && l2 == NULL) return;
	
	
	
}


int main() {
	
	list *head1 = NULL;
	list *head2 = NULL;
	
	insert_at_list(&head1, 1); insert_at_list(&head1, 2); insert_at_list(&head1, 3);
	insert_at_list(&head2, 4); insert_at_list(&head2, 5); insert_at_list(&head2, 6);
	
	print_list(head1); print_list(head2);
	
	
	
	return 0;
	
}












