#include <iostream>
#include <vector>
#include <queue>
#include <limits>

using namespace std;

typedef pair<int, int> pii;

vector<int> dijkstra(vector<vector<pii>> &graph, int start)
{
    int n = graph.size();
    vector<int> dist(n, numeric_limits<int>::max());
    dist[start] = 0;

    priority_queue<pii, vector<pii>, greater<pii>> pq;
    pq.push(make_pair(0, start));

    while (!pq.empty())
    {
        int u = pq.top().second;
        int d = pq.top().first;
        pq.pop();

        if (d > dist[u])
        {
            continue;
        }

        for (auto neighbor : graph[u])
        {
            int v = neighbor.first;
            int weight = neighbor.second;

            if (dist[u] + weight < dist[v])
            {
                dist[v] = dist[u] + weight;
                pq.push(make_pair(dist[v], v));
            }
        }
    }

    return dist;
}

int main()
{
    int n, m;
    cout << "Enter the number of vertices in the graph: ";
    cin >> n;
    cout << "Enter the number of edges in the graph: ";
    cin >> m;

    vector<vector<pii>> graph(n);

    cout << "Enter the source, destination, and weight of each edge:" << endl;
    for (int i = 0; i < m; i++)
    {
        int src, dest, weight;
        cin >> src >> dest >> weight;
        graph[src].push_back(make_pair(dest, weight));
    }

    int startVertex;
    cout << "Enter the starting vertex: ";
    cin >> startVertex;

    vector<int> distances = dijkstra(graph, startVertex);

    cout << "Shortest distances from the starting vertex:" << endl;
    for (int i = 0; i < n; i++)
    {
        cout << distances[i] << " ";
    }
    cout << endl;

    return 0;
}
