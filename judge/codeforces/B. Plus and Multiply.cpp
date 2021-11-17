#include<bits/stdc++.h>
using namespace std;
int main()
{
    int tc;
    cin>>tc;
    while(tc--)
    {
        int n,a,b,x,y,z;
        cin>>n>>a>>b;
        int flg=0,tmp=1;
        for(int i=1;i<=35;i++)
        {
            if(tmp>n)break;
            if((n-tmp)%b==0)flg=1;
            tmp*=a;
        }
        if(flg)
            cout<<"Yes"<<endl;
        else
            cout<<"No"<<endl;
    }
   return 0;
}
