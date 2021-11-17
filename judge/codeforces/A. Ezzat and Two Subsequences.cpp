#include<bits/stdc++.h>
using namespace std;
#define ll long long
int main()
{
    ll t;
    cin>>t;
    while(t--)
    {
        ll n,sum=0,a;
        cin>>n;
        vector<ll>v;
        for(ll i=0;i<n;i++)
        {
            cin>>a;
            v.push_back(a);
        }
        sort(v.begin(),v.end());
        for(ll i=v.size()-2;i>=0;i--)
        {
            sum+=v[i];
        }
        double k=(double)sum/(v.size()-1);
        k+=(double)v[n-1];
        cout<<setprecision(15)<<k<<endl;
    }
    return 0;
}
