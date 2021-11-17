#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    int arr[20];
    cin>>n;
    cout<<"Lumberjacks:"<<endl;
    while(n--)
    {
        for(int i=1;i<=10;i++)
            cin>>arr[i];
        int m=0;
        for(int i=1;i<10;i++)
        {
            if(arr[i]>arr[i+1])
            {
                m++;
            }
            else
                m--;
        }
        m=abs(m);
        if(m==9)
        cout<<"Ordered"<<endl;
        else
            cout<<"Unordered"<<endl;
    }
   return 0;
}
