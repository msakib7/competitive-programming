#include<bits/stdc++.h>
using namespace std;
int main()
{
    int cnt=0,bnt=0;
    string s;
    cin>>s;
    for(int i=0;i<s.size();i++)
    {
        if(isupper(s[i]))
            cnt++;
    }
    for(int i=1;i<s.size();i++)
    {
        if(islower(s[i]))
            bnt++;
    }
    if(islower(s[0])&&bnt==0)
    {
        s[0]=toupper(s[0]);
        for(int i=1;i<s.size();i++)
        {
            s[i]=tolower(s[i]);
        }
        cout<<s;
    }
    else if(cnt==s.size())
    {
        for(int i=0;i<s.size();i++)
        {
            s[i]=tolower(s[i]);
        }
        cout<<s;
    }
    else
    {
        cout<<s;
    }
    cout<<endl;

  return 0;
}
