#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,k,ans=0;
    cin>>n>>k;
    vector<int>v(n);
    for(int i=0;i<n;i++)
    {
        cin>>v[i];
    }
    sort(v.begin(),v.end());
    int i=0;
    int j=n-1;
    while(i<=j)
    {
        if((v[i]+v[j])<=k)
        {
            i++;
            j--;
            ans++;
        }
        else
        {
            j--;
            ans++;
        }
    }
    cout<<ans<<endl;

  return 0;
}
