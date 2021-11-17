#include<bits/stdc++.h>
using namespace std;
int main()
{
    int cnt=0,n;
    cin>>n;
    string stn;
    while(n--)
    {
        cin>>stn;
        if(stn=="++X"||stn=="X++")
            cnt++;
        else
            cnt--;
    }
    cout<<cnt<<endl;

 return 0;
}
