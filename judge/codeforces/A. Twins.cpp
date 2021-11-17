#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin>>n;
    int arr[n+5];
    for(int i=0;i<n;i++)
        cin>>arr[i];
    if(n==1)
    {
        cout<<"1"<<endl;
        return 0;
    }
    else if(n==2)
    {
        if(arr[0]!=arr[1])
            cout<<"1"<<endl;
        else
            cout<<"2"<<endl;
        return 0;
    }
    else
    {
        int sum=0,p=0,q=0;
        sort(arr,arr+n);
        for(int i=0;i<n;i++)
        {
            sum+=arr[i];
        }
        for(int i=n-1;i>=0;i--)
            {
                q++;
                sum-=arr[i];
                p+=arr[i];
                if(p>sum)
                    break;
            }
            cout<<q<<endl;
    }
  return 0;
}
