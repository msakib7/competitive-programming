#include<bits/stdc++.h>
using namespace std;
#define  nl  printf("\n")
#define  spc printf(" ")
void solve()
{
    int n;
    vector<int>num;
    scanf("%d",&n);
    if(n%2==0&&n%4==0)
    {
        int sum1=0,sum2=0;
        num.push_back(2);
        for(int i=2;i<=n;i+=2)
            {
                num.push_back(i);
                sum1+=i;
            }
        for(int i=1;i<=n;i+=2)
            {
                num.push_back(i);
                sum2+=i;
            }
        //cout<<sum1;spc;cout<<sum2;nl;
        int c=sum1-sum2;
        num.back()+=c;
        printf("YES");
        nl;
        for(int i=1;i<=n;i++)
            printf("%d ",num[i]);
    }
    else
        printf("NO");
}
int main()
{
    int tc;
    scanf("%d",&tc);
    for(int i=1;i<=tc;i++)
    {
        solve();
        nl;
    }
    return 0;
}
