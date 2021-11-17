#include<bits/stdc++.h>
using namespace std;
int main()
{
    int tc;
    cin>>tc;
    while(tc--)
    {
        int d,x,y,z;
        cin>>d>>x>>y>>z;
        int mx,mn;
        mx=7*x;
        mn=y*d+(7-d)*z;
        if(mx>mn)
            cout<<mx<<endl;
        else
            cout<<mn<<endl;
    }
   return 0;
}
