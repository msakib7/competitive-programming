#include<bits/stdc++.h>
using namespace std;
void solve(int tc)
{
    string stn1,stn2;
    int arr[26],brr[26];
    for(int i=1;i<=26;i++)
    {
        arr[i]=0;
        brr[i]=0;
    }
    cin>>stn1>>stn2;
    for(int i=0;i<stn1.size();i++)
    {
        if(isupper(stn1[i]))
            stn1[i]=tolower(stn1[i]);
        if(stn1[i]==' ')
                continue;
    }
    if(int i=0;i<stn2.size();i++)
    {
        if(isupper(stn2[i]))
            stn2[i]=tolower(stn2[i])
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
