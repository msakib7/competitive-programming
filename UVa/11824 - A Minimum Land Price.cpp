#include<bits/stdc++.h>
using namespace std;
bool cmp(int a,int b)
{
    return a>b;
}
void solve()
{
    vector<int>v;
    int n;
    while(scanf("%d",&n)!=0)
    {
        if(!n)
            break;
        v.push_back(n);
    }
    sort(v.begin(),v.end(),cmp);

    int p=1;
    double ans=0.0;
    for(int i=0;i<v.size();i++)
    {
        ans+=2*pow(v[i],p++);
    }
    if(ans>5000000)
        cout<<"Too expensive";
    else
        cout<<ans;
}
int main()
{
    int tc;
    cin>>tc;
    while(tc--)
    {
        solve();
        cout<<endl;
    }
   return 0;
}
