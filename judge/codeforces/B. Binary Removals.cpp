#include<bits/stdc++.h>
using namespace std;
int main()
{
    int tc,cnt=0;
    string arr;
    cin>>tc;
    while(tc--)
    {
        int flg=0,flg2=0,cnt=0,y;
        cin>>arr;
        for(int i=arr.length()-1;i>0;i--)
        {
            if(arr[i]=='0'&&arr[i-1]=='0')
            {
                y=i-1;
                flg=1;
                break;
            }
        }
        if(flg==0)
                {
                    cout<<"Yes"<<endl;
                    continue;
                }
        for(int i=y;i>0;i--)
        {
            if(arr[i]=='1'&&arr[i-1]=='1')
            {
                flg2=1;
                break;
            }
        }
        if(flg2==0)
            cout<<"Yes"<<endl;
        else
            cout<<"No"<<endl;
    }
  return 0;
}
