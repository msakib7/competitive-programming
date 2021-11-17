#include<bits/stdc++.h>
using namespace std;
int main()
{
    int tc;
    cin>>tc;
    while(tc--)
    {
        int n,sum=0,i=1;
        cin>>n;
        int m=n,arr[10],j=0,p;
        while(n!=0)
        {
            int x;
            x=n%10;
            arr[j]=x;
            n/=10;
            j++;
            p=j;
        }
        int k=1;
        for(int i=j-1;i>=0;i--)
        {
            sum+=arr[i]*k;
            k*=10;
        }
        if(m==sum)
            cout<<"wins"<<endl;
        else
            cout<<"loses"<<endl;
    }

  return 0;
}
