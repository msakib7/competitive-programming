#include<bits/stdc++.h>
using namespace std;
int main()
{
    int tc;
    cin>>tc;
    string stn;
    while(tc--)
    {
        cin>>stn;
        int len=stn.size();
        int ans=-1,cnt=0;
        for(int i=0;i<len;i++)
        {
            if(stn[i]=='L')
            {
                cnt++;
            }
            else
            {
                cnt=0;
            }
            ans=max(ans,cnt);
        }
        ans++;
        cout<<ans<<endl;
    }
   return 0;
}
