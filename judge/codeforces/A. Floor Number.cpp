#include<bits/stdc++.h>
using namespace std;
void stomach()
{
    int n,x;
    cin>>n>>x;
    int a=n%x;
    if(n<3)
        cout<<"1"<<endl;
    else
        cout<<((n+x-3)/x+1)<<endl;
}
int main()
{
    int n;
    cin>>n;
    while(n--)
    {
        stomach();
    }
  return 0;
}
