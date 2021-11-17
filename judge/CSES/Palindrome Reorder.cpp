#include<bits/stdc++.h>
using namespace std;
int main()
{
   string stn;
   cin>>stn;
   int arr[26];
   memset(arr,0,sizeof(arr));
   vector<int>v;
   for(int i=0;i<stn.size();i++)
   {
       arr[stn[i]-'A']++;
   }
   for(int i=0;i<26;i++)
    cout<<arr[i]<<" ";
   sort(arr,arr+n);
   for(int i=0;i<26;i++)
   {
       if(arr[i]%2==1)
       {
           flg=1;
           v.push_back(arr[i]);
           break;
       }
       else
       {
           v.push_back(arr[i]/2);
       }
   }
   for(int i=0;i<v.size();i++)
   {
       if(i==v.size())
        sum+=v[i];
       else
        sum+=v[i]*2;
   }
   if(sum!=stn.size())
   {
       cout<<"NO SOLUTION"<<endl;
   }
   else
   {

   }
}
