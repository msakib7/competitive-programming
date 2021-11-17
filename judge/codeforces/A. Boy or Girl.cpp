#include<bits/stdc++.h>
using namespace std;
int main()
{
    int cnt=0;
    char arr[105];
    scanf("%s",arr);
    int len=strlen(arr);
    for(int i=0;i<len;i++)
    {
        int flag=0;
        for(int j=0;j<i;j++)
        {
            if(arr[i]==arr[j])
                flag=1;
        }
        if(flag==0)
            cnt++;
    }
    //printf("%d\n",cnt);
    //int x=len-cnt;
    //printf("%d\n",cnt);
    if(cnt%2==0)
        printf("CHAT WITH HER!\n");
    else
        printf("IGNORE HIM!\n");

  return 0;
}
