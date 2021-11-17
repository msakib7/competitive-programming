#include<bits/stdc++.h>
using namespace std;
int const mxn=100005;
bool isp[mxn];
vector<int>f;
void seive()
{
    int sq=sqrt(mxn);
    f.push_back(0);
    f.push_back(1);
    f.push_back(2);
    f.push_back(0);
    for(int i=2;i<=sq;i++)
    {
        for(int j=i*i;j<mxn;j+=2)
        {
            f[j]=f[i]+f[i];
        }
    }
}
int main()
{
    seive();
    int n;
    cin>>n;
    cout<<f[n]<<endl;
   return 0;
}
