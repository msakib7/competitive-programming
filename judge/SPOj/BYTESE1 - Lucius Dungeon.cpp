#include<bits/stdc++.h>
using namespace std;
vector<int>v[100];
int a,b,t;
void input()
{
    int n,m;
    cin>>n>>m;
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<m;j++)
        {
            int x;cin>>x;
            v[i].push_back(x);
        }
    }
    cin>>a>>b>>t;
}
int main()
{
    int tc;cin>>tc;
    while(tc--)
    {
        input();

    }
   return 0;
}
