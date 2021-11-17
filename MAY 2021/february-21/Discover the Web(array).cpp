#include<bits/stdc++.h>
using namespace std;
#define n 105
string s,ss,web[n];
void solve(int tc)
{
    int lst=0,i=0;
    web[i]="http://www.lightoj.com/";
    cout<<"Case "<<tc<<":"<<endl;
    while(cin>>s)
    {
        if(s=="QUIT")
            break;
        else if(s=="VISIT")
        {
            cin>>ss;
            cout<<ss<<endl;
            web[++i]=ss;
            lst=i;
        }
        else if(s=="FORWARD")
        {
            if(i+1>lst)
                cout<<"Ignored"<<endl;
            else
                cout<<web[++i]<<endl;
        }
        else
        {
            if(i-1<0)
                cout<<"Ignored"<<endl;
            else
                cout<<web[--i]<<endl;
        }

    }

}
int main()
{
    int tc;
    cin>>tc;
    for(int i=1;i<=tc;i++)
        solve(i);
   return 0;
}
