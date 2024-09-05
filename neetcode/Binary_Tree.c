#include <stdio.h>
#include <stdlib.h>


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


Tree *insert_at_tree(Tree *root, int data);
void show_tree(Tree *root);
void insert_at_queue(Queue **head, Queue **tail, Tree *node);
Tree *delete_from_queue(Queue **head, Queue **tail);




Tree *insert_at_tree(Tree *root, int data) {
    
    Tree *new_node = (Tree *) malloc(sizeof(Tree));
    new_node->data = data;
    new_node->right = new_node->left = NULL;
    
    if (root == NULL) {
        root = new_node; return root;
    }
    
    if (root->data <= data) {
        if (root->right != NULL) {
            insert_at_tree(root->right, data);
        } else {
            root->right = new_node; return root;
        }
     } else { //  if (root->data > data)
        if (root->left != NULL) {
            insert_at_tree(root->left, data);
        } else {
            root->left = new_node; return root;
        }
     }
     
     return root;
     
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

void show_tree(Tree *root) {
    
    printf("[");
    if (root == NULL) {
        printf("No Data In Tree\n");
        return;
    }
    
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
    
    printf("]\n");
    
}


#define n 3

int main() {
    
    Tree *root = NULL;
    int T[n] = {1, 2, 3};
    
    for (int i = 0; i < n; i++) {
        root = insert_at_tree(root, T[i]);
    }
    show_tree(root);
    
    
    return 0;
}


// do DFS for getting the corect result






















