#include<bits/stdc++.h>
using namespace std;
int main()
{
    int tc;
    cin>>tc;
    while(tc--)
    {
        int n;
        cin>>n;
        vector<int>v[n+5],v2[n+5];
        for(int i=0;i<n;i++)
        {
            for(int j=0;j<5;j++)
            {
                int x;
                cin>>x;
                v[i].push_back(x);
                v2[i].push_back(x);
            }
        }
        vector<int>v1[5+2];
        for(int i=0;i<5;i++)
        {
            for(int j=0;j<n;j++)
            {
                v1[i].push_back(v1[i][j]);
            }
            sort(v1[i].begin(),v1[i].end());
        }
        for(int i=0;i<5;i++)
        {
            for(int j=0;j<n;j++)
            {

            }

        }

    }
}
