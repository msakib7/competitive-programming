#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,m,tc=1;
    while(cin >> n >> m, n > 0 && m > 0)
    {
        if(tc>1)
            cout<<endl;
        char arr[n+5][m+5];
        for(int i=1;i<=n;i++)
        {
            for(int j=1;j<=m;j++)
                cin>>arr[i][j];
        }
        cout<<"Field #"<<tc<<":"<<endl;
        tc++;
        for(int i=1;i<=n;i++)
        {
            for(int j=1;j<=m;j++)
            {
                if(arr[i][j]=='*')
                    cout<<arr[i][j];
                else
                {
                    int ans=0;
                    for(int r=i-1;r<=i+1;r++)
                        for(int c=j-1;c<=j+1;c++)
                        if(arr[r][c]=='*')
                         ans++;
                    cout<<ans;
                }
            }
            cout<<endl;
        }
    }
  return 0;
}

