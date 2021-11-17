#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,tc=1;
    while(cin>>n)
    {
        if(n==0)
            break;
        int arr[n+5],sum=0,mv=0;
        for(int i=0;i<n;i++)
        {
            cin>>arr[i];
            sum+=arr[i];
        }
        int x=sum/n;
        for(int i=0;i<n;i++)
        {
            if(arr[i]>x)
                mv+=arr[i]-x;
        }
       cout<<"Set #"<<tc<<endl;
       cout<<"The minimum number of moves is "<<mv<<"."<<endl<<endl;;
       tc++;
    }
   return 0;
}
