#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,x1,y1,x2,y2;
    string stn;
    cin>>n>>x1>>y1>>x2>>y2;
    cin>>stn;
    int e=0,w=0,nn=0,s=0;
    if(x2>x1)
        e=x2-x1;
    if(x1>x2)
        w=x1-x2;
    if(y2>y1)
        nn=y2-y1;
    if(y1>y2)
        s=y1-y2;

     int flg=0,t=0;
    for(int i=0;i<n;i++)
    {
        if(stn[i]=='E'&&e!=0)
            e--;
        if(stn[i]=='W'&&w!=0)
            w--;
        if(stn[i]=='N'&&nn!=0)
            nn--;
        if(stn[i]=='S'&&s!=0)
            s--;
        if(e==0&&w==0&&nn==0&&s==0)
        {
            flg=1;
            t=i+1;
            break;
        }
    }
    //cout<<e<<" "<<w<<" "<<nn<<" "<<s<<endl<<flg<<endl;
    if(flg==1)
        cout<<t<<endl;
    else
        cout<<"-1"<<endl;

  return 0;
}
