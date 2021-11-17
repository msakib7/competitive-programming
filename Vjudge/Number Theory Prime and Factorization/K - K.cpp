#include<bits/stdc++.h>
using namespace std;
int const mxn=1e3+7;
bool isp[mxn];
bool psp[3007];
vector<int>prime;
void seive()
{
    int sq=sqrt(mxn);
    for(int i=3;i<=sq;i+=2)
    {
        for(int j=i*i;j<=mxn;j+=i)
        {
            isp[j]=1;
        }
    }
    prime.push_back(2);
    for(int i=3;i<=mxn;i+=2)
    {
        if(isp[i]==1)
            prime.push_back(i);
    }
    for(int i=0;i<prime.size();i++)
    {
        for(int j=i;j<prime.size();j++)
        {
            if(prime[i]*prime[j]>3000)
                break;
            if(psp[prime[i]*prime[j]]==0)
            psp[prime[i]*prime[j]]=1;
            else
                psp[prime[i]*prime[j]]=1;
        }
    }
}
int main()
{
    int n,ans=0;
    cin>>n;
    for(int i=5;i<=n;i++)
    {
        cout<<psp[i]<<" ";
        if(psp[i]==1)
            ans++;
    }
    cout<<ans<<endl;

  return 0;
}
