#include<stdio.h>
#include<string.h>
int main()
{
    char arr[20],rev[20];
    scanf("%s",arr);
    int len=strlen(arr);
    for(int i=len-1;i>=0;i--)
        printf("%c",arr[i]);
    printf("\n");

 return 0;
}
