#include <iostream>
using namespace std;

class Stack
{
    int arr[20];
    int top;

public:
    Stack()
    {
        top = -1;
    }
    void push(int data)
    {
        top++;
        arr[top] = data;
    }
    int pop()
    {
        if (top == -1)
        {
            cout << "Stack Empty" << endl;
            return -1;
        }
        return arr[top--];
    }
    bool isPresent(int data)
    {
        for (int i = 0; i <= top; i++)
        {
            // cout << "checking " << arr[i] << " == " << data << endl;
            if (arr[i] == data)
            {
                // cout << "returned true" << endl;
                return true;
            }
        }
        // cout << "returned false" << endl;
        return false;
    }
    bool isEmpty()
    {
        return top == -1 ? true : false;
    }
};

int main()
{
    int v;
    cout << "No of vertices: ";
    cin >> v;
    int adj[v][v];
    for (int i = 0; i < v; i++)
        for (int j = 0; j < v; j++)
            adj[i][j] = 0;
    for (int i = 0; i < v; i++)
    {
        for (int j = 0; j < v; j++)
        {
            if (i == j)
                continue;
            cout << "(" << i << ","
                 << j
                 << "): ";
            cin >> adj[i][j];
        }
    }
    Stack exploration;
    bool visited[v];
    for (int i = 0; i < v; i++)
        visited[v] = false;
    exploration.push(0);
    while (!exploration.isEmpty())
    {
        int visiting = exploration.pop();
        // cout << "Visitng: " << visiting << endl;
        visited[visiting] = true;
        for (int i = v - 1; i >= 0; i--)
        {
            if (adj[visiting][i] == 1 and !visited[i] and !exploration.isPresent(i))
            {
                // cout << "Pushed: " << i << endl;
                exploration.push(i);
            }
        }
        cout << visiting;
        if (!exploration.isEmpty())
            cout << " -> ";
    }
    cout << endl;
}