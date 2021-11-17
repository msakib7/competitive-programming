#include<bits/stdc++.h>
using namespace std;
int const mxn=1e8;
bool isp[mxn+1];
vector<int>prime;
void seive()
{

    int sq=sqrt(mxn);
    for(int i=3;i<=sq;i+=2)
    {
        if(isp[i]==0)
        {
            for(int j=i*i;j<mxn;j+=i)
                isp[j]=1;
        }
    }
    prime.push_back(2);
    for(int i=3;i<mxn;i+=2)
        if(isp[i]==0)
        prime.push_back(i);
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
        int ans=prime[n-1];
        cout<<ans<<endl;
    }
   return 0;
}
