#include<bits/stdc++.h>
using namespace std;
vector<int>v[500];
int main()
{
    int n;
    cin>>n;
    for(int i=0;i<n;i++)
    {
        int x,y;
        cin>>x>>y;
        v[x].push_back(y);
        v[y].push_back(x);
    }
    for(int i=0;i<66;i++)
    {
        cout<<"node "<<i<<" is conect with: ";
        for(int j=0;j<v[i].size();j++)
        {
           cout<<v[i][j]<<" ";
        }
        cout<<endl;
    }
}
/*
16
10 15
15 20
20 25
10 30
30 47
47 50
25 45
45 65
15 35
35 55
20 40
50 55
35 40
55 60
40 60
60 65
*/
