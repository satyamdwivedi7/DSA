#include <iostream>
#include <climits>
#include <vector>

using namespace std;

int findMinVertex(const vector<int> &weights, const vector<bool> &visited)
{
    int minVertex = -1;
    int minWeight = INT_MAX;

    for (int i = 0; i < weights.size(); i++)
    {
        if (!visited[i] && weights[i] < minWeight)
        {
            minVertex = i;
            minWeight = weights[i];
        }
    }

    return minVertex;
}

void prims(const vector<vector<int>> &graph)
{
    int n = graph.size();

    vector<int> parent(n, -1);
    vector<int> weights(n, INT_MAX);
    vector<bool> visited(n, false);

    parent[0] = -1;
    weights[0] = 0;

    for (int i = 0; i < n - 1; i++)
    {
        int minVertex = findMinVertex(weights, visited);
        visited[minVertex] = true;

        for (int j = 0; j < n; j++)
        {
            if (graph[minVertex][j] != 0 && !visited[j] && graph[minVertex][j] < weights[j])
            {
                parent[j] = minVertex;
                weights[j] = graph[minVertex][j];
            }
        }
    }

    cout << "Minimum Spanning Tree Edges:" << endl;
    for (int i = 1; i < n; i++)
    {
        cout << "Edge: " << parent[i] << " - " << i << " with weight: " << weights[i] << endl;
    }
}

int main()
{
    int n;
    cout << "Enter the number of vertices in the graph: ";
    cin >> n;

    vector<vector<int>> graph(n, vector<int>(n, 0));

    cout << "Enter the adjacency matrix:" << endl;
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            cin >> graph[i][j];
        }
    }

    prims(graph);

    return 0;
}
