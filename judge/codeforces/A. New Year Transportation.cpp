#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,m,flg=0;
    cin>>n>>m;
    int arr[n+5];
    for(int i=1;i<n;i++)
    {
        cin>>arr[i];
    }
    int x=1;
    while(x<m)
    {
        x+=arr[x];
    }
    if(x==m)
        cout<<"YES";
    else
        cout<<"NO";
    cout<<endl;
   return 0;
}
