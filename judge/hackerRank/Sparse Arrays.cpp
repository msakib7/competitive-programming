#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    string stn;
    cin>>n;
    map<string,int>mp;
    for(int i=0;i<n;i++)
    {
        cin>>stn;
        mp[stn]++;
    }
    map<string,int>::iterator it;
    int m;
    cin>>m;
    for(int i=0;i<m;i++)
    {
        cin>>stn;
        cout<<mp[stn]<<endl;
    }
   return 0;
}
