#include<bits/stdc++.h>
using namespace std;
const int mxn=1e7;
bool isp[mxn+1];
vector<int>prime;
void seive()
{
    memset(isp,0,sizeof(isp));
    isp[0]=isp[1]=1;
    int sq=sqrt(mxn);
    for(int i=4;i<mxn;i+=2)
    {
        isp[i]=1;
    }
    for(int i=3;i<=sq;i+=2)
    {
        if(isp[i]==0)
        {
            for(int j=i*i;j<=mxn;j+=i)
                isp[j]=1;
        }
    }
    prime.push_back(2);
    for(int i=3;i<mxn;i+=2)
    {
        if(isp[i]==0)
            prime.push_back(i);
    }
}
int main()
{
    int n;
    cin>>n;
    seive();
    int sq=sqrt(n);
    cout<<"Factorization of "<<n<<" : ";
    //cout<<isp[n]<<endl;
    for(int i=0;i<prime.size()&&prime[i]<=sq;i++)
    {
        if(isp[n]==0) break;
        if(n%prime[i]==0)
        {
            while(n%prime[i]==0)
            {
                n/=prime[i];
                cout<<prime[i]<<" ";
            }
        }
    }
    if(n!=1)
        cout<<n;

  return 0;
}
