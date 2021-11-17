#include<bits/stdc++.h>
using namespace std;
#define pb push_back
#define up upper_bound
#define lp lower_bound
#define ll long long
void solve()
{
    ll n,x;
    cin>>n>>x;
    vector<ll>v;
    for(int i=0;i<n;i++)
    {
        int a;
        cin>>a;
        v.pb(a);
    }
    sort(v.begin(),v.end());
    ll ans=0,m;
    m=n-1;
    while(m>=0)
    {
        int a;
        int lo=lp(v.begin(),v.end(),v[m]-x)-v.begin();
        int hi=up(v.begin(),v.end(),v[m]+x)-v.begin();
        //cout<<hi<< " "<<lo<<endl;
        ans+=hi-lo-1;
        m--;
        //v.pop_back();

    }
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

/*
intput:

2
6 10
1 3 4 4 6 9
10 4
11 6 76 49 28 20 57 152 5 32

*/
