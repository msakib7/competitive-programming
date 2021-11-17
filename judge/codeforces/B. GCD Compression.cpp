#include<bits/stdc++.h>
using namespace std;
int main()
{
    vector<int>odd,even;
    int tc;
    cin>>tc;
    while(tc--)
    {
        int n,cnt=0;
        cin>>n;
        for(int i=1;i<=n*2;i++)
        {
            int x;
            cin>>x;
            if(x&1)
                odd.push_back(x);
            else
                even.push_back(x);
        }
        for(int i=1;i<odd.size()&&cnt<n-1;i+=2)
        {
            cout<<odd[i-1]<<" "<<odd[i]<<endl;
            cnt++;
        }
        for(int i=1;i<even.size()&&cnt<n-1;i+=2)
        {
            cout<<even[i-1]<<" "<<even[i]<<endl;
            cnt++;
        }
    }
   return 0;
}
