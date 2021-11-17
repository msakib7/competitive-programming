#include<bits/stdc++.h>
using namespace std;
int cnt[500];
int main()
{

    string stn1,stn2;
    getline(cin,stn1);
    getline(cin,stn2);
    for(int i;i<stn1.size();i++)
    {
        cnt[stn1[i]]++;
    }
    for(int i=0;i<stn2.size();i++)
    {
        if(stn2[i]!=' ')
        {
            if(cnt[stn2[i]]<=0)
            {
                cout<<"NO"<<endl;
                return 0;
            }
            cnt[stn2[i]]--;
        }
    }
    cout<<"YES"<<endl;

  return 0;
}
