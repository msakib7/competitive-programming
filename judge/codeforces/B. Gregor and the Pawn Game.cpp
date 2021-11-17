#include<bits/stdc++.h>
using namespace std;
int main()
{
    int tc;
    cin>>tc;
    while(tc--)
    {
        int n;
        cin>>n;
        string v1,v2;
        cin>>v1>>v2;
        long long ans=0;
        for(int i=0;i<n;i++)
        {
            if(v2[i]=='1')
            {
                if(v1[i]=='0')
                    ans++;
                else if(i>0&&v1[i-1]=='1')
                {
                    ans++;
                    v1[i-1]=='0';
                }
                else if(i<n&&v1[i+1]=='1')
                {
                    ans++;
                    v1[i+1]='0';
                }
            }
        }

        cout<<ans<<endl;
    }
   return 0;
}
