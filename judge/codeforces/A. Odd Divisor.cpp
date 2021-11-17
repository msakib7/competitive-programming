#include<bits/stdc++.h>
using namespace std;
int main()
{
    int tc;
    long long n;
    cin>>tc;
    while(tc--)
    {
        cin>>n;
        long long s=2;
        while(s<n)
        {
            s*=2;
        }
        if(s==n)
            cout<<"NO"<<endl;
        else
            cout<<"YES"<<endl;
    }
  return 0;

}
