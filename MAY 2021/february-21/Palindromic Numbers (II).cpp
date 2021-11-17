#include<bits/stdc++.h>
using namespace std;
void solve(int tc)
{
    int j=0,flg=0;
    string s,ss={};
    cin>>s;
    for(int i=s.size()-1;i>-1;i--)
    {
        ss[j]=s[i];
        j++;
    }
    ss[j]='\0';
    for(int i=0;i<s.size();i++)
    {
        if(ss[i]!=s[i])
        {
            flg=1;
            break;
        }
    }

    if(flg==0)
        cout<<"Yes";
    else
        cout<<"No";

}
int main()
{
    int tc;
    cin>>tc;
    for(int i=1;i<=tc;i++)
    {
        solve(i);
        cout<<endl;
    }
   return 0;
}
