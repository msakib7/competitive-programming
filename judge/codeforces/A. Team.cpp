#include<bits/stdc++.h>
using namespace std;
int main()
{
    int tc,ans=0;
    cin>>tc;
    int arr[4];
    while(tc--)
    {
        int cnt=0;
        for(int i=0;i<3;i++)
        {
            cin>>arr[i];
            if(arr[i]==1)
                cnt++;
        }
        if(cnt>=2)
            ans++;
    }
    cout<<ans<<endl;

  return 0;
}
