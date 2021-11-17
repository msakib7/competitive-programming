#include<bits/stdc++.h>
using namespace std;
int main()
{
    int tc;
    cin>>tc;
    int arr[100+5],brr[100+5];

    while(tc--)
    {
        int n;
        cin>>n;
        vector<int>v1,v2;
        for(int i=1;i<=n;i++)
            cin>>arr[i];
        for(int i=1;i<=n;i++)
            cin>>brr[i];
        int sum1=0,sum2=0;
        for(int i=1;i<=n;i++)
        {
            if(arr[i]>brr[i])
            {
                int x=arr[i]-brr[i];
                for(int j=1;j<=x;j++)v1.push_back(i);
                sum1+=x;
            }
            if(arr[i]<brr[i])
            {
                int x=brr[i]-arr[i];
                for(int j=1;j<=x;j++)v2.push_back(i);
                sum2+=x;
            }
        }
        if(sum1!=sum2)
            cout<<"-1"<<endl;
        else if(sum1==0)
            cout<<"0"<<endl;
        else
        {
            cout<<sum1<<endl;
            for(int i=0;i<v1.size();i++)
                cout<<v1[i]<<" "<<v2[i]<<endl;
        }
    }
   return 0;
}
