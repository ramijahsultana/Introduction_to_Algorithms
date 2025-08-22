#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n, e;
    cin >> n >> e;
    vector<int> adj_mat[n];
    while(e--)
    {
        int a, b;
        cin >> a >> b;
        adj_mat[a].push_back(b);
        adj_mat[b].push_back(a);
    }

    for(int i=0; i<n; i++)
    {
        cout << i << " -> ";
        for(int x : adj_mat[i])
        {
            cout << x << " ";
        }
        cout << endl;
    }
    return 0;
}