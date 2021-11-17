#include<bits/stdc++.h>
using namespace std;
int main()
{
    int tc;
    cin>>tc;
    while(tc--)
    {
        long long n,x,mx=0;
        cin>>n;
        while(n!=0)
         {
            x=n%10;
            mx=max(mx,x);
            n/=10;
         }
        cout<<mx<<endl;
    }

  return 0;
}
