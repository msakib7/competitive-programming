#include<bits/stdc++.h>
using namespace std;
void solve(int tc)
{
    char ch;
    string stn1,stn2;
    getline(cin,stn1);
    cin>>ch;
    getline(cin,stn2);
    for(int i=0;i<stn1.size();i++)
    {
        if(isupper(stn1[i]))
            {
                stn1[i]+=32;
            }
        if(stn1[i]==' ')
                continue;
    }
    for(int i=0;i<stn2.size();i++)
    {
        if(isupper(stn2[i]))
            {
                stn2[i]+=32;
            }
        if(stn2[i]==' ')
                continue;
    }
    cout<<stn1<<endl<<stn2<<endl;

}
int main()
{
    int n;
    cin>>n;
    for(int i=1;i<=n;i++)
    {
        solve(i);
        cout<<endl;
    }
   return 0;
}
