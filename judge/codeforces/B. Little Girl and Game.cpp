#include<bits/stdc++.h>
using namespace std;
int main()
{
    int arr[26]={0};
    string stn;
    cin>>stn;
    for(int i=0;i<stn.size();i++)
    {
        arr[stn[i]-'a']++;
    }
    int cnt=0;
    for(int i=0;i<26;i++)
    {
        if(arr[i]%2==1)
            cnt++;
    }
    if(cnt==0)
    {
        cout<<"First"<<endl;
        return 0;
    }
    if(cnt==1)
        {
            cout<<"First"<<endl;
            return 0;
        }
    if(cnt%2==0)
        {
            cout<<"Second"<<endl;
            return 0;
        }
     cout<<"First"<<endl;

   return 0;
}
