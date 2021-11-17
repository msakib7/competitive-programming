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
        for(int j=0;j<m;j++)
        {
            if(stn[i][j]=='.')
            {
                if((i+j)&1)
                    cout<<"W";
                else
                    cout<<"B";
            }
            else
                cout<<stn[i][j];
        }
        cout<<endl;
    }
   return 0;
}
