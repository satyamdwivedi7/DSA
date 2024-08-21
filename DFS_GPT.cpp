#include <iostream>
#include <stack>

using namespace std;

const int MAX_NODES = 100;

void dfs(int start, bool visited[MAX_NODES][MAX_NODES], int graph[MAX_NODES][MAX_NODES], int numNodes)
{
    stack<int> stk;
    stk.push(start);
    visited[start][start] = true;

    while (!stk.empty())
    {
        int node = stk.top();
        stk.pop();
        cout << node << " ";

        for (int i = 0; i < numNodes; ++i)
        {
            if (graph[node][i] == 1 && !visited[start][i])
            {
                stk.push(i);
                visited[start][i] = true;
            }
        }
    }
}

int main()
{
    int n, e;
    cout << "Enter the number of nodes and edges: ";
    cin >> n >> e;

    int graph[MAX_NODES][MAX_NODES] = {0};
    bool visited[MAX_NODES][MAX_NODES] = {false};

    cout << "Enter the edges (node1 node2):" << endl;
    for (int i = 0; i < e; ++i)
    {
        int node1, node2;
        cin >> node1 >> node2;
        graph[node1][node2] = 1;
        graph[node2][node1] = 1;
    }

    int start;
    cout << "Enter the starting node: ";
    cin >> start;

    cout << "DFS traversal: ";
    dfs(start, visited, graph, n);

    return 0;
}
