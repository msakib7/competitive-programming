#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,ans=0,p=0,c=0;
    cin>>n;
    while(n--)
    {
        int x;
        cin>>x;
        if(x<0)
        {
          if(p>0)
            p--;
          else
            c++;

        }
        if(x>0)
        {
            p+=x;
        }
    }
    cout<<c<<endl;

  return 0;
}
