#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,q;
    cin>>n>>q;
    int arr[n+5];
    map<int,int>mp;
    for(int i=1;i<=n;i++)
    {
        cin>>arr[i];
        if(mp[arr[i]]==0)
            mp[arr[i]]=i;
    }
    while(q--)
    {
        int a;
        cin>>a;
        int ans=mp[a];

    }
}
