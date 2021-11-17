#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,x;
    cin >> n;
    vector<int>a;
    for(int i=0;i<n;i++)
    {
        cin>>x;
        a.push_back(x);
    }
    int ans=0,l=1;
    for (int i=1;i<n;++i)
    {
        if (a[i]>=a[i-1])
            ++l;
        else
        {
            ans=max(ans,l);
            l=1;
        }
    }
    ans=max(ans,l);
    cout<<ans<<endl;

  return 0;
}
