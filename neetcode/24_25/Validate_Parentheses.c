#include <stdio.h>
#include <stdlib.h>

#define MAX 1001


typedef struct Stack {
    char data;
    struct Stack *next;
    struct Stack *prev;
} Stack;



// Function Prototype
void insert_at_stack(Stack **head, Stack **tail, char data);
void delete_from_stack(Stack **head, Stack **tail);
int is_valid(char *str);
int is_match(char first, char second);

// insert at stack
void insert_at_stack(Stack **head, Stack **tail, char data) {
    Stack *new_node = (Stack *) malloc(sizeof(Stack));
    new_node->next = new_node->prev = NULL;
    new_node->data = data;
    
    if (*head == NULL) {
        *head = *tail = new_node; return;
    }
    
    new_node->prev = *tail;
    (*tail)->next = new_node;
    *tail = new_node;
}



// delete from stack
void delete_from_stack(Stack **head, Stack **tail) {
    
    if (*tail == NULL) return;
    
    Stack *temp = *tail;
    if ((*tail)->prev != NULL) {
        (*tail)->prev->next = NULL;
        *tail = (*tail)->prev;
    }
    else *tail = *head = NULL;
    
    free(temp);
    
}


int is_match(char first, char second) {
    
    return (first == '[' && second == ']') ||
        (first == '(' && second == ')') ||
        (first == '{' && second == '}');
    
}



int is_valid(char *str) {
    Stack *head = NULL, *tail = NULL;
    for (int i = 0; str[i] != '\0'; i++) {
        char current = str[i];
        if (current == '{' || current == '(' || current == '[') {
            insert_at_stack(&head, &tail, current);
        } else if (current == '}' || current == ')' || current == ']') {
            if (head == NULL || !is_match(tail->data, current)) {
                return 0;
            }
            delete_from_stack(&head, &tail);
        }
    }
    return head == NULL;
}


int main() {
    
    char str[MAX];
    scanf("%s", str); getchar();
    
    if (is_valid(str)) printf("true\n");
    else printf("false\n");
    
    return 0;
}





































