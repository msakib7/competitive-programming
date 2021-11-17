#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,flg=0;
    cin>>n;
    while(n!=0)
    {
        //cout<<n<<endl;
        if(n%10==1)
        {
            n/=10;
        }
        else if(n%100==14)
        {
            n/=100;
        }
        else if(n%1000==144||n%1000==114)
        {
            n/=1000;
        }
        else
        {
            flg=1;
            break;
        }
    }
    //cout<<flg<<endl;
    if(flg==1)
    {
        cout<<"NO"<<endl;
    }
    else
        cout<<"YES"<<endl;

  return 0;
}
