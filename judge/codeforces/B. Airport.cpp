#include<bits/stdc++.h>
using namespace std;
#define spc <<" "<<
int const mxn=1e4;
int arr[mxn];
int brr[mxn];
int main()
{
    int n,m;
    cin>>n>>m;
    for(int i=1;i<=m;i++)
    {
        cin>>arr[i];
        brr[i]=arr[i];
    }
    int mx=0,mn=0,nw;
    for(int i=1;i<=n;i++)
    {
        int bg=-1;
        for(int j=1;j<=m;j++)
        {
            if(bg<arr[j]&&arr[j]>0)
            {
                bg=arr[j];
                nw=j;
            }
        }
        if(bg>0)
        {
            mx+=bg;
            arr[nw]--;
        }
    }
    for(int i=1;i<=n;i++)
    {
        int sml=999999;
        for(int j=1;j<=m;j++)
        {
            if(sml>brr[j]&&brr[j]>0)
            {
                sml=brr[j];
                nw=j;
            }
        }
        if(sml!=999999)
        {
            mn+=sml;
            brr[nw]--;
        }
    }
    cout<<mx spc mn<<endl;

  return 0;
}
