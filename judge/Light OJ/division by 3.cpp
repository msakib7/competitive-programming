#include<bits/stdc++.h>
using namespace std;
int solve(int n)
{
    int ans;
    ans=(n/3)*2;
    if(n%3==2)
        ans+=1;
    return ans;
}
int main()
{
    int tc;
    cin>>tc;
    for(int i=1;i<=tc;i++)
    {
        int a,b;
        cin>>a>>b;
        cout<<"Case "<<i<<": "<<solve(b)-solve(a-1)<<endl;
    }
   return 0;
}
