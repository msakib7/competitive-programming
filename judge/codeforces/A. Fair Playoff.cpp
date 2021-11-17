#include<bits/stdc++.h>
using namespace std;
int main()
{
    int tc;
    cin>>tc;
    while(tc--)
    {
        int a,b,c,d,m,n,o;
        cin>>a>>b>>c>>d;
        if(a>b)
            {
                m=a;
            }
        else
            {
                m=b;
            }
        if(c>d)
            {
                n=c;
            }
        else
            {
                n=d;
            }
        int arr[]={a,b,c,d};
        int x=sizeof(arr)/sizeof(arr[0]);
        sort(arr,arr+x);
        if(arr[2]==m||arr[2]==n)
            cout<<"Yes"<<endl;
        else
            cout<<"No"<<endl;

    }
   return 0;
}
