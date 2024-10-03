#include <stdio.h>



typedef struct Graph {
	int nbr_nodes;
	char **edges;
} Graph;


Graph create_graph(Graph **g, int nbr_nodes);
void add_node(Graph **g, int src, int dest);
void print_graph(Graph *g);




int main() {
	
	
	
	return 0;
}






