#include<bits/stdc++.h>
using namespace std;
void solve()
{
    int n,j,lm;
    cin>>n;
    int arr[n+5];
    for(int i=1;i<=n;i++)
    {
        cin>>arr[i];
    }
    j=n;
    if(n&1)
        lm=(n/2)+1;
    else
        lm=n/2;
    for(int i=1;i<=lm;i++)
    {
        cout<<arr[i];
        cout<<" ";
        if(j>i)
            cout<<arr[j]<<" ";
        j--;
    }

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
