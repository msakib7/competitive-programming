#include<bits/stdc++.h>
using namespace std;
void solve()
{
    int n;
    cin>>n;
    int arr[n+5];
    for(int i=0;i<n;i++)
        cin>>arr[i];
    int flg=0;
    for(int i=0;i<n;i++)
    {
        if(arr[i]<arr[i+1])
        {
            flg=1;
            break;
        }
    }
    if(flg==1)
    {
        double a,b,c,d;
        a=arr[2]-arr[1];
        b=arr[1]-arr[0];
        c=arr[1]/arr[0];

        if(a==b)
            cout<<arr[n-1]+a;
        else
            cout<<arr[n-1]*c;
    }
    else
    {
        int a,b,c;
        a=arr[0]-arr[1];
        b=arr[1]-arr[2];
        c=arr[0]/arr[1];
        if(a==b)
            cout<<arr[n-1]-a;
        else
            cout<<arr[n-1]/c;

    }
}
int main()
{
    int tc;
    cin>>tc;
    while(tc--)
    {
        solve();
        cout<<endl;
    }
   return 0;
}
/*
intput:

3
6
5 7 9 11 13 15
3
10 7 4
5
2 6 18 54 162

*/
