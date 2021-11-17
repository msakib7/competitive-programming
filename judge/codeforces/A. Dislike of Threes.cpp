#include<bits/stdc++.h>
using namespace std;
int main()
{
    int tc;
    cin>>tc;
    while(tc--)
    {
        int n,ans=0,cnt=0;
        cin>>n;
        int i=1;
        while(1)
        {
            if(i%3!=0&&i%10!=3)cnt++;
            if(cnt==n)
                break;
            i++;
        }
       cout<<i<<endl;
    }

  return 0;
}
