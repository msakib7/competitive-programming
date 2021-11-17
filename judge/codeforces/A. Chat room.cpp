#include<bits/stdc++.h>
using namespace std;
int main()
{
   string stn1,stn2="hello";
   cin>>stn1;
   int j=0,flg=0;
   for(int i=0;i<stn1.size();i++)
   {
       if(stn1[i]==stn2[j])
        j++;
       if(j==stn2.size())
        flg=1;
   }
   if(flg==1)
    cout<<"YES";
   else
    cout<<"NO";


 return 0;
}

