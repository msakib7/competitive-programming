#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin>>n;
    printf("%d\n",n/2);
    if(n%2==0)
    {
        for(int i=1;i<=n/2;i++)
        {
            cout<<"2";
            if(i!=n/2)
                cout<<" ";
        }
        cout<<endl;
    }
    else
    {
        for(int i=1;i<n/2;i++)
        {
            cout<<"2 ";
        }
        cout<<"3";
        cout<<endl;
    }
   return 0;
}
