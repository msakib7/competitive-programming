#include<bits/stdc++.h>
using namespace std;
void solve()
{
    int len,flag=0;
    string arr;
    stack<char>stk;
    getline(cin, arr);
    len=arr.size();
    if(len<1)
        cout<<"No";
    else
    {
        for(int i=0;i<len;i++)
        {
            if(arr[i]=='('||arr[i]=='[')
                stk.push(arr[i]);
            else if(!stk.empty()&&arr[i]==')'&&stk.top()=='(')
                stk.pop();
            else if(!stk.empty()&&arr[i]==']'&&stk.top()=='[')
                stk.pop();
            else
                flag=1;
        }
        if(stk.empty()&&flag==0)
            cout<<"Yes";
        else
            cout<<"No";
    }
}
int main()
{
    int tc;
    cin>>tc;
    cin.ignore();
    while(tc--)
    {
        solve();
        cout<<endl;
    }
  return 0;
}
