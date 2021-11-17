#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,nt=0;
    cin>>n;
    while(n!=0)
    {
        if(n>=100)
        {
            int x;
            x=n/100;
            n-=x*100;
            nt+=x;
        }
        if(n>=20)
        {
            int x;
            x=n/20;
            n-=x*20;
            nt+=x;
        }
        if(n>=10)
        {
            int x;
            x=n/10;
            n-=x*10;
            nt+=x;
        }
        if(n>=5)
        {
            int x;
            x=n/5;
            n-=x*5;
            nt+=x;
        }
        if(n>=1)
        {
            int x;
            x=n/1;
            n-=x*1;
            nt+=x;
        }
        cout<<nt<<endl;
    }
   return 0;
}
