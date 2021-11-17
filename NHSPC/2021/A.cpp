#include<bits/stdc++.h>
using namespace std;
void solve()
{
    int x,y;
    string v;
    cin>>x>>y;
    cin>>v;
    for(int i=0;i<v.size();i+=2)
    {
        int a=v[i+1]-'0';
        if(v[i]=='W')
            x-=a;
        if(v[i]=='E')
            x+=a;
        if(v[i]=='S')
            y-=a;
        if(v[i]=='N')
            y+=a;
    }
    cout<<x<<" "<<y;
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
