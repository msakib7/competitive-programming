#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin>>n;
    int r=n*n;
    for(int i=0;i<(n*n)/2;i++)
    {
        cout<<i+1<<" "<<(n*n)-i<<endl;
        r--;
    }

  return 0;
}
