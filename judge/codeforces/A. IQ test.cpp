#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,odd=0,even=0;
    scanf("%d",&n);
    int arr[n+5];
    for(int i=1;i<=n;i++)
        {
            scanf("%d",&arr[i]);
            if(arr[i]%2==0)
                even++;
            else
                odd++;
        }
        if(even==1)
            for(int i=1;i<=n;i++)
        {
            if(arr[i]%2==0)
                printf("%d\n",i);
        }
        else
            for(int i=1;i<=n;i++)
        {
            if(arr[i]%2==1)
                printf("%d\n",i);
        }
     return 0;

}
