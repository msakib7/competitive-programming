#include<bits/stdc++.h>
using namespace std;
void solve()
{
    int n,sum=0;
    cin>>n;
    int arr[n+5];
    for(int i=0;i<n;i++)
        cin>>arr[i];
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<i;j++)
        {
            if(arr[j]<=arr[i])
                sum++;
        }
    }
    cout<<sum;
}
int main()
{
    int tc;
    cin>>tc;
    while(tc--)
    {
        solve();
        cout<<endl;
    }
   return 0;
}
