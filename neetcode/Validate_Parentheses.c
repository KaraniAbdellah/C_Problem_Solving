#include <stdio.h>
#include <stdlib.h>

#define MAX 1001


typedef struct Stack {
    char data;
    struct Stack *next;
    struct Stack *prev;
} Stack;



// Function Prototype
void insert_at_stack(Stack **head, char data);
void delete_from_stack(Stack **head);



// insert at stack
void insert_at_stack(Stack **head, char data) {
    Stack *new_node = (Stack *) malloc(sizeof(Stack));
    new_node->next = new_node->prev = NULL;
    new_node->data = data;
    
    if (*head == NULL) {
        *head = new_node; return;
    }
    
    new_node->prev = *head;
    (*head)->next = new_node;
    *head = new_node;
}



// delete from stack
void delete_from_stack(Stack **head) {
    
    if (*head == NULL) return;
    
    Stack *temp = *head;
    if ((*head)->prev != NULL) {
        (*head)->prev->next = NULL;
        *head = (*head)->prev;
    }
    else *head = NULL;
    
    free(temp);
    
}


void print_stack(Stack *head) {
    Stack *temp = head;
    while(temp != NULL) {
        printf("%c --> ", temp->data);
        temp = temp->next;
    }
}




int main() {
    Stack *head = NULL;
    char *input = (char *) malloc(sizeof(char));
    char c;
    while ((c = getchar()) && c != '\n') {
        insert_at_stack(&head, c);
    }
    
    
    int check = 1;
    Stack *temp = head;
    while (temp->prev != NULL) {
        
        if (temp->data == '(') {
            if (temp->prev->data != ')') {
                check = 0; break;
            }
        }
        if (temp->data == ')') {
            if (temp->prev->data != '(') {
                check = 0; break;
            }
        }
        if (temp->data == '{') {
            if (temp->prev->data != '}') {
                check = 0; break;
            }
        }
        if (temp->data == '}') {
            if (temp->prev->data != '{') {
                check = 0; break;
            }
        }
        if (temp->data == '[') {
            if (temp->prev->data != ']') {
                check = 0; break;
            }
        }
        if (temp->data == ']') {
            if (temp->prev->data != '[') {
                check = 0; break;
            }
        }
        temp = temp->prev;
    }
    
    
    if (check == 0) printf("false");
    else printf("true");
    
    
    return 0;
}





































