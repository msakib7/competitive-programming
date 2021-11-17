#include<bits/stdc++.h>
using namespace std;
int main()
{
    string stn;
    int cnt=0,mx=-1,n;
    cin>>stn;
    n=stn.size()-1;
    for(int i=0;i<n+1;i++)
    {
        if(stn[i]==stn[i-1])
        {
            cnt++;
        }
        else
        {
            cnt=1;
        }
        mx=max(cnt,mx);
    }
    cout<<mx<<endl;

   return 0;
}
