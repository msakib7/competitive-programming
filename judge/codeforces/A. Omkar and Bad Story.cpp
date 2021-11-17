#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define pb push_back
#define yes "Yes"
#define no "No"
int main()
{
    int tc;
    cin>>tc;
    while(tc--)
    {
        int n;
        cin>>n;
        bool flg=1;
        for(int i=0;i<n;i++)
        {
            int x;cin>>x;
            if(x<0)
                flg=0;
        }
        if(flg==0)
        {
            cout<<no<<endl;
            continue;
        }
        cout<<yes<<endl;
        cout<<"300"<<endl;
        for(int i=0;i<300;i++)
            cout<<i<<" ";

            cout<<endl;
    }
   return 0;
}
