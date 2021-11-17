#include<bits/stdc++.h>
using namespace std;
#define ll long long
void solve(int t)
{
    ll n,m,o;
    cin>>n;
    if(n%2==0)
    {
        m=n/2;
        o=2;
        while(m%2==0)
        {
            m/=2;
            o*=2;
        }
        cout<<"Case "<<t<<": "<<m<<" "<<o;


    }
    else
        cout<<"Case "<<t<<": Impossible";
}
int main()
{
    int tc,i=0;
    cin>>tc;
    while(tc--)
    {
        solve(++i);
        cout<<endl;
    }
   return 0;
}
