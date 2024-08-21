#include <iostream>
#include <unordered_map>
#include <set>
#include <vector>
#include <queue>

using namespace std;

void bfs(unordered_map<int, set<int>> &adjlist, unordered_map<int, bool> &visited, vector<int> &ans, int node)
{
    queue<int> q;
    q.push(node);
    visited[node] = 1;
    while (!q.empty())
    {
        int frontnode = q.front();
        q.pop();
        ans.push_back(frontnode);
        for (auto i : adjlist[frontnode])
        {
            if (!visited[i])
            {
                q.push(i);
                visited[i] = 1;
            }
        }
    }
}
int main()
{
    unordered_map<int, set<int>> adjlist;
    cout << "Enter the number of nodes" << endl;
    int n;
    cin >> n;
    cout << "Enter the number of edges" << endl;
    int m;
    cin >> m;
    cout << "Enter the connected nodes" << endl;
    for (int i = 0; i < m; i++)
    {
        int u, v;
        cin >> u >> v;
        adjlist[u].insert(v);
        adjlist[v].insert(u);
    }
    unordered_map<int, bool> visited;
    vector<int> ans;
    for (int i = 0; i < n; i++)
    {
        if (!visited[0])
        {
            bfs(adjlist, visited, ans, i);
        }
    }
    for (auto i : ans)
    {
        cout << i << " ";
    }
    cout << endl;
    return 0;
}