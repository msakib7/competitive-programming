#include<bits/stdc++.h>
using namespace std;
int main()
{
    int tc;
    cin>>tc;
    cin.ignore();
    while(tc--)
    {
        string str;
        stack<char>stk;
        cin>>str;
        int len,flag=0;
        len=str.size();
        for(int i=0;i<str.size();i++)
        {
            if(str[i]=='('||str[i]=='[')
                stk.push(str[i]);
            else if((!stk.empty())&&(str[i]==')'&&stk.top()=='('))
                stk.pop();
            else if((!stk.empty())&&(str[i]==']'&&stk.top()=='['))
                stk.pop();
            else
            {
                flag=1;
                break;
            }
        }
        if(stk.empty()&&flag==0)
            cout<<"Yes\n";
        else
            cout<<"No\n";

    }
  return 0;

}
