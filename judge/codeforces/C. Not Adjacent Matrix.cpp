#include<bits/stdc++.h>
using namespace std;
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(0);

    int tc;
    cin>>tc;
    while(tc--)
    {
        int n;
        cin>>n;
        if(n==1)
        {
            cout<<"1"<<endl;
            continue;
        }
        if(n==2)
        {
            cout<<"-1"<<endl;
            continue;
        }
        vector<vector<int>>res(n, vector<int>(n, 0));
        //vector<int>res[n+5];
        int id=1;
        for(int i=0;i<n;i++)
        {
            for(int j=0;j<n;j++)
            {
                if((i+j)%2==0)res[i][j]=id++;
            }
        }
        for(int i=0;i<n;i++)
        {
            for(int j=0;j<n;j++)
                if((i+j)%2==1)res[i][j]=id++;
        }

        for(int i=0;i<n;i++)
        {
            for(int j=0;j<n;j++)
                cout<<res[i][j]<<" ";
            cout<<endl;
        }
        //cout<<endl;
    }
   return 0;
}
