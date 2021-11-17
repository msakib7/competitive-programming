#include<bits/stdc++.h>
using namespace std;
int main()
{
    int tc;
    cin>>tc;
    while(tc--)
    {
        int rw,cl;
        cin>>rw>>cl;
        for(int i=1;i<=rw;i++)
        {
            for(int j=1;j<=cl;j++)
            {
                if((j==1||j==cl)&&i%2==1)
                    cout<<"1";
                else if((i==1||i==rw)&&j%2==1)
                    cout<<"1";
                else
                    cout<<"0";
            }
            cout<<endl;
        }
    }



  return 0;
}
