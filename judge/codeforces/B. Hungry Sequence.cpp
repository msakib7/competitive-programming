#include<bits/stdc++.h>
using namespace std;
int const mxn=1e7;
vector<int>prime;
bool isp[mxn];
void seive()
{
    int sq=sqrt(mxn);

    for(int i=3;i<=sq;i+=2)
    {
        for(int j=i*i;j<mxn;j+=i)
            isp[j]=1;
    }
    prime.push_back(2);
    for(int i=3;i<mxn;i+=2)
        if(isp[i]==0)
        prime.push_back(i);
}
int main()
{
    int n;
    cin>>n;
    seive();
    for(int i=0;i<n;i++)
    {
        cout<<prime[i]<<" ";
    }
    cout<<endl;
   return 0;
}
