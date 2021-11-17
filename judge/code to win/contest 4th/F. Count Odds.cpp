#include<bits/stdc++.h>
using namespace std;
void solve()
{
    int sum=0;
    string arr;
    cin>>arr;
    if((arr[arr.size()-1]-'0')%2==1)
    {
        cout<<"NO";
    }
    else
    {
        for(int i=0;i<arr.size();i++)
        {
            sum+=arr[i]-'0';
        }
        if(sum%9==0)
            cout<<"YES";
        else
            cout<<"NO";
    }
}
int main()
{
    int tc;
    cin>>tc;
    while(tc--)
    {
        solve();
        cout<<endl;
    }
   return 0;
}
