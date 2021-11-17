#include<bits/stdc++.h>
using namespace std;
const int mxn=1e6;
vector<int>divsr[mxn];
void divisor()
{
    int cnt=0;
    for(int i=1;i<mxn;i++)
    {
        for(int j=i;j<mxn;j+=i)
        {
            divsr[j].push_back(i);
            cnt++;
        }
    }
}
int main()
{
    divisor();
    int l,r;
    cout<<"enter range: ";
    cin>>l>>r;
    for(int i=l;i<=r;i++)
    {
        cout<<"D of "<<i<< " : ";
        for(int j=0;j<divsr[i].size();j++)
            cout<<divsr[i][j]<<" ";
        cout<<endl;
    }
    cout<<endl;

  return 0;
}
