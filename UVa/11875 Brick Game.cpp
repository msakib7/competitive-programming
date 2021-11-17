#include<bits/stdc++.h>
using namespace std;
void solve(int tc)
{
    int n,x=0,y=0;
    cin>>n;
    int arr[n+5];
    for(int i=1;i<=n;i++)
        {
            cin>>arr[i];
            if(i==1)
            {
                if(arr[i]>arr[i+1])
                x=1;
            if(arr[i]<arr[i+1])
                y=1;
            }
        }
        cout<<"Case "<<tc<<": ";
     if(x==1)
            cout<<arr[(n+1)/2];
     else
        cout<<arr[(n+1)/2];

}
int main()
{
    int tc;
    cin>>tc;
    for(int i=1;i<=tc;i++)
    {
        solve(i);
        cout<<endl;
    }
  return 0;
}
