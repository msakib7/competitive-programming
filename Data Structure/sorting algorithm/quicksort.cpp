#include<bits/stdc++.h>
using namespace std;
void show(int arr[],int len)
{
    for(int i=0;i<len;i++)
        cout<<arr[i]<<" ";
}
int main()
{
    int arr[]={88,55,66,33,00,99,77,22,11,44};
    int len;
    len=sizeof(arr)/sizeof(arr[0]);
    cout<<"My list :";
    show(arr,len);
    cout<<endl;

}
