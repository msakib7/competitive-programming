#include<bits/stdc++.h>
using namespace std;
int vlu[30];
int main()
{
    string arr,brr,crr;
    cin>>arr>>brr>>crr;
    for(int i=0;i<arr.size();i++)
        vlu[arr[i]-'A']++;
    for(int i=0;i<brr.size();i++)
        vlu[brr[i]-'A']++;
    for(int i=0;i<crr.size();i++)
        vlu[crr[i]-'A']--;
    for(int i=0;i<26;i++)
    {
        if(vlu[i])
        {
            cout<<"NO"<<endl;
            return 0;
        }
    }
    cout<<"YES"<<endl;

  return 0;

}
