#include<bits/stdc++.h>
using namespace std;
#define pb push_back
int main()
{
    vector<int>v={11,6,76,49,28,20,57,152,5,32};
    sort(v.begin(),v.end());
    for(int i=0;i<=10;i++)
            cout<<v[i]<<" ";
    cout<<endl;
    int lo=lower_bound(v.begin(),v.end(),5)-v.begin();
    int hi=upper_bound(v.begin(),v.end(),10)-v.begin();
    cout<<"low "<<lo<<" "<<"high "<<hi<<endl;
}

