#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,m,tc=1;
    while(cin>>n)
    {
        if(n==0)
            break;
        int arr[n+5];
        char ch;
        for(int i=0;i<n;i++)
            cin>>arr[i];
        int x;
        cin>>x;
        cout<<"Case "<<tc<<":"<<endl;
        tc++;
        for(int i=0;i<x;i++)
        {
            int brr;
            cin>>brr;
            int ans=1e9,p;
            for(int j=0;j<n;j++)
            {
                for(int k=j+1;k<n;k++)
                {
                    if(arr[j]!=arr[k])
                    {
                        int a=arr[k]+arr[j];
                        int d=abs(brr-a);
                        if(d<ans)
                        {
                            ans=d;
                            p=a;
                        }
                    }
                }
            }
            cout<<"Closest sum to "<<brr<<" is "<<p<<"."<<endl;
        }
    }
  return 0;
}
