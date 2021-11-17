#include<bits/stdc++.h>
using namespace std;
int brr[8];
int main()
{
    int n,a;
    cin>>n;
    for(int i=0;i<n;i++)
    {
        cin>>a;
        brr[a]++;
    }
    if(brr[1]!=n/3||brr[5]>0||brr[7]>0||brr[3]>brr[6]||(brr[2]+brr[3])!=(brr[4]+brr[6]))
    {
        cout<<"-1"<<endl;
        return 0;
    }

    for(int i=0;i<brr[3];i++)
        cout<<"1 3 6"<<endl;
    brr[6]-=brr[3];
    for(int i=0;i<brr[4];i++)
        cout<<"1 2 4"<<endl;
    for(int i=0;i<brr[6];i++)
        cout<<"1 2 6"<<endl;

  return 0;
}
