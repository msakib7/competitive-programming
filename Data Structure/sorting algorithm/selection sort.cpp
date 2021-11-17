#include<bits/stdc++.h>
using namespace std;
void selectionsort(int arr[],int len)
{
    for(int i=0;i<len-1;i++)
    {
        int idx_min=i;

        for(int j=i+1;j<len;j++)
            if(arr[j]<arr[idx_min])
              idx_min=j;

        if(i!=idx_min)
            swap(arr[i],arr[idx_min]);
    }
}
void show(int arr[],int len)
{
    for(int i=0;i<len;i++)
        cout<<arr[i]<<" ";
}
int main()
{
    int arr[]={88,22,33,66,55,99,77,00,11,44};
    int len=sizeof(arr)/sizeof(arr[0]);
    cout<<"My list : ";
    show(arr,len);
    cout<<endl;

    selectionsort(arr,len);
    cout<<"Sorted list : "<<endl;
    show(arr,len);
    cout<<endl;

  return 0;
}
