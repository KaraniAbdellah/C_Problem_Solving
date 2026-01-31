#include <stdio.h>
#include <stdlib.h>

#define n 3


typedef struct Tree {
    int data;
    struct Tree *left;
    struct Tree *right;
} Tree;


typedef struct Queue {
    Tree *data;
    struct Queue *next;
    struct Queue *prev;
} Queue;


typedef struct Stack {
    Tree *data;
    struct Stack *next;
    struct Stack *prev;
} Stack;



void insert_at_tree(Tree **root, int data);
void show_tree(Tree *root);
void insert_at_queue(Queue **head, Queue **tail, Tree *node);
Tree *delete_from_queue(Queue **head, Queue **tail);
void insert_at_stack(Stack **head, Tree *node);
Tree *delete_from_stack(Stack **head);
void infixe(Tree *root);


void insert_at_tree(Tree **root, int data) {
    
    Tree *new_node = (Tree *) malloc(sizeof(Tree));
    new_node->data = data;
    new_node->right = new_node->left = NULL;
    
    if (*root == NULL) {
        *root = new_node; return;
    }
    
    if ((*root)->data <= data) {
        if ((*root)->right != NULL) {
            insert_at_tree(&((*root)->right), data);
        } else {
            (*root)->right = new_node;
        }
     } else { //  if (root->data > data)
        if ((*root)->left != NULL) {
            insert_at_tree(&((*root)->left), data);
        } else {
            (*root)->left = new_node;
        }
     }
     
}



void insert_at_queue(Queue **head, Queue **tail, Tree *node) {
    
    Queue *new_node = (Queue *) malloc(sizeof(Queue));
    new_node->data = node;
    new_node->next = new_node->prev = NULL;
    
    if (*head == NULL) {
        *tail = *head = new_node;
        return;
    }
    
    (*head)->next = new_node;
    new_node->prev = *head;
    *head = new_node;
    
}

Tree *delete_from_queue(Queue **head, Queue **tail) {
    
    if (*head == NULL) return NULL;
    
    Tree *p = (*head)->data;
    Queue *temp = *head;
    
    if ((*head)->prev != NULL) *head = (*head)->prev;
    else *head = *tail = NULL;
    
    free(temp);
    return p;
    
}



void insert_at_stack(Stack **head, Tree *node) {
    
    Stack *new_node = (Stack *) malloc(sizeof(Stack));
    new_node->next = new_node->prev = NULL;
    new_node->data = node;
    
    if (*head == NULL) {
        *head = new_node; return;
    }
    
    (*head)->next = new_node;
    new_node->prev = *head;
    *head = new_node;
    
}



Tree *delete_from_stack(Stack **head) {
    if (*head == NULL) return NULL;
    
    Stack *temp = (*head);
    Tree *p = (*head)->data;
    (*head)->next = NULL;
    if((*head)->prev != NULL) *head = (*head)->prev;
    else *head  = NULL;
    free(temp);
    
    return p;
}





void show_tree(Tree *root) {
    printf("[");
    
    if (root == NULL) {
        printf("No Data In Tree\n");
        return;
    }
    
    // With BFS
    /*
    Queue *head = NULL, *tail = NULL;
    insert_at_queue(&head, &tail, root);
    
    while (head != NULL) {
        
        // delete from queue
        Tree *deleted_node = delete_from_queue(&head, &tail);
        // print data
        printf("%d,", deleted_node->data);
        // insert data
        if (deleted_node->right != NULL) {
            insert_at_queue(&head, &tail, deleted_node->right);
        }
        if (deleted_node->left != NULL) {
            insert_at_queue(&head, &tail, deleted_node->left);
        }
        
    }
    */
    
    // With DFS
    Stack *head = NULL;
    insert_at_stack(&head, root);
    
    while (head != NULL) {
        
        // delete from stack
        Tree *deleted_node = delete_from_stack(&head);
        // print the data
        printf("%d,", deleted_node->data);
        // insert data
        if (deleted_node->right != NULL) {
            insert_at_stack(&head, deleted_node->right);
        }
        if (deleted_node->left != NULL) {
            insert_at_stack(&head, deleted_node->left);
        }
        
    }
    printf("]\n");
}


void infixe(Tree *root) {
    if (root == NULL) return;
    infixe(root->left);
    printf("%d  ", root->data);
    infixe(root->right);
}

int main() {
    Tree *root = NULL;
    int T[n] = {1, 2, 3};
    
    for (int i = 0; i < n; i++) {
        insert_at_tree(&root, T[i]);
    }
    
    show_tree(root);
    printf("\n");
    infixe(root);
    printf("\n");
    
    return 0;
}























