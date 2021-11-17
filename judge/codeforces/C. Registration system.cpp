#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin>>n;
    string x;
    map<string,int>mp;
    for(int i=0;i<n;i++)
    {
        cin>>x;
        if(mp[x]==0)
        {
            mp[x]=1;
            cout<<"OK"<<endl;
        }
        else
        {
            cout<<x<<mp[x]<<endl;
            mp[x]++;
        }
    }
   return 0;
}
