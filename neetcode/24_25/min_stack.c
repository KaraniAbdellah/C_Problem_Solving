#include <stdio.h>
#include <stdlib.h>



typedef struct stack {
	int data;
	struct stack *next;
	struct stack *prev;
} stack;

typedef struct MinStack {
	struct stack *head;
	struct stack *sommet;
} MinStack;



void push(MinStack *minstack, int value);
void pop(MinStack *minstack);
int top(MinStack *minstack);
int getMin(MinStack *minstack);



void push(MinStack *minstack, int value) {
	
	stack *new_node = (stack *) malloc(sizeof(stack));
	if (new_node == NULL) exit(1);
	new_node->data = value;
	new_node->prev = new_node->next = NULL;
	
	if (minstack->head == NULL) {
		minstack->head = minstack->sommet = new_node; return;
	}
	
	new_node->prev = minstack->sommet;
	minstack->sommet->next = new_node;
	minstack->sommet = new_node;
	
}

void pop(MinStack *minstack) {
	
	if (minstack->head != NULL) {
		stack *temp = minstack->sommet;
		minstack->sommet = minstack->sommet->prev;
		minstack->sommet->next = NULL;
		free(temp);
	}
	
} 

void print_stack(MinStack *minstack) {
	
	if (minstack->head != NULL) {
		stack *temp = minstack->head;
		while (temp != NULL) {
			printf("%d --> ", temp->data);
			temp = temp->next;
		}	
	} printf("\n");
	
}

int top(MinStack *minstack) {
	
	return (minstack->sommet != NULL) ? minstack->sommet->data : -1;
	
}

int getMin(MinStack *minstack) {
	
	if (minstack->head != NULL) {
		int min = minstack->head->data;
		stack *temp = minstack->head;
		while (temp) {
			if (min > temp->data) min = temp->data;
			temp = temp->next;
		} return min;
	}
	
}



int main() {
	
	MinStack *minstack = (MinStack *) malloc(sizeof(MinStack));
	minstack->head = minstack->sommet = NULL;
	push(minstack, 1);
	push(minstack, 2);
	push(minstack, 3);
	push(minstack, 4); pop(minstack);
	push(minstack, 5);
	push(minstack, -5);
	print_stack(minstack);
	printf("top = %d\n", top(minstack));
	printf("min = %d\n", getMin(minstack));
	
	
	return 0;
}

















