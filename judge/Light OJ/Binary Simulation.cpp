#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t,tc=1;
    string stn;
    cin>>t;
    while(t--)
    {
        cin>>stn;
        char x;
        int i,j,p,q;
        cin>>q;
        cout<<"Case "<<tc<<":"<<endl;
        tc++;
        while(q--)
        {
            cin>>x;
            if(x=='I')
            {
                cin>>i>>j;
                for(int it=i-1;it<j;it++)
                {
                    if(stn[it]=='0')
                        stn[it]='1';
                    else
                        stn[it]='0';
                }
                //cout<<stn<<endl;
            }
            else
            {
                //cout<<stn<<endl;
                cin>>p;
                cout<<stn[p-1]<<endl;
            }
        }

    }
   return 0;
}
