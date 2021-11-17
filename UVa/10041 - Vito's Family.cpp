#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    int arr[1000];
    cin>>n;
    while(n--)
    {
        int r,ttl=0;
        cin>>r;
        for(int i=0;i<r;i++)
            cin>>arr[i];
        sort(arr,arr+r);
        int mdn=arr[r/2];
        //cout<<mdn<<endl;
        for(int i=0;i<r;i++)
        {
            //cout<<ttl<<endl;
            if(arr[i]==mdn)
                continue;
            int n=mdn-arr[i];
            if(n<0)
                n*=-1;
            ttl+=n;

        }
        cout<<ttl<<endl;
    }
  return 0;
}
