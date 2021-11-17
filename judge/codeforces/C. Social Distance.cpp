#include<bits/stdc++.h>
using namespace std;
int main()
{
    int tc;
    cin>>tc;
    while(tc--)
    {
        int n,m,k;
        cin>>n>>k;
        string stn;
        cin>>stn;
        int cnt1=0,cnt2=0;
        for(int i=1;i<=n;i+=(k+1))
        {
            cnt2++;
        }
        for(int i=0;i<stn.size();i++)
        {
            if(stn[i]=='1')
                cnt1++;
        }
        cout<<cnt2-cnt1<<endl;
    }

  return 0;
}
