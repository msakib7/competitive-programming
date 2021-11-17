#include<stdio.h>
int main()
{
    int arr[100];
    int n;
    scanf("%d",&n);
    for(int i=1;i<=n;i++)
        scanf("%d",&arr[i]);
    printf("Even numbers: ");
    for(int i=1;i<=n;i++)
    {
        if(arr[i]%2==0)
            printf("%d ",arr[i]);
    }
    printf("\n");
    printf("Odd numbers: ");
    for(int i=1;i<=n;i++)
    {
        if(arr[i]%2==1)
            printf("%d ",arr[i]);
    }
    printf("\n");

  return 0;
}
