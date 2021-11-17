#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,x,sum=0;
    cin>>n;
    vector<int>v;
    for(int i=0;i<12;i++)
    {
        int x;
        cin>>x;
        v.push_back(x);
        sum+=x;
    }
    if(sum<n)
    {
        cout<<"-1"<<endl;
        return 0;
    }
    sort(v.begin(),v.end());
    int ans=0;
    for(int i=11;i>=0;i--)
    {
        if(n<=0)
            break;
        ans++;
        n-=v[i];
    }
    cout<<ans<<endl;

  return 0;
}
