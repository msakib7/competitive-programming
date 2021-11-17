#include<bits/stdc++.h>
using namespace std;
int main()
{
    int h1,a1,c1,h2,a2;
    cin>>h1>>a1>>c1;
    cin>>h2>>a2;
    int mx=h1;
    vector<string>stn;
    while(h2>0)
    {
        if(a1>=h2)
        {
            stn.push_back("STRIKE");
            break;
        }
        if(h1-a2<=0)
        {
            stn.push_back("HEAL");
            h1+=c1;
        }
        else
        {
            h2-=a1;
            stn.push_back("STRIKE");
        }
        h1-=a2;
    }
    cout<<stn.size()<<endl;
    for(int i=0;i<stn.size();i++)
        cout<<stn[i]<<endl;

   return 0;
}

