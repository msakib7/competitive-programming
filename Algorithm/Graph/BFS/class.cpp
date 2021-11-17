#include<bits/stdc++.h>
using namespace std;
int main()
{
    int arr[11]={900,700,500,200,300,100,600,200,400,300,450};
    for(int i=0;i<11;i++)
    {
        if(arr[i]>300)
        {
            cout<<"Store no: "<<i+1010<<"; number of mobile: "<<arr[i]<<endl;
        }
    }
}
