#include<bits/stdc++.h>
using namespace std;
int main()
{
    char stn[45];
    while(cin>>stn)
    {
        int len=strlen(stn);
        for(int i=0;i<len;i++)
        {
            if(stn[i]=='A'||stn[i]=='B'||stn[i]=='C')
                printf("2");
           else if(stn[i]=='D'||stn[i]=='E'||stn[i]=='F')
                printf("3");
           else if(stn[i]=='G'||stn[i]=='H'||stn[i]=='I')
                printf("4");
           else if(stn[i]=='J'||stn[i]=='K'||stn[i]=='L')
                printf("5");
           else if(stn[i]=='M'||stn[i]=='N'||stn[i]=='O')
                printf("6");
           else if(stn[i]=='P'||stn[i]=='Q'||stn[i]=='R'||stn[i]=='S')
                printf("7");
           else if(stn[i]=='T'||stn[i]=='U'||stn[i]=='V')
                printf("8");
           else if(stn[i]=='W'||stn[i]=='X'||stn[i]=='Y'||stn[i]=='Z')
                printf("9");
            else
                printf("%c",stn[i]);

        }
        printf("\n");
    }
   return 0;
}
