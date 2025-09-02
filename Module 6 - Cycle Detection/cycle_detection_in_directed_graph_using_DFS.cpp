#include <bits/stdc++.h>
using namespace std;
bool vis[105];
vector<int> adj_list[105];
bool pathvis[105];
bool cycle = false;

void dfs(int src)
{
    vis[src] = true;
    pathvis[src] = true;
    for (int child : adj_list[src])
    {
        if (vis[child] && pathvis[child])
            cycle = true;

        if (!vis[child])
        {
            dfs(child);
        }
    }
    pathvis[src] = false;
}

int main()
{
    int n, e;
    cin >> n >> e;
    while (e--)
    {
        int a, b;
        cin >> a >> b;
        adj_list[a].push_back(b);
    }

    memset(vis, false, sizeof(vis));
    memset(pathvis, false, sizeof(pathvis));

    for (int i = 0; i < n; i++)
    {
        if (!vis[i])
            dfs(i);
    }

    if (cycle)
        cout << "Cycle Detected" << endl;
    else
        cout << "Cycle Not Detected" << endl;
    return 0;
}