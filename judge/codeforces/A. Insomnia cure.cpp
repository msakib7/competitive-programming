#include<bits/stdc++.h>
using namespace std;
int arr[100000];
int main()
{
    int k,l,m,n,d,cnt=0,ans;
    cin>>k>>l>>m>>n>>d;
    for(int i=1;i<=d;i++)
        arr[i]=1;
    for(int i=1;i<=d;i++)
    {
        if(i%k==0)
            arr[i]=0;
        if(i%l==0)
            arr[i]=0;
        if(i%m==0)
            arr[i]=0;
        if(i%n==0)
            arr[i]=0;
    }
    for(int i=1;i<=d;i++)
    {
        if(arr[i]==1)
            cnt++;
    }
    ans=d-cnt;
    cout<<ans<<endl;

  return 0;
}
