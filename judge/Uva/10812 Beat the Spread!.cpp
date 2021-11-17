#include<bits/stdc++.h>
using namespace std;
int main()
{
    int tc;
    cin>>tc;
    while(tc--)
    {
        int x,y,a,b;
        cin>>x>>y;
        if(x<y||(x+y)%2==1||x<0||y<0)
        {
            cout<<"impossible"<<endl;
            continue;
        }
        a=(x+y)/2;
        b=(x-y)/2;
        cout<<a<<" "<<b<<endl;
    }
  return 0;
}
