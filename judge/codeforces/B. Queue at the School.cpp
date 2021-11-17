#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,m;
    vector<char>v;
    cin>>n>>m;
    for(int i=0;i<n;i++)
    {
        char x;
        cin>>x;
        v.push_back(x);
    }
    while(m--)
    {
        for(int i=0;i<n;)
        {
            if(v[i]=='B'&&v[i+1]=='G')
                {
                    swap(v[i],v[i+1]);
                    i+=2;
                }
            else
                i++;
        }
    }
    for(auto &it:v) cout<<it;
    cout<<endl;

  return 0;
}
