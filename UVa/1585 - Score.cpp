#include<bits/stdc++.h>
using namespace std;
void solve()
{
    char arr[100];
    scanf("%s",&arr);
    int len,a=0,b=0;
    //len=arr.size();
    for(int i=0;i<strlen(arr);i++)
    {
        if(arr[i]=='X')
                a=0;
        else
            a+=1;
        b+=a;
    }
    cout<<b;
}
int main()
{
    int tc;
    cin>>tc;
    while(tc--)
    {
        solve();
        cout<<endl;
    }
   return 0;
}
