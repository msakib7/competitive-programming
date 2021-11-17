#include<bits/stdc++.h>
using namespace std;
int isp[105];
int main()
{
    int tc;
    cin>>tc;
    while(tc--)
    {
        int n,x;
        cin>>n;
        vector<int>v1,v2;
        for(int i=0;i<103;i++)
        {
            isp[i]=0;
        }
        for(int i=1;i<=n;i++)
        {
            cin>>x;
            if(isp[x]==0)
            {
                isp[x]=1;
                v1.push_back(x);
            }
            else
            {
                v2.push_back(x);
            }
        }
        sort(v1.begin(),v1.end());
        for(int i=0;i<v1.size();i++)
            cout<<v1[i]<<" ";
        for(int i=0;i<v2.size();i++)
            cout<<v2[i]<<" ";
        cout<<endl;
    }
   return 0;
}
