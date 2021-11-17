#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t,mx=-1;;
    cin>>t;
    char arr[t+5],c,d;
    cin>>arr;
    for(int i=0;i<t-1;i++)
    {
        int cnt=0;
        for(int j=i;j<t-1;j++)
            if(arr[i]==arr[j]&&arr[i+1]==arr[j+1])
              cnt++;
        if(cnt>mx)
        {
            c=arr[i];
            d=arr[i+1];
            mx=cnt;
        }
    }
    cout<<c<<d<<endl;
  return 0;

}
