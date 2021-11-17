#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,l,r,m;
    cin>>n;
    int arr[n+5];
    for(int i=0;i<n;i++)
        cin>>arr[i];

    int x,p=-1;
    cout<<"enter number to search: ";
    cin>>x;

    l=0,r=n-1;
    while(l<=r)
    {
        m =l+(r-l)/2;
        if(arr[m]==x)
            {
                p=m;
                break;
            }
        if(arr[m]<x)
            l=m+1;
        else
            r=m-1;
    }
    if(p==-1)
        cout<<"Not fond"<<endl;
    else
        cout<<"Psition: "<<p+1<<endl;

}
