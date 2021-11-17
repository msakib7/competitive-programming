#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin>>n;
    stack<int>stk[n-1];
    for(int i=0;i<n;i++)
    {
        stk[i].push(i);
    }
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<stk.size();j++)
            cout<<stk[i][j]<<" ";
    }

}
