#include<bits/stdc++.h>
using namespace std;
int main()
{
    int b,g;
    cin>>b>>g;
    if(b>g)
    {
        for(int i=1;i<=2*g;i++)
        {
            if(i&1)
                cout<<"B";
            else
                cout<<"G";
        }
        for(int i=1;i<=b-g;i++)
            cout<<"B";
    }
    else
    {
        for(int i=1;i<=2*b;i++)
        {
            if(i&1)
                cout<<"B";
            else
                cout<<"G";
        }
        for(int i=1;i<=g-b;i++)
            cout<<"G";
    }
    cout<<endl;

  return 0;
}
