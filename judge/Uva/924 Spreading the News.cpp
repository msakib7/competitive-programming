#include<bits/stdc++.h>
using namespace std;
int const mxn=2501;
vector<int>v[mxn];
int main()
{
    int e;
    cin>>e;
    for(int i=0;i<e;i++)
    {
        int n;
        cin>>n;
        while(n--)
        {
            int x;cin>>x;
            v[i].push_back(x);
        }
    }
    int tc;
    cin>>tc;
    while(tc--)
    {
        int m;cin>>m;
        bfs(m);
    }
}
