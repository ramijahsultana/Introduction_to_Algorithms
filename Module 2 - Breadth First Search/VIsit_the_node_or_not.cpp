#include<bits/stdc++.h>
using namespace std;

vector<int> adj_mat[1005];
bool vis[1005];

void BFS(int src)
{
    queue<int> q;
    q.push(src);
    vis[src] = true;

    while(!q.empty())
    {
        int par = q.front();
        q.pop();

        for(int child : adj_mat[par])
        {
            if(vis[child] == false)
            {
                q.push(child);
                vis[child] = true;

            }
        }

    }
}
int main()
{
    int n, e;
    cin >> n >> e;

    while(e--)
    {
        int a, b;
        cin >> a >> b;
        adj_mat[a].push_back(b);
        adj_mat[b].push_back(a);
    }

    memset(vis, false, sizeof(vis));
    int src, dst;
    cin >> src >> dst;
    BFS(src);
     
    if(vis[dst])
        cout << "YES" << endl;
    else
        cout << "NO" << endl;
    return 0;
}