#include<bits/stdc++.h>
using namespace std;
int main()
{
    long long tc,arr[25],x;
    arr[0]=1;
    for(int i=1;i<=20;i++)
    {
        arr[i]=arr[i-1]*i;
    }
    cin>>tc;
    for(int i=1;i<=tc;i++)
    {
        cin>>x;
        stack<int>q;
        int a=20;
        while(a>=0)
        {
            if(arr[a]<=x)
            {
                x-=arr[a];
                q.push(a);
            }
            a--;
        }
        if(x==0)
        {
            printf("Case %d: ",i);
            while(q.size()!=1)
            {
                printf("%d!+",q.top());
                q.pop();
            }
            printf("%d!\n", q.top());
			q.pop();
        }
        else
            printf("Case %d: impossible\n",i);

    }
  return 0;
}
