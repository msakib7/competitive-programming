#include<bits/stdc++.h>
using namespace std;
int main()
{
    string stn;
    cin>>stn;
    if(stn[0]<='z'&&stn[0]>='a')
        stn[0]-=32;
    cout<<stn<<endl;

  return 0;
}
