#include <bits/stdc++.h>
using namespace std;
int val[1005], weight[1005];

int knapsack(int i, int max_weight)
{

    if (i < 0 || max_weight <= 0)
        return 0;
    if (weight[i] <= max_weight)
    {
        // 2 options , 1. take the item 2. don't take the item
        int op1 = knapsack(i - 1, max_weight - weight[i]) + val[i];
        int op2 = knapsack(i - 1, max_weight);
        return max(op1, op2);
    }
    else
    {
        // only option is to not take the item
        return knapsack(i - 1, max_weight);
    }
}

int main()
{
    int n, max_weight;
    cin >> n;

    for (int i = 0; i < n; i++)
        cin >> val[i];

    for (int i = 0; i < n; i++)
        cin >> weight[i];
    cin >> max_weight;
    cout << knapsack(n - 1, max_weight) << endl;
    return 0;
}