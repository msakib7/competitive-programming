#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    while(cin>>n)
    {
        if(n==0)
            break;
        int r=n+4,c=n+4;
        int arr[r][c];
        for(int i=0;i<n;i++)
        {
            for(int j=0;j<n;j++)
                cin>>arr[i][j];
        }
        int p,q,cnt=0;
        for(int i=0;i<n;i++)
        {
            int sum=0;
            for(int j=0;j<n;j++)
            {
                sum+=arr[i][j];
            }
            if(sum&1)
            {
                p=i+1;
                cnt++;
            }
        }
        int cnt2=0;
        for(int i=0;i<n;i++)
        {
            int sum2=0;
            for(int j=0;j<n;j++)
            {
                sum2+=arr[j][i];
            }
            if(sum2&1)
            {
                q=i+1;
                cnt2++;
            }
        }
        if(cnt==0&&cnt2==0)
        {
            cout<<"OK"<<endl;

        }
       else if(cnt==1&&cnt2==1)
        {
            cout<<"Change bit ("<<p<<","<<q<<")"<<endl;

        }
        else
            cout<<"Corrupt"<<endl;
    }

   return 0;
}
