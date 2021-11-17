#include<bits/stdc++.h>
using namespace std;
#define ll long long
int main()
{
    int tc;
    cin>>tc;
    while(tc--)
    {
        ll n,a,b;
        cin>>n>>a>>b;
        string stn;
        cin>>stn;
        ll ans=0;
        ans=a*n;
        if(b>0)
        {
            ans+=(n*b);
            cout<<ans<<endl;
        }
        else
        {
            int op=1;
            for(int i=1;i<n;i++)
            {
                if(stn[i]!=stn[i-1])
                {
                    op++;
                }
            }
            cout<<(op/2+1)*b+a*n<<endl;
        }
    }
   return 0;
}
