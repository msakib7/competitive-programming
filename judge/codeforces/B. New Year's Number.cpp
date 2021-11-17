#include<bits/stdc++.h>
using namespace std;
int main()
{
    int tc;
    cin>>tc;
    while(tc--)
    {
        int a,b,c,d,n,flg=0;
        cin>>n;
        a=n%2020;
        b=n/2020;
        if(a<=b)
            cout<<"YES"<<endl;
        else
            cout<<"NO"<<endl;
    }
   return 0;
}
