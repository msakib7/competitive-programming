#include<bits/stdc++.h>
using namespace std;
int const mxn=10005;
bool isp[mxn];
vector<int>prime;
vector<int>ans;
void seive()
{
    int sq=sqrt(mxn);
    for(int i=3;i<=sq;i+=2)
    {
        for(int j=i*i;j<mxn;j+=i)
        {
            if(isp[j]==0)
            {
                isp[j]=1;
            }
        }
    }
    prime.push_back(2);
    for(int i=3;i<=mxn;i+=2)
    {
        if(isp[i]==0)
        {
            prime.push_back(i);
        }
    }
    for(int i=30;i<mxn;i++)
    {
        int cnt=0;
        for(int j=0;j<prime.size();j++)
        {
            if(i%prime[j]==0)
                cnt++;
            if(cnt==3)
            {
                ans.push_back(i);
                break;
            }
        }
        if(ans.size()>1000)
        {
            break;
        }
    }
}
int main()
{
    seive();
    int tc;
    cin>>tc;
    while(tc--)
    {
        int n;
        cin>>n;
        cout<<ans[n-1]<<endl;
    }
   return 0;
}
