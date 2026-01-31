#include <stdio.h>
#include <stdlib.h>



typedef struct LinkedList {
	int data;
	struct LinkedList *next;
} LinkedList;

void add_to_list(LinkedList **root, int data);
void display_list(LinkedList *root);
LinkedList *reverse_linked_list1(LinkedList *root);
LinkedList *reverse_linked_list2(LinkedList *root);



void add_to_list(LinkedList **root, int data) {
	
	LinkedList *new_ele = (LinkedList *) malloc(sizeof(LinkedList));
	new_ele->data = data;
	new_ele->next = NULL;
	
	if (*root == NULL) {
		*root = new_ele; return;
	}
	
	LinkedList *temp = *root;
	while (temp->next != NULL) temp = temp->next;
	temp->next = new_ele;
	
}


void display_list(LinkedList *root) {

	if (root != NULL) {
		printf("\nLinked List : ");
		LinkedList *temp = root;
		while (temp != NULL) {
			printf("%d <--> ", temp->data); temp = temp->next;
		}
		printf("\n\n");
	} else printf("\nList Empty\n");
	
}


LinkedList *reverse_linked_list1(LinkedList *root) {

	// reverse using two pointer technique
	if (root != NULL) {
	
		LinkedList *p1, *p2;
		p1 = root; p2 = root;
		int count = -1;
		while (p2->next != NULL) {
			p2 = p2->next;
			count++;
		} 
		
		int temp;
		while (p1 < p2) {
			
			temp = p1->data;
			p1->data = p2->data;
			p2->data = temp;
			
			p1 = p1->next;
			int i = 0; p2 = root;
			while (i < count) {
				p2 = p2->next; i++;
			}
			count--;
			
		}
		return root;
		
	} else return NULL;
	
}


LinkedList *reverse_linked_list2(LinkedList *root) {
	
	LinkedList *p = root, *prev = NULL, *temp = root;
	while (p != NULL) {
		temp = p->next;
		p->next = prev;
		prev = p;
		p = temp;
	}
	root = prev;
	return root;
	
}


int main() {
	
	LinkedList *root = NULL;
    for (int i = 0; i < 9; i++) add_to_list(&root, i);
    
    display_list(root);
    root = reverse_linked_list2(root);
    display_list(root);
    
    return 0;
}


















