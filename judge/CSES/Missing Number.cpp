#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,flg=0;
    cin>>n;
    int arr[n+5];
    for(int i=0;i<n-1;i++)
    {
        cin>>arr[i];
    }
    int m=n-1;
    sort(arr,arr+m);
    for(int i=0;i<n-1;i++)
    {
            if(arr[i]!=i+1)
            {
                cout<<i+1<<endl;
                flg=1;
                break;
            }
    }
    if(flg==0)
        cout<<n<<endl;
   return 0;
}
