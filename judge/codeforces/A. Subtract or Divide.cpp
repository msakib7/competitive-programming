#include<bits/stdc++.h>
using namespace std;
int main()
{
    int tc;
    cin>>tc;
    while(tc--)
    {
        int x;
        cin>>x;
        if(x==1)
            cout<<"0"<<endl;
        else if(x==2)
            cout<<"1"<<endl;
        else if(x%2==0||x==3)
            cout<<"2"<<endl;
        else
            cout<<"3"<<endl;
    }
  return 0;
}
