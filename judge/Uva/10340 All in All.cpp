#include<bits/stdc++.h>
using namespace std;
int main()
{
    string stn1,stn2;
    while(cin>>stn1>>stn2)
    {
        int n=stn1.size();
        int j=0;
        for(int i=0;i<stn2.size();i++)
        {
            if(stn1[j]==stn2[i])
                j++;
        }
        if(j==n)
            cout<<"Yes"<<endl;
        else
            cout<<"No"<<endl;

    }
   return 0;
}
