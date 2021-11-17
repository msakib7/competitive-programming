#include<bits/stdc++.h>
using namespace std;
#define ll long long
int main()
{
    ll tc,n1,n2,m1,m2;
    cin>>tc;
    for(int i=1;i<=tc;i++)
    {
        cin>>n1>>m1>>n2>>m2;

        if((n1+m1)%2!=(n2+m2)%2)
            cout<<"Case "<<i<<":"<<" "<<"impossible"<<endl;
        else
        {
            if(abs(n2-n1)==abs(m2-m1))
                {
                    cout<<"Case "<<i<<":"<<" 1"<<endl;
                }
            else
                {
                    cout<<"Case "<<i<<":"<<" 2"<<endl;
                }
        }
    }
  return 0;
}
