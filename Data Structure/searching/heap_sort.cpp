#include<bits/stdc++.h>
using namespace std;
void hepifi(int arr[],int n,int i)
{
    int lrg=i;
    int l=i*2+1;
    int r=i*2+2;

    if(l<n&&arr[l]>arr[lrg])
        lrg=l;
    if(r<n&&arr[r]>arr[lrg])
        lrg=r;

    if(lrg!=i){
        swap(arr[i],arr[lrg]);
        hepifi(arr,n,lrg);
    }
}
void heapsort(int arr[],int n)
{
    for(int i=n/2-1;i>=0;i--)
        hepifi(arr,n,i);

    for(int i=n-1;i>=0;i--)
        {
            swap(arr[0],arr[i]);
            hepifi(arr,i,0);
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
    int arr[]={77,55,44,33,11,22,66,99,88,00};
    int n=sizeof(arr)/sizeof(arr[0]);
    cout<<"befor : ";
    show(arr,n);
    heapsort(arr,n);
    cout<<"after : ";
    show(arr,n);

   return 0;
}
