#include<bits/stdc++.h>
using namespace std;
int main()
{
    int tc;
    cin>>tc;
    while(tc--)
    {
        int W,H,x1,x2,y1,y2,w,h;
        cin>>W>>H>>x1>>y1>>x2>>y2>>h>>w;
        int ha,wa;
        ha=y2-y1;
        wa=x2-x1;
        if(ha+h>H||wa+w>W)
        {
            cout<<ha+h<<endl;
            cout<<wa+w<<endl;
            cout<<"-1"<<endl;
        }
        else
            cout<<"0"<<endl;
        int ans=0;

    }
}
