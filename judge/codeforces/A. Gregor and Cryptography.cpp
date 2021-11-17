#include<bits/stdc++.h>
using namespace std;
int main()
{
    int tc;
    cin>>tc;
    while(tc--)
    {
        int n;
        cin>>n;
        if(n%2!=0)
        {
            n--;
        }
        cout<<"2 "<<n<<endl;
    }
   return 0;
}
