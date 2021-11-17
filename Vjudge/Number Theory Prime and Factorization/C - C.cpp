#include<bits/stdc++.h>
using namespace std;
int const mxn=1e8;
bool isp[mxn+1];
vector<int>prime;
int main()
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
    int cnt=1;
    for(int i=3;i<mxn;i+=2)
    {
        if(isp[i]==0)
        {
            cnt++;
            if(cnt%100==1)
                prime.push_back(i);
        }
    }

    for(int i=0;i<prime.size();i++)
    cout<<prime[i]<<endl;

  return 0;
}
