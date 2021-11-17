#include<bits/stdc++.h>
using namespace std;
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int tc;
    long long f=0,in=0,p;
    cin>>tc;
    string arr;
    while(tc--)
    {
        cin>>arr;
        long long a=0,b=0;
        for(int i=0;i<arr.size();i++)
        {
            if(arr[i]=='.')
                {
                    p=i;
                    break;
                }
              a=a*10+arr[i]-'0';
        }
        for(int i=p+1;i<arr.size();i++)
        {
            b=b*10+arr[i]-'0';
        }
       f+=a;
       in+=b;
           f+=in/12;
           in%=12;
       printf("%lld Feet, %lld Inches\n",f,in);

    }
   return 0;
}
