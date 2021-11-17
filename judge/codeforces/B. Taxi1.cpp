#include<bits/stdc++.h>
using namespace std;
#define nl  printf("\n")
void solve(int n)
{
    int i,arr[n+5],ans=0;
    int cnt1=0,cnt2=0,cnt3=0,cnt4=0,sum=0;
    for(i=0;i<n;i++)
        {
            scanf("%d",&arr[i]);
            if(arr[i]==4)
                cnt4++;
            if(arr[i]==3)
                cnt3++;
            if(arr[i]==2)
                cnt2++,sum+=arr[i];
            if(arr[i]==1)
                cnt1++;
        }
     ans+=cnt4;
     while(1)
     {
         if(cnt3==0||cnt1==0)
            break;
         cnt3--;cnt1--;
         ans++;
     }
     if(cnt3>0)
        ans+=cnt3;
     ans+=sum/4;
     if(cnt1>4)
     {
         ans+=cnt1/4;
         cnt1-=ans*4;
     }
     if(sum%4>0||cnt1>0)
        ans++;
     printf("%d",ans);

}
int main()
{
    int n;
    scanf("%d",&n);
    solve(n);
    nl;
  return 0;
}

