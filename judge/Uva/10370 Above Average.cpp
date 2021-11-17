#include<bits/stdc++.h>
using namespace std;
void solve()
{
    int n,cnt=0,sum=0;
    cin>>n;
    vector<int>v;
    for(int i=0;i<n;i++)
    {
        int x;
        cin>>x;
        sum+=x;
        v.push_back(x);
    }
    int avg=sum/n;
    for(int i=0;i<n;i++)
    {
        if(v[i]>avg)
            cnt++;
    }
    double ans;
    ans=(double)cnt*100/n;
    printf("%.3lf%%",ans);
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
