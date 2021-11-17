#include<bits/stdc++.h>
using namespace std;
int main()
{
    string stn;
    int arr[26]={},cnt=0;
    getline(cin,stn);

    for(int i=0;i<stn.size();i++)
    {
        if(stn[i]<='z'&&stn[i]>='a')
            arr[stn[i]-'a']=1;
    }
    for(int i=0;i<26;i++)
        if(arr[i]==1)
          cnt++;
    cout<<cnt;
  return 0;
}
