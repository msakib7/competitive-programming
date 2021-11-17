#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,ans;
    cin>>n;
    int arr=0;
    for(int i=1;i<=n;i++)
        {
            arr+=i;
            if(arr>=n)
                {
                    ans=i;
                    break;
                }
        }
     cout<<ans<<endl;
  return 0;
}
