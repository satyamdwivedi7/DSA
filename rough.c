#include <stdio.h>
#include <stdlib.h>

#define MAX_NODES 100

// Queue implementation
int front = -1, rear = -1;
int queue[MAX_NODES];

void enqueue(int item) {
    if (rear == MAX_NODES - 1) {
        printf("Queue Overflow!\n");
        return;
    }
    if (front == -1) {
        front = 0;
    }
    rear++;
    queue[rear] = item;
}

int dequeue() {
    if (front == -1 || front > rear) {
        printf("Queue Underflow!\n");
        return -1;
    }
    int item = queue[front];
    front++;
    return item;
}

int is_empty() {
    if (front == -1 || front > rear) {
        return 1;
    }
    return 0;
}

// Breadth-First Search algorithm
void bfs(int adj_matrix[MAX_NODES][MAX_NODES], int visited[], int start_node, int num_nodes) {
    int i, curr_node;
    visited[start_node] = 1;
    enqueue(start_node);
    while (!is_empty()) {
        curr_node = dequeue();
        printf("%d ", curr_node);
        for (i = 0; i < num_nodes; i++) {
            if (adj_matrix[curr_node][i] == 1 && visited[i] == 0) {
                visited[i] = 1;
                enqueue(i);
            }
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
    printf("Enter the start node for BFS traversal: ");
    scanf("%d", &start_node);
    printf("BFS traversal starting from node %d: ", start_node);
    bfs(adj_matrix, visited, start_node, num_nodes);
    printf("\n");
    return 0;
}