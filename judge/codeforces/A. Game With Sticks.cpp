#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,m,a,cnt=0;
    cin>>n>>m;
    while(1)
    {
        cnt++;
        n-=1;m-=1;
        if(n==0||m==0)
            break;
    }
    if(cnt%2==1)
        cout<<"Akshat"<<endl;
    else
        cout<<"Malvika"<<endl;

   return 0;
}
