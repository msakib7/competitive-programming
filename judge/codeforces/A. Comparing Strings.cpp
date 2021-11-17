#include<bits/stdc++.h>
using namespace std;
int cnt1[26]={0};
int cnt2[26]={0};
int main()
{
    string stn1,stn2;
    cin>>stn1;
    cin>>stn2;
    if(stn1==stn2)
    {
        cout<<"YES"<<endl;
        return 0;
    }
    if(stn1.size()!=stn2.size())
    {
        cout<<"NO"<<endl;
        return 0;
    }
    vector<int>d;
    for(int i=0;i<stn1.size();i++)
    {
        if(stn1[i]!=stn2[i])
            d.push_back(i);
    }
    if(d.size()!=2)
    {
        cout<<"NO"<<endl;
        return 0;
    }
    if(stn1[d[0]]==stn2[d[1]]&&stn1[d[1]]==stn2[d[0]])
    {
        cout<<"YES"<<endl;
    }
    else
        cout<<"NO"<<endl;
  return 0;
}
