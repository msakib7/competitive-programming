#include<bits/stdc++.h>
using namespace std;
void solve()
{
    int n,a,b,i=0;
    cin>>n>>a>>b;
    char arr[25];
    for(char c='a';c<='z';c++)
    {
        arr[i++]=c;
    }
        int cnt=0,cnt2=0;
    while(1)
    {
        for(int i=0;i<b;i++)
            {
                printf("%c",arr[i]);
                cnt2++;
            }
        cnt++;
        if(cnt==n/b)
            b=n%b;
       if(cnt2==n)
            break;
    }
    printf("\n");

}
int main()
{
    int tc;
    cin>>tc;
    while(tc--)
        solve();
  return 0;
}
