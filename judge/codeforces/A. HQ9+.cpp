#include<bits/stdc++.h>
using namespace std;
int main()
{
    string stn;
    cin>>stn;
    int flg=0;
    for(int i=0;i<stn.size();i++)
    {
        if(stn[i]=='H'||stn[i]=='Q'||stn[i]=='9')
        {
            flg=1;
            break;
        }
    }
    if(flg==1)
        cout<<"YES"<<endl;
    else
        cout<<"NO"<<endl;

  return 0;
}
