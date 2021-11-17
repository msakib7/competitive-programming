#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin>>n;
    map<int,int>mp;
    for(int i=1;i<=n;i++)
        {
            int x;
            cin>>x;
            mp[x]++;
        }
     map<int,int>::iterator it;
     for(it=mp.begin();it!=mp.end();it++)
     {
         if(it->second>(n+1)/2)
         {
             cout<<"NO"<<endl;
             return 0;
         }
     }
     cout<<"YES"<<endl;

   return 0;
}
