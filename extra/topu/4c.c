#include<stdio.h>
int main()
{
    char arr[20];
    for(int i=0;i<5;i++)
    {
        scanf("%c",&arr[i]);
    }
    arr[i]='\0';
    printf("%s",arr);

 return 0;
}
