#include<bits/stdc++.h>
using namespace std;
int main()
{
    string arr;
    cin>>arr;
    int a=0,b=0;
    for(int i=0;i<arr.size();i++)
    {
        if(arr[i]=='0')
        {
          a++;
          b=0;
        }
        if(arr[i]=='1')
        {
            b++;
            a=0;
        }
        if(a==7||b==7)
        {
            cout<<"YES"<<endl;
            return 0;
        }
    }
    cout<<"NO";
   return 0;
}
