#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin>>n;
    char x;
    vector<char>v;
    for(int i=0;i<n;i++)
    {
        cin>>x;
        if(x>='A'&&x<='Z')
            x+=32;
        v.push_back(x);
    }
    int arr[26]={};
    for(int i=0;i<v.size();i++)
    {
        arr[v[i]-'a']++;
    }
    for(int i=0;i<26;i++)
    {
        if(arr[i]==0)
           {
               cout<<"NO\n";
               return 0;
           }
    }
    cout<<"YES\n";

   return 0;
}
