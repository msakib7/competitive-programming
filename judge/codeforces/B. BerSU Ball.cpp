#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,m,arr[110],brr[110];
    cin>>n;
    for(int i=0;i<n;i++)
        cin>>arr[i];
    cin>>m;
    for(int i=0;i<m;i++)
        cin>>brr[i];
     int cnt=0,p=0;
     sort(arr,arr+n);
     sort(brr,brr+m);
    for(int i=0;i<n;i++)
    {
        for(int j=p;j<m;j++)
        {
            if(abs(brr[j]-arr[i])<=1)
            {
                p=j+1;
                //cout<<arr[i]<<" "<<brr[j]<<endl;
                cnt++;
                break;
            }
        }
        //cout<<"P :"<<p<<endl;
    }
    cout<<cnt<<endl;

 return 0;
}
