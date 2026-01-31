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



int num_islands(Graph *g) {
	
	int count = 0;
	
	// Loop through all cells
	for (int i = 0; i < g->nbr_nodes; i++) {
		for (int j = 0; j < g->nbr_nodes; j++) {
			// Find land ('1')
			if (g->edges[i][j] == 1) {
			
				// Islands found & Make it visited 
				count++;
				g->edges[i][j] = -1;
				
				// Look in all four directions (up, down, left, right)
				int left = j - 1;
				int right = j + 1;
				int top = i - 1;
				int down = i + 1;
				
				// Check The Boundaries --> invalid direction
				if (top >= 0 && g->edges[top][j] == 1) {
                    g->edges[top][j] = -1;
                }
                if (down < g->nbr_nodes && g->edges[down][j] == 1) {
                    g->edges[down][j] = -1;
                }
                if (left >= 0 && g->edges[i][left] == 1) {
                    g->edges[i][left] = -1;
                }
                if (right < g->nbr_nodes && g->edges[i][right] == 1) {
                    g->edges[i][right] = -1;
                }
				
			}
		}
	}
	return count;
	
}


int main() {
	
	Graph *g = create_graph(5);
	
	add_node_directed(g, 0, 0);
	add_node_directed(g, 0, 1);
	add_node_directed(g, 0, 4);
	add_node_directed(g, 1, 0);
	add_node_directed(g, 1, 1);
	add_node_directed(g, 1, 4);
	add_node_directed(g, 2, 2);
	add_node_directed(g, 3, 3);
	add_node_directed(g, 3, 4);
	
	
	print_graph(g);
	
	printf("Number Of Islands Is : %d\n", num_islands(g));
	
	
	return 0;
}






















