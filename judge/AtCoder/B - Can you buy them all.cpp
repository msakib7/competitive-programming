#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,m,sum=0;
    cin>>n>>m;
    vector<int>v;
    for(int i=1;i<=n;i++)
    {
        int x;
        cin>>x;
        if(i%2==0)
            x--;
        sum+=x;
    }
    //cout<<sum<<endl;
    if(sum<=m)
        cout<<"Yes"<<endl;
    else
        cout<<"No"<<endl;

   return 0;
}
