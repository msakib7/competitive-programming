#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin>>n;
    int i=2;
    while(n>1)
    {
        cout<<n<<" ";
        n/=i;
        i++;
    }
    if(n>=1)
        cout<<n;
    cout<<endl;
   return 0;
}
