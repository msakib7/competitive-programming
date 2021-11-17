#include<bits/stdc++.h>
using namespace std;
int main()
{
    int cnt=0;
    string stn;
    cin>>stn;
    for(int i=0;i<stn.size();i++)
    {
        if(stn[i]=='4'||stn[i]=='7')
            cnt++;
    }
    if(cnt==4||cnt==7)
        cout<<"YES\n";
    else
        cout<<"NO\n";

   return 0;
}
