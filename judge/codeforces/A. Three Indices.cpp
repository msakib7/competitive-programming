#include<bits/stdc++.h>
using namespace std;
void solve()
{
    int n;
    cin>>n;
    vector<int>v(n);
    v.clear();
    for(int i=0;i<n;i++)
        cin>>v[i];
    int l,r,k;
    for(int i=1;i<n-1;i++)
    {
        if(v[i-1]<v[i]&&v[i]>v[i+1])
        {
            cout<<"YES"<<endl;
            i++;
            printf("%d %d %d\n",i-1,i,i+1);
            return ;
        }
    }
    cout<<"NO"<<endl;
}
int main()
{
    int tc;
    cin>>tc;
    while(tc--)
    {
        solve();
    }
    return 0;
}
