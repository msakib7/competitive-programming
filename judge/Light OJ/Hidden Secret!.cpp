#include<bits/stdc++.h>
using namespace std;
int main()
{
    int tc;
    char arr[120],brr[120];
    int cnt1[26],cnt2[26];
    cin>>tc;
    getchar();
    for(int t=1;t<=tc;t++)
    {
        gets(arr);
        gets(brr);
        for(int i=0;i<26;i++)
            cnt1[i]=0,cnt2[i]=0;
        for(int i=0;arr[i];i++)
        {
            if(arr[i]!=' ')
            {
                char c=tolower(arr[i]);
                cnt1[c-'a']++;
            }
        }
        for(int i=0;brr[i];i++)
        {
            if(brr[i]!=' ')
            {
                char c=tolower(brr[i]);
                cnt2[c-'a']++;
            }
        }
        int flg=0;
        for(int i=0;i<26;i++)
           {
               if(cnt1[i]!=cnt2[i])
                {
                    flg=1;
                    break;
                }
           }
        if(flg==1)
          cout<<"Case "<<t<<": No"<<endl;
        else
          cout<<"Case "<<t<<": Yes"<<endl;
    }

  return 0;
}
