#include<bits/stdc++.h>
using namespace std;
void sakib()
{
    int n,arr[10000],cnt=0;
    cin>>n;
    for(int i=0;i<n;i++)
    {
        scanf("%d",&arr[i]);
    }
    for(int i=0;i<n-1;i++)
    {
        for(int j=0;j<n-i-1;j++)
            if(arr[j]>arr[j+1])
        {
            int temp=arr[j];
            arr[j]=arr[j+1];
            arr[j+1]=temp;
            cnt++;
        }
    }
    int x;
    x=((n*(n-1))/2)-1;

    if(cnt>x)
        cout<<"NO"<<endl;
    else
        cout<<"YES"<<endl;

}
int main()
{
    int n;
    cin>>n;
    while(n--)
    {
        sakib();
    }
  return 0;
}
