#include<bits/stdc++.h>
using namespace std;
void solve()
{
    int n,flag=0;
    cin>>n;
    char arr[n+5];
    cin>>arr;

    if(arr[0]=='2'&&arr[1]=='0'&&arr[2]=='2'&&arr[3]=='0')
       flag=1;
    else if(arr[0]=='2'&&arr[1]=='0'&&arr[2]=='2')
    {
        if(arr[n-1]=='0')
            flag=1;
    }
    else if(arr[0]=='2'&&arr[1]=='0')
    {
        if(arr[n-2]=='2'&&arr[n-1]=='0')
            flag=1;
    }
    else if(arr[0]=='2')
    {
        if(arr[n-3]=='0'&&arr[n-2]=='2'&&arr[n-1]=='0')
            flag=1;
    }
    else if(arr[n-4]=='2'&&arr[n-3]=='0'&&arr[n-2]=='2'&&arr[n-1]=='0')
        flag=1;
    if(flag==1)
       cout<<"YES";
    else
        cout<<"NO";
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

