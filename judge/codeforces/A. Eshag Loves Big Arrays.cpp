#include<bits/stdc++.h>
using namespace std;
void solve(int tc)
{
    int n,arr[105],sum[105]={0},mn=LONG_MAX;
    cin>>n;
    for(int i=0;i<n;i++)
        {
            cin>>arr[i];
            mn=min(arr[i],mn);
        }
    sort(arr,arr+n);
    int i;
    for(i=0;i<n;i++)
    {
        if(arr[i]>mn)
            break;
    }
    cout<<n-i;

}
int main()
{
    int tc,i=1;
    cin>>tc;
    while(tc--)
    {
        solve(i++);
        cout<<endl;
    }
   return 0;
}
