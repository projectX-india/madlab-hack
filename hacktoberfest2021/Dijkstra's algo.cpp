#include <iostream>
#include <climits>
#include <list>
//hello mister

using namespace std;

int findMinVertex(int dist[], bool visited[], int n)
{
    int minVertex = -1;
    for (int i = 1; i <= n; i++)
    {
        if (!visited[i] && (minVertex == -1 || dist[i] < dist[minVertex]))
        {
            minVertex = i;
        }
    }
    return minVertex;
}

void shortest_path(int num_of_nodes, int *arr, int s)
{
    int g[num_of_nodes + 1][num_of_nodes + 1];
    for (int i = 0; i < num_of_nodes; i++)
    {
        for (int j = 0; j < num_of_nodes; j++)
        {
            g[i + 1][j + 1] = *((arr + i * num_of_nodes) + j);
        }
    }
    int dist[num_of_nodes + 1];
    bool visited[num_of_nodes + 1];
    list<int> *path = new list<int>[num_of_nodes + 1];

    for (int i = 1; i <= num_of_nodes; i++)
    {
        dist[i] = INT_MAX;
        visited[i] = false;
    }
    dist[s] = 0;
    path[s].push_back(s);
    for (int i = 1; i <= num_of_nodes; i++)
    {
        int minVertex = findMinVertex(dist, visited, num_of_nodes);
        visited[minVertex] = true;
        for (int j = 1; j <= num_of_nodes; j++)
        {
            if (g[minVertex][j] > 0 && !visited[j])
            {
                int distance = dist[minVertex] + g[minVertex][j];
                if (distance < dist[j])
                {
                    path[j].clear();
                    list<int> l = path[minVertex];
                    while (!l.empty())
                    {
                        int temp = l.front();
                        path[j].push_back(temp);
                        l.pop_front();
                    }
                    path[j].push_back(j);
                    dist[j] = distance;
                }
            }
        }
    }
    for (int i = 1; i <= num_of_nodes; i++)
    {
        cout << i << "\t" << dist[i] << "\t" << s;
        path[i].pop_front();
        while (!path[i].empty())
        {
            cout << "->";
            cout << path[i].front();
            path[i].pop_front();
        }
        cout << endl;
    }
}

int main()
{
    int num_of_nodes, source;
    cin >> num_of_nodes;

    int g[num_of_nodes][num_of_nodes];

    for (int i = 0; i < num_of_nodes; i++)
    {
        for (int j = 0; j < num_of_nodes; j++)
        {
            cin >> g[i][j];
            if (i == j && g[i][j] != 0)
            {
                cout << "Weight of the edge " << i + 1 << " <-> " << j + 1 << " must be 0";
                exit(0);
            }
            if (i != j && g[i][j] == 0)
            {
                cout << "Weight of the edge " << i + 1 << " <-> " << j + 1 << " can not be 0";
                exit(0);
            }
            if (g[i][j] < -1)
            {
                cout << "Weight of the edge " << i + 1 << " <-> " << j + 1 << " can not be negative";
                exit(0);
            }
        }
    }
    cin >> source;
    shortest_path(num_of_nodes, (int *)g, source);
    return 0;
}
