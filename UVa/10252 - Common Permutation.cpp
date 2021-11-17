#include<bits/stdc++.h>
using namespace std;
int main()
{
    char arr[1005],brr[1005],ans[1005];
    while(scanf("%s%s",&arr,&brr)!=EOF)
    {
        int len1,len2,c=0;
        len1=strlen(arr);
        len2=strlen(brr);
       for(int i=0;i<len1;i++)
       {
           for(int j=0;j<len2;j++)
           {
               if(arr[i]==brr[j])
               {
                   ans[c]=brr[j];
                   c++;
                   break;
               }
           }
       }
       sort(ans,ans+c);
       for(int i=0;i<c;i++)
        cout<<ans[i];
        cout<<endl;

    }
  return 0;
}
