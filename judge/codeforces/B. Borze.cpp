#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    string stn;
    cin>>stn;
    for(int i=0;i<stn.size();i++)
    {
        if(stn[i]=='-'&&stn[i+1]=='.')
            {
                cout<<"1";
                i++;
            }
        else if(stn[i]=='-'&&stn[i+1]=='-')
        {
            cout<<"2";
            i++;
        }
        else
            cout<<"0";
    }
    cout<<endl;

  return 0;
}
