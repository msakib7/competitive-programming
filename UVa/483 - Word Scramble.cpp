#include<bits/stdc++.h>
using namespace std;
int main()
{
    int i,j,k;
    string stn;
    while(getline(cin,stn))
    {
        k=-1;
        int len=stn.size();
        for(i=0;i<len;i++)
        {
            if(stn[i]==' ')
            {
                for(j=i-1;j>k;j--)
                    printf("%c",stn[j]);
                printf(" ");
                k=i;
            }
        }
        for(i=stn.size()-1;i>k;i--)
            printf("%c",stn[i]);
      printf("\n");
    }
  return 0;
}
