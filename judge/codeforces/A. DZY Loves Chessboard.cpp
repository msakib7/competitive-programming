#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,m;
    cin>>n>>m;
    string stn[n+5];
    for(int i=0;i<n;i++)
        cin>>stn[i];
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<stn[i].size();j++)
        {
            if(stn[i][j]=='.')
            {
                if(stn[i][j-1]=='B'||stn[i-1][j]=='B')
                    stn[i][j]='W';
                else
                    stn[i][j]='B';
            }
            else
                stn[i][j]=='-';
        }
    }
    for(int i=0;i<n;i++)
        cout<<stn[i]<<endl;

   return 0;
}
