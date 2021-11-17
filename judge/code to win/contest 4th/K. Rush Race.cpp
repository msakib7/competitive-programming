#include<bits/stdc++.h>
using namespace std;
const unsigned int M = 1000000007;
void solve()
{
    long long n,mul=1;
    cin>>n;
    long long arr[n+5];
    for(int i=0;i<n;i++)
       {
            cin>>arr[i];
            mul*=arr[i];
       }
       cout<<mul%M<<endl;

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
