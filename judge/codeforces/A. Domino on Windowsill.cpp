#include<bits/stdc++.h>
using namespace std;
int n,k1,k2,w,b;
int x,y,z;
void solve()
{
        cin>>n>>k1>>k2;
        cin>>w>>b;
        x=k1+k2;
        y=2*n-(k1+k2);

        if(x>=w*2&&y>=b*2)
            cout<<"Yes"<<endl;
        else
             cout<<"No"<<endl;

}
int main()
{
    int tc;
    cin>>tc;
    for(int i=0;i<tc;i++)
    {
        solve();
    }
   return 0;
}
