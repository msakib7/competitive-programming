#include<bits/stdc++.h>
using namespace std;
int main()
{
    int flg=0;
    string stn;
    cin>>stn;
    for(int i=0;i<stn.size();i++)
    {
        if(i%2==0)
        {
            if(stn[i]<'a'||stn[i]>'z')
            {
                cout<<"No"<<endl;
                flg=1;
                break;
            }
        }
        else
        {
            if(stn[i]<'A'||stn[i]>'Z')
            {
                cout<<"No"<<endl;
                flg=1;
                break;
            }
        }
    }
    if(flg!=1)
        cout<<"Yes"<<endl;

  return 0;

}
