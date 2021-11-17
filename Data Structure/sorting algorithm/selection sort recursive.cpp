#include<bits/stdc++.h>
using namespace std;
int minimum(int arr[],int i, int j)
{
    if(i==j)
        return i;
    int k=minimum(arr,i+1,j);

    return(arr[i]<arr[k])?i:k;

}
void selectionsort(int arr[],int len,int idx=0)
{
   if(idx==len)
     return ;
   int tmp=minimum(arr,idx,len-1);
   /*
    for(int j=idx+1;j<len;j++)
        if(arr[j]<arr[idx])
         idx=j;
     */

    if(tmp!=idx)
        swap(arr[tmp],arr[idx]);
    selectionsort(arr,len,idx+1);
}
void show(int arr[],int len)
{
    for(int i=0;i<len;i++)
        cout<<arr[i]<<" ";
    cout<<endl;
}
int main()
{
    int arr[]={88,22,33,11,55,00,99,77,44,33};
    int len=sizeof(arr)/sizeof(arr[0]);
    cout<<"My list : ";
    show(arr,len);

    selectionsort(arr,len);
    cout<<"sorted list : ";
    show(arr,len);
}
