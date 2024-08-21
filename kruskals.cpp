#include <iostream>
#include <vector>

using namespace std;

struct Edge
{
    int src, dest, weight;
};

bool compareEdges(const Edge &a, const Edge &b)
{
    return a.weight < b.weight;
}

void bubbleSort(vector<Edge> &edges)
{
    int n = edges.size();
    for (int i = 0; i < n - 1; i++)
    {
        for (int j = 0; j < n - i - 1; j++)
        {
            if (compareEdges(edges[j], edges[j + 1]))
            {
                swap(edges[j], edges[j + 1]);
            }
        }
    }
}

class DisjointSet
{
private:
    vector<int> parent, rank;

public:
    DisjointSet(int n)
    {
        parent.resize(n);
        rank.resize(n, 0);
        for (int i = 0; i < n; i++)
        {
            parent[i] = i;
        }
    }

    int find(int x)
    {
        if (parent[x] != x)
        {
            parent[x] = find(parent[x]);
        }
        return parent[x];
    }

    void unionSets(int x, int y)
    {
        int rootX = find(x);
        int rootY = find(y);
        if (rootX != rootY)
        {
            if (rank[rootX] < rank[rootY])
            {
                parent[rootX] = rootY;
            }
            else if (rank[rootX] > rank[rootY])
            {
                parent[rootY] = rootX;
            }
            else
            {
                parent[rootX] = rootY;
                rank[rootY]++;
            }
        }
    }
};

void kruskals(vector<Edge> &edges, int n)
{
    vector<Edge> result;
    DisjointSet ds(n);

    int edgeCount = 0;
    int i = 0;
    while (edgeCount < n - 1 && i < edges.size())
    {
        Edge currEdge = edges[i++];

        int srcParent = ds.find(currEdge.src);
        int destParent = ds.find(currEdge.dest);

        if (srcParent != destParent)
        {
            result.push_back(currEdge);
            ds.unionSets(srcParent, destParent);
            edgeCount++;
        }
    }

    cout << "Minimum Spanning Tree Edges:" << endl;
    for (const Edge &edge : result)
    {
        cout << "Edge: " << edge.src << " - " << edge.dest << " with weight: " << edge.weight << endl;
    }
}

int main()
{
    int n;
    cout << "Enter the number of vertices in the graph: ";
    cin >> n;

    int m;
    cout << "Enter the number of edges in the graph: ";
    cin >> m;

    vector<Edge> edges(m);

    cout << "Enter the source, destination, and weight of each edge:" << endl;
    for (int i = 0; i < m; i++)
    {
        cin >> edges[i].src >> edges[i].dest >> edges[i].weight;
    }

    // Sort edges in non-decreasing order of weights
    bubbleSort(edges);

    kruskals(edges, n);

    return 0;
}
