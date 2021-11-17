#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    while(cin>>n)
    {
        if(n==0)
            break;
        vector<int>v;
        int x;
        for(int i=0;i<n;i++)
        {
            cin>>x;
            v.push_back(x);
        }
        sort(v.begin(),v.end());
        for(int i=0;i<n;i++)
            {
                cout<<v[i];
                if(i<=n-1)
                    cout<<" ";
            }

         cout<<endl;

    }
  return 0;
}
