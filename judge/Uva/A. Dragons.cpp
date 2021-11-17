#include<bits/stdc++.h>
using namespace std;
pair<int,int>pr[1005];
int main()
{
    int s,n;
    cin>>s>>n;
    for(int i=0;i<n;i++)
    {
        int x,y;
        cin>>x>>y;
        pr[i].first=x;
        pr[i].second=y;
    }
    sort(pr,pr+n);
    int i;
    for(i=0;i<n;i++)
    {
        if(s<=pr[i].first)
            break;
        s+=pr[i].second;
    }
    if(i==n)
        cout<<"YES"<<endl;
    else
        cout<<"NO"<<endl;

   return 0;
}
