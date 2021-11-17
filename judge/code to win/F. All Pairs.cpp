#include<bits/stdc++.h>
using namespace std;
#define ll long long
void solve()
{
    int n,x,a;
    cin>>n>>x;
    vector<int>vec;
    a=n;
    for(int i=0;i<n;i++)
        {
            cin>>a;
            vec.push_back(a);
        }
    sort(vec.begin(),vec.end());
    int ans=0;
    int m=n-1;
    while(!vec.empty())
    {
        int cnt=0;
        int a=vec[m]-x;
        //cout<<vec[m]<<endl;
        for(int i=0;i<m;i++)
            if(vec[i]>=a)
               cnt++;
        ans+=cnt*2;
        m--;
        vec.pop_back();
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
