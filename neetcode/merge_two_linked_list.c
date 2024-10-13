#include <stdio.h>
#include <stdlib.h>


typedef struct list {
	int data;
	struct list *next;
} list;


void insert_at_list(list **head, int value) {
	
	list *new_node = (list *) malloc(sizeof(list));
	new_node->next = NULL;
	new_node->data = value;
	
	if (*head == NULL) {
		*head = new_node; return;
	}
	
	list *temp = *head;
	while (temp->next != NULL) temp = temp->next;
	temp->next = new_node;
	
}

void print_list(char *msg, list *head) {
	
	list *temp = head;
	printf("%s", msg);
	while (temp != NULL) {
		printf("%d--> ", temp->data);
		temp = temp->next;
	} printf("\n");
	
}

list *merge_list_copy(list *l1, list *l2) {
	
	if (l1 == NULL && l2 == NULL) return NULL;
	
	return NULL;
	
}

list *merge_list_splice(list *l1, list *l2) {
	
	if (l1 == NULL && l2 == NULL) return NULL;
	
	return NULL;
		
	
} 


int main() {
	
	list *head1 = NULL;
	list *head2 = NULL;
	
	insert_at_list(&head1, 1); insert_at_list(&head1, 2); insert_at_list(&head1, 3);
	insert_at_list(&head2, 4); insert_at_list(&head2, 5);
	
	print_list("l1: ", head1); print_list("l2: ", head2);
	
	list *new_head = merge_list_copy(head1, head2);
	print_list("l1 & l2 : ", new_head);
	
	
	return 0;
	
}












