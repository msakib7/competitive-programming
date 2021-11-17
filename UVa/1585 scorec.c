#include<stdio.h>
#include<string.h>
int main()
{
    int tc;
    char arr[100];
    scanf("%d",&tc);
    for(int i=1;i<=tc;i++)
    {
        scanf("%s",arr);
        int a=0,b=0;
        for(int j=0;j<strlen(arr);j++)
        {
            if(arr[j]=='X')
                a=0;
            else
                a+=1;
            b+=a;
        }
        printf("%d\n",b);
    }
}
