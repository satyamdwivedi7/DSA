#include <stdio.h>
#include <stdlib.h>

#define MAX_NODES 100

// Depth-First Search algorithm
void dfs(int adj_matrix[MAX_NODES][MAX_NODES], int visited[], int curr_node, int num_nodes) {
    int i;
    visited[curr_node] = 1;
    printf("%d ", curr_node);
    for (i = 0; i < num_nodes; i++) {
        if (adj_matrix[curr_node][i] == 1 && visited[i] == 0) {
            dfs(adj_matrix, visited, i, num_nodes);
        }
    }
}

int main() {
    int num_nodes, adj_matrix[MAX_NODES][MAX_NODES], visited[MAX_NODES] = {0}, start_node, i, j;
    printf("Enter the number of nodes in the graph: ");
    scanf("%d", &num_nodes);
    printf("Enter the adjacency matrix of the graph:\n");
    for (i = 0; i < num_nodes; i++) {
        for (j = 0; j < num_nodes; j++) {
            scanf("%d", &adj_matrix[i][j]);
        }
    }
    printf("Enter the start node for DFS traversal: ");
    scanf("%d", &start_node);
    printf("DFS traversal starting from node %d: ", start_node);
    dfs(adj_matrix, visited, start_node, num_nodes);
    printf("\n");
    return 0;
}