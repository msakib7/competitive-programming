#include<bits/stdc++.h>
using namespace std;
int main()
{
    int tc;
    cin>>tc;
    while(tc--)
    {
        int n,od=0,evn=0;
        vector<int>v;
        cin>>n;
        for(int i=1;i<=2*n;i++)
        {
            int x;cin>>x;
            v.push_back(x);
            if(x%2==1)
                od++;
            else
                evn++;
        }
        if(od==evn)
            cout<<"Yes"<<endl;
        else
            cout<<"No"<<endl;
    }
   return 0;
}
