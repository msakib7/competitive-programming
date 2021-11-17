#include<bits/stdc++.h>
using namespace std;
#define spc " "
int main()
{
    int n;
    cin>>n;
    if(n==1)
    {
        cout<<n<<endl;
        return 0;
    }
    cout<<n<<spc;
    for(int i=1;i<n;i++)
        cout<<i<<spc;
   return 0;
}
