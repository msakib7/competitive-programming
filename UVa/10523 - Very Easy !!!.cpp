#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,m,sum=0;
    while(scanf("%d%d",&n,&m)==2){
    for(int i=1;i<=n;i++)
    {
        sum+=i*pow(m,i);
    }
    cout<<sum<<endl;
    sum=0;
}
  return 0;
}

12
13
14
15
16
17
18
#include<bits/stdc++.h>
using namespace std;
int main()
{
    int sum=0,n,a;
    while(scanf("%d %d",&n,&a)==2)

    {
        for(int i=1; i<=n; i++)
        {
            sum=sum+(i*pow(a,i));
        }
        printf("%d\n",sum);
        sum=0;
    }

    return 0;
}
