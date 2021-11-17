#include<bits/stdc++.h>
using namespace std;
void solve(int tc)
{
    long long sum=0,d,i=0;
    string s;
    cin>>s>>d;
    if(s[0]=='-')
        i=1;
    for(int j=i;j<s.size();j++)
    {
        sum=s[j]-'0'+sum*10;
        sum%=d;
    }
    cout<<"Case "<<tc<<": ";
    if(sum==0)
        cout<<"divisible";
    else
        cout<<"not divisible";
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
