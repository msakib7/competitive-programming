
#include<bits/stdc++.h>
using namespace std;
int main()
{
    int tc,n;
    cin>>tc;
    for(int i=1;i<=tc;i++)
    {
        cin>>n;
        int cnt=0;
        for(int j=0;j<n;j++)
        {
            int x;
            cin>>x;
            if(x>0)
            cnt+=x;
        }
        cout<<"Case "<<i<<": "<<cnt<<endl;
    }
   return 0;
}
