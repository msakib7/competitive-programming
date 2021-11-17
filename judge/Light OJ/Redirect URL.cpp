#include<bits/stdc++.h>
using namespace std;
int main()
{
    int tc;
    cin>>tc;
    for(int i=1;i<=tc;i++)
    {
        string stn;
        cin>>stn;
        if(stn[4]!='s')
            stn.insert(4,"s");
        cout<<"Case "<<i<<": "<<stn<<endl;
    }
   return 0;
}
