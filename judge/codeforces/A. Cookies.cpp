#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin>>n;
    vector<int>v(n);
    int sum=0,ans=0;
    for(int i=0;i<n;i++)
        {
            cin>>v[i];
            sum+=v[i];
        }
    for(int i=0;i<n;i++)
    {
        if((sum-v[i])%2==0)
            ans++;
    }
    cout<<ans<<endl;

  return 0;
}
