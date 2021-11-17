#include<bits/stdc++.h>
using namespace std;
void solve(int test)
{
    long long n,m,flg=0,x,y;
    cin>>n>>m;
    long long arr[n+5],i,j;
    char ch;
    for(i=0;i<n;i++)
        cin>>arr[i];
    while(m--)
    {
        cin>>ch;
        switch(ch)
        {
        case 'S':
            cin>>x;
            for(i=0;i<n;i++)
                arr[i]+=x;
            break;
        case 'M':
            cin>>x;
            for(i=0;i<n;i++)
                arr[i]*=x;
            break;
        case 'D':
            cin>>x;
            for(i=0;i<n;i++)
                arr[i]/=x;
            break;
        case 'R':
            for(i=0,j=n-1;i<j;i++,j--)
                swap(arr[i],arr[j]);
            break;
        case 'P':
            cin>>x>>y;
            swap(arr[x],arr[y]);
            break;
        }

    }
    printf("Case %d:\n",test);
    for(i=0;i<n;i++)
    {
        cout<<arr[i];
        if(i!=n-1)
          cout<<" ";
    }
}
int main()
{
    int tc;
    cin>>tc;
    for(int i=1;i<=tc;i++)
    {
        solve(i);
        cout<<endl;
    }
  return 0;
}
