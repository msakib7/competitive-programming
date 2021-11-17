#include<bits/stdc++.h>
using namespace std;
void insertionsort(int arr[],int len)
{

}
void show(int arr[],int len)
{
    for(int i=0;i<len;i++)
        cout<<arr[i]<<" ";
    cout<<endl;
}
int main()
{
    int arr[]={44,88,99,00,66,11,22,77,33,55};
    int len=sizeof(arr)/sizeof(arr[0]);
    cout<<"My list : "
    show(arr,len);
    insertionsort(arr,len);
    show(arr,len);
   return 0;
}
