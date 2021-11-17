#include<bits/stdc++.h>
using namespace std;
const int n=5;
vector<int>adj[n+2];
int main()
{
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<n;j++)
        {
            int x;cin>>x;
            adj[i].push_back(x);
        }
    }
}
