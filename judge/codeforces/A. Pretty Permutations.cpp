#include<bits/stdc++.h>
using namespace std;
void solve()
{
   int n,m;
   cin>>n;
   int arr[n+5];
   for(int i=1;i<=n;i++)
   {
       arr[i]=i;
   }
   if(n==1)
   {
       cout<<"1";
       return ;
   }
   if(n==3)
   {
       cout<<arr[2]<<" "<<arr[3]<<" "<<arr[1];
       return ;
   }
   else
   {
       for(int i=1;i<n;i+=2)
       {
           swap(arr[i],arr[i+1]);
           if(i==n-2)
           {
               cout<<arr[i]<<" "<<arr[n]<<" "<<arr[i+1];
               break;
           }
           cout<<arr[i]<<" "<<arr[i+1]<<" ";
       }
   }
}
int main()
{
   int tc;
   cin>>tc;
   while(tc--)
   {
        solve();
        cout<<endl;
   }
  return 0;
}
