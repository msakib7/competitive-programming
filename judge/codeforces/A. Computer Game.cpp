/*
  author: msakib
  date  : 16-oct-2021, 23:43
*/
#include<bits/stdc++.h>
using namespace std;
void solve()
{
    int n;
    cin>>n;
    string stn1,stn2;
    cin>>stn1;
    cin>>stn2;
    int flg=0;
    for(int i=1; i<=n; i++)
    {
        if(stn1[i]=='1'&&stn2[i]=='1')
        {
            flg=1;
            break;
        }
    }
    if(flg==0)
        cout<<"YES";
    else
        cout<<"NO";

}
int main()
{
    int tc;
    cin>>tc;
    while(tc--)
    {
        solve();
        cout<<endl;
    }
    return 0;
}
