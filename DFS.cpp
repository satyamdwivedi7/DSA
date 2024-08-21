#include <iostream>
#include <stack>
using namespace std;

bool isPresent(stack<int> &s, int a)
{
    stack<int> clone = s;
    while (!clone.empty())
    {
        if (clone.top() == a)
        {
            return true;
        }
        clone.pop();
    }
    return false;
}

void dfs(int **graph, bool *visited, int start, int n)
{
    stack<int> s;
    s.push(start);

    while (!s.empty())
    {
        int visiting = s.top();
        s.pop();

        if (visited[visiting])
        {
            continue;
        }

        cout << "Visiting: " << visiting << endl;
        visited[visiting] = true;

        for (int i = n - 1; i >= 0; i--)
        {
            if (graph[visiting][i] == 1 && !visited[i] && !isPresent(s, i))
            {
                s.push(i);
                cout << "Pushed: " << i << endl;
            }
        }

        cout << visiting;

        if (!s.empty())
        {
            cout << " -> ";
        }
    }
}

int main()
{
    int n;
    cout << "Enter the number of vertices in the graph: ";
    cin >> n;

    int **graph = new int *[n];
    for (int i = 0; i < n; i++)
    {
        graph[i] = new int[n];
    }

    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            if (i != j)
            {
                cout << "(" << i << ", " << j << ") = ";
                cin >> graph[i][j];
            }
        }
    }

    bool *visited = new bool[n];
    for (int i = 0; i < n; i++)
    {
        visited[i] = false;
    }

    int startNode;
    cout << "Enter the starting node for DFS: ";
    cin >> startNode;

    dfs(graph, visited, startNode, n);

    cout << endl;

    for (int i = 0; i < n; i++)
    {
        delete[] graph[i];
    }
    delete[] graph;
    delete[] visited;

    return 0;
}
