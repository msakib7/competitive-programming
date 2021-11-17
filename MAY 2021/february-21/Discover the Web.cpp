#include<bits/stdc++.h>
using namespace std;
string br[105];
void solve(int tc)
{
    cout<<"Case "<<tc<<":"<<endl;
    string stn1,stn2;
    int i=0,lst=0;
    br[i]="http://www.lightoj.com/";
    while(1)
    {
        cin>>stn1;
        if(stn1=="QUIT")
            break;
        else if(stn1=="VISIT")
        {
            cin>>stn2;
            cout<<stn2<<endl;
            br[++i]=stn2;
            lst=i;
        }
        else if(stn1=="FORWARD")
        {
            if(i+1>lst)
                cout<<"Ignored"<<endl;
            else
            {
                i++;
                cout<<br[i]<<endl;
            }
        }
        else if(stn1=="BACK")
        {
            if(i-1<0)
                cout<<"Ignored"<<endl;
            else
            {
                i--;
                cout<<br[i]<<endl;
            }
        }

    }
}
int main()
{
    int tc;
    cin>>tc;
    for(int i=1;i<=tc;i++)
    {
        solve(i);
    }
   return 0;
}
