#include<bits/stdc++.h>
using namespace std;
int main()
{
    int up=0,lo=0;
    string stn;
    cin>>stn;
    for(int i=0;i<stn.size();i++)
    {
        if(stn[i]<='Z'&&stn[i]>='A')
            up++;
        else
            lo++;
    }
    if(up>lo)
    {
        for(int i=0;i<stn.size();i++)
        {
            if(stn[i]<='z'&&stn[i]>='a')
                stn[i]-=32;
        }
    }
    else
    {
        for(int i=0;i<stn.size();i++)
        {
            if(stn[i]<='Z'&&stn[i]>='A')
                stn[i]+=32;
        }
    }
    cout<<stn<<endl;

  return 0;
}
