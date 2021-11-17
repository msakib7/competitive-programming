#include<bits/stdc++.h>
using namespace std;
#define nl    printf("\n")
#define spc   printf(" ");
#define ll    long long
#define ss    " "
int main()
{
    int arr[27],i;
    string stn1,stn2;
    for(int c=0;c<26;c++)
        arr[c]=c;
    while(getline(cin,stn1))
    {
        getline(cin,stn2);
        int len1=stn1.size();
        int len2=stn2.size();
        int m=0,n=0;
        for(i=0;i<len1;i++)
        {
            if(stn1[i]<='z'&&stn1[i]>='a')
                m+=arr[stn1[i]-'a'+1];
            if(stn1[i]<='Z'&&stn1[i]>='A')
                m+=arr[stn1[i]-'A'+1];
        }
        //printf("m= %d\n",m);
        for(i=0;i<len2;i++)
        {
            if(stn2[i]<='z'&&stn2[i]>='a')
                n+=arr[stn2[i]-'a'+1];
            if(stn2[i]<='Z'&&stn2[i]>='A')
                n+=arr[stn2[i]-'A'+1];
        }
        //printf("n=%d\n",n);
        while(m>9)
        {
          int sum1=0;
          while(m!=0)
             sum1+=m%10,m/=10;
          m=sum1;
        }
        while(n>9)
        {
          int sum2=0;
          while(n!=0)
                sum2+=n%10,n/=10;
          n=sum2;
        }
        if(n>m)
          swap(n,m);
        printf("%.2lf %%",(double)n*100/m);
        nl;
    }
   return 0;
}

