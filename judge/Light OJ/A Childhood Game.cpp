#include<bits/stdc++.h>
using namespace std;
#define ll long long
void solve(int t)
{
    ll n;
    string name;
    cin>>n>>name;
    cout<<"Case "<<t<<": ";
    if(name=="Alice")
    {
        if(n%3==1)
            cout<<"Bob";
        else
            cout<<"Alice";
    }
    else
    {
        if(n%3!=0)
            cout<<"Bob";
        else
            cout<<"Alice";
    }
}
int main()
{
    int tc;
    cin>>tc;
    for(int i=1;i<=tc;i++)
    {
        solve(i);
        cout<<endl;
    }
   return 0;
}
/*
3
1 Alice
2 Alice
3 Bob
*/
