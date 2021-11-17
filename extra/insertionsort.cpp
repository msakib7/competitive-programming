#include<bits/stdc++.h>
using namespace std;
void insertion(int arr[],int n)
{
    for(int i=1;i<n;i++)
    {
        int temp,j;
        temp=arr[i];
        j=i-1;
        while(j>=0&&arr[j]>temp)
        {
            arr[j+1]=arr[j];
            j--;
        }
        arr[j+1]=temp;
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
    int arr[]={44,55,33,11,22,99,88,66,77};
    int n;
    n=sizeof(arr)/sizeof(arr[0]);
    cout<<"1stly: ";
    show(arr,n);
    insertion(arr,n);
    cout<<"2ndly: ";
    show(arr,n);

  return 0;
}
