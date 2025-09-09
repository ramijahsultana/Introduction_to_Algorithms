#include<bits/stdc++.h>
using namespace std;

void recurson(int n)
{
    if(n>5)
       return;
    cout << n << " " << endl;
    recurson(n+1);
    cout << n << " ";
    
}

int main()
{
    recurson(1);
    
    return 0;
}