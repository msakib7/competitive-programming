#include<bits/stdc++.h>
using namespace std;
#define ll long long
int main()
{
    int tc;
    cin>>tc;
    while(tc--)
    {
        ll n,on,tu,x;
        cin>>n;
        x=n%3;
        on=n/3;
        tu=n/3;

        if(x==1)
            on++;
        if(x==2)
            tu++;
        cout<<on<<" "<<tu<<endl;
    }

  return 0;
}
