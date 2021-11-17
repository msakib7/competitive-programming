#include<bits/stdc++.h>
using namespace std;
void selection(int arr[],int n)
{
    for(int i=0;i<n-1;i++)
    {
        int i_mn=i;
        for(int j=i+1;j<n;j++)
        {
            if(arr[j]<arr[i_mn])
                i_mn=j;
        }
        if(i_mn!=i)
            swap(arr[i],arr[i_mn]);
    }
}
void show(int arr[],int n)
{
    for(int i=0;i<n;i++)
        cout<<arr[i]<<" ";
    cout<<endl;
}
int main()
{
    int arr[]={55,33,11,22,99,77,88,66,44};
    int n=sizeof(arr)/sizeof(arr[0]);
    cout<<"before : ";
    show(arr,n);
    selection(arr,n);
    cout<<"after : ";
    show(arr,n);

  return 0;
}
