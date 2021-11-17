#include<bits/stdc++.h>
using namespace std;

void insertionsort(int arr[],int len)
{
    for(int i=0;i<len;i++)
    {
        int tmp=arr[i];
        int j=i-1;
        while(j>=0&&arr[j]>tmp)
        {
            arr[j+1]=arr[j];
            j--;
        }
        arr[j+1]=tmp;
    }

}
void show(int arr[],int len)
{
    for(int i=0;i<len;i++)
        cout<<arr[i]<<" ";
    cout<<endl;
}
int main()
{
    int arr[]={66,44,55,99,22,88,11,77,33,00};
    int len=sizeof(arr)/sizeof(arr[0]);
    cout<<"My list : ";
    show(arr,len);
    insertionsort(arr,len);
    cout<<"Sorted list : ";
    show(arr,len);
   return 0;
}
