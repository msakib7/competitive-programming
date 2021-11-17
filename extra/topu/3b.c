#include<stdio.h>
#include<string.h>
int main()
{
    char name[20][20];
    for(int i=0;i<5;i++)
        gets(name[i]);

    int run[20];
    for(int i=0;i<5;i++)
        scanf("%d",&run[i]);

    int ovr[20];
    for(int i=0;i<5;i++)
            scanf("%d",&ovr[i]);

    for(int i=0;i<5;i++)
    {
        printf("Name= %s Runs= %d ball played=%d\n",name[i],run[i],ovr[i]*6);
    }

  return 0;
}
