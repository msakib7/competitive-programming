#include<bits/stdc++.h>
using namespace std;
int main()
{
    int tc;
    cin>>tc;
    string stn1;
    while(tc--)
    {
        int n,p;
        cin>>n;
        cin>>stn1;
        vector<char>stn2;
        for(int i=0;i<stn1.size();i++)
        {
            stn2.push_back(stn1[i]);
        }
        int ans=0;
        sort(stn1.begin(),stn1.end());
        for(int i=0;i<stn1.size();i++)
        {
            if(stn1[i]!=stn2[i])
                ans++;
        }
        cout<<ans<<endl;
    }
  return 0;
}
