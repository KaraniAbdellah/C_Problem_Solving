#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>



typedef struct Graph {
	int nbr_nodes;
	char **edges;
} Graph;


////////////////////////////////////////////////////
Graph *create_graph(int nbr_nodes);
void add_node_directed(Graph *g, int from, int to);
void add_node_undirected(Graph *g, int from, int to);
void print_graph(Graph *g);
int numIslands(Graph *g);
void failed_create();
////////////////////////////////////////////////////


void failed_create() {
	perror("malloc"); // malloc: reason
	exit(1);
}



Graph *create_graph(int nbr_nodes) {
	
	Graph *new_graph = (Graph *) malloc(sizeof(Graph));
	if (new_graph == NULL) failed_create();
	
	new_graph->nbr_nodes = nbr_nodes;
	new_graph->edges = (char **) calloc(nbr_nodes, sizeof(char *));
	if (new_graph->edges == NULL) {
		free(new_graph); failed_create();
	}
	
	for (int i = 0; i < nbr_nodes; i++) {
		new_graph->edges[i] = (char *) calloc(nbr_nodes, sizeof(char *));
		if (new_graph->edges == NULL) {
			for (int j = 0; j < i; j++)  free(new_graph->edges[j]);	
			failed_create();
		}
	}
	
	return new_graph;
	
}



void add_node_directed(Graph *g, int from, int to) {
	
	if (g == NULL) return;
	int nbr_nodes = g->nbr_nodes;
	bool condition = from > nbr_nodes || from < 0 || to > nbr_nodes || to < 0;
	if (condition) return;

	if (g->edges[from][to] == 0) g->edges[from][to] = 1;
	
}



void add_node_undirected(Graph *g, int from, int to) {
	
	if (g == NULL) return;
	int nbr_nodes = g->nbr_nodes;
	bool condition = from > nbr_nodes || from < 0 || to > nbr_nodes || to < 0;
	if (condition) return;

	if (g->edges[from][to] == 0) g->edges[from][to] = 1;
	if (g->edges[to][from] == 0) g->edges[to][from] = 1;
	
}



void print_graph(Graph *g) {	
	
	for (int i = 0; i < g->nbr_nodes; i++) {
		printf("(%d): ", i);
		for (int j = 0; j < g->nbr_nodes; j++) {
			if (g->edges[i][j] == 1) printf("%d ", j); 
		}
		printf("\n");
	}
	
}



int numIslands(Graph *g) {
	
	
	
}


int main() {
	
	Graph *g = create_graph(4);
	
	add_node_undirected(g, 0, 1);
	add_node_undirected(g, 0, 2);
	add_node_undirected(g, 0, 3);
	add_node_undirected(g, 1, 3);
	add_node_undirected(g, 2, 3);
	
	print_graph(g);
	
	
	
	return 0;
}






















