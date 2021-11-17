#include<bits/stdc++.h>
using namespace std;
int main()
{
    string stn;
    bool flg=false;
    cin>>stn;
    for(int i=0;i<stn.size();i++)
    {
       if(stn[i]=='W'&&stn[i+1]=='U'&&stn[i+2]=='B')
       {
           if(flg)
            cout<<" ";
           i=i+2;
       }
       else
        {
            cout<<stn[i];
            flg=true;
        }
    }
   return 0;
}
