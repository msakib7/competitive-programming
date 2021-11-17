#include<bits/stdc++.h>
using namespace std;
int main()
{
    int tc;
    cin>>tc;
    while(tc--)
    {
        int n;
        cin>>n;
        vector<int>v,ans;
        for(int i=0;i<n;i++)
        {
            int x;cin>>x;
            v.push_back(x);
        }
        sort(v.begin(),v.end());
        int m=n/2;
        int i=m-1;
        int j=m;
        int flg=1;
        ans.push_back(v[j]);
        ans.push_back(v[i]);
        i--;
        j++;
        while(i>=0||j<n)
        {
            if(flg==1)
            {
                flg=2;
                ans.push_back(v[j]);
                j++;
            }
            else
            {
                flg=1;
                ans.push_back(v[i]);
                i--;
            }
        }
        for(int i=0;i<n;i++)
            cout<<ans[i]<<" ";
        cout<<endl;
    }
  return 0;

}
