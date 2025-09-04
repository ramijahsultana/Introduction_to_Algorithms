#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n, e;
    cin >> n >> e;
    vector<int, pair<int, int>> egde_list;
    while(e--)
    {
        int a, b, c;
        cin >> a >> b >> c;
        egde_list.push_back({a,b,c});
    }
    return 0;
}