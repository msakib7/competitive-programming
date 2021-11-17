#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,g1=0,g2=0;
    string stn1,stn2;
    cin>>n;
    while(n--)
    {
       string x;
        cin>>x;
        if(x==stn1||stn1=="")
                {
                    stn1=x;
                    g1++;
                }
        else
        {
            stn2=x;
            g2++;
        }
    }
    //cout<<g1<<" "<<g2<<endl;
    if(g1>g2)
        cout<<stn1<<endl;
    else
        cout<<stn2<<endl;

  return 0;
}
