#include<bits/stdc++.h>
using namespace std;
#define ll long long

int main()
{
    ll n,a,b,a1,b1,s,s1,d,flg=0,x=0,y=0;
    cin>>n>>a>>b;
    s1=n*6;
    s=a*b;
    if(s1<=s)
    {
        s1=s;
        a1=a,b1=b;
    }

    else
    {


    }

    if(flg==1)
    {
        cout<<s1<<endl;
        cout<<a+x<<" "<<b+y<<endl;
    }
    else
    {
       cout<<s1<<endl;
       cout<<a1<<" "<<b1<<endl;
    }


 return 0;
}
