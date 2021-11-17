#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin>>n;
    int arr[n+5],brr[n+5];
    int cnt1=0,cnt2=0;
    for(int i=1;i<=n;i++)
    {
        cin>>arr[i]>>brr[i];
        if(arr[i]&1)cnt1++;
        if(brr[i]&1)cnt2++;
    }
    int x=cnt1%2;
    int y=cnt2%2;
    if(x==y&&n>1)
        cout<<x<<endl;
    else
        cout<<"-1"<<endl;

  return 0;
}
