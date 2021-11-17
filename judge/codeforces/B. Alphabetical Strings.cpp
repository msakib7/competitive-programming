#include<bits/stdc++.h>
using namespace std;
int main()
{
    int tc;
    cin>>tc;
    while(tc--)
    {
        string stn;
        cin>>stn;
        int k=-1,ans=0;
        for(int i=0;i<stn.size();i++)
        {
            if(stn[i]=='a')
                {
                    k=i;
                    break;
                }
        }
        if(k==-1)
        {
            cout<<"No"<<endl;
            continue;
        }
        int lf=k-1;
        int rt=k+1;
        char ch='b';
        while(lf>=0||rt<stn.size())
        {
            if(stn[lf]==ch)
            {
                ch++;
                lf--;
            }
            else if(stn[rt]==ch)
            {
                ch++;
                rt++;
            }
            else
            {
                ans=1;
                break;
            }

        }
        if(ans==0)
            cout<<"Yes"<<endl;
        else
            cout<<"No"<<endl;
    }
    return 0;
}
