#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,m;
    cin>>n>>m;
    int cnt=0;
    for(int i=0;i<=n;i++)
    {
       for(int j=0;j<=n;j++)
       {
           int x=pow(i,2);
           int y=pow(j,2);
           if(x+j==n&&y+i==m)
            cnt++;
       }
    }
    cout<<cnt<<endl;

  return 0;
}
