#include<bits/stdc++.h>
using namespace std;
int isp[26];
int main()
{
    int tc;
    cin>>tc;
    while(tc--)
    {
        string stn;
        cin>>stn;
        for(int i=0;i<26;i++)
            isp[i]=0;
        for(int i=0;i<stn.size();i++)
        {
            isp[stn[i]-'a']++;
        }
        int cnt1=0,cnt2=0;
        for(int i=0;i<26;i++)
            {
                if(isp[i]>1)
                    cnt2++;
                if(isp[i]==1)
                    cnt1++;
            }
       int ans=0;
       ans=cnt2+(cnt1/2);
       cout<<ans<<endl;
    }
  return 0;
}
