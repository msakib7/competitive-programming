#include<bits/stdc++.h>
using namespace std;
int main()
{
    int tc;
    cin>>tc;
    while(tc--)
    {
        int n;
        cin>>n;
        if(n==1)
        {
            cout<<"1"<<" "<<"1"<<endl;
        }
        else
        {
            cout<<"1"<<" "<<n-1<<endl;
        }
    }
   return 0;
}
