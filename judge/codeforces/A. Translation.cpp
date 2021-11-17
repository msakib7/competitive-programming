#include<bits/stdc++.h>
using namespace std;
int main()
{
    string arr,brr,crr;
    cin>>arr>>brr;
    reverse(arr.begin(),arr.end());
    if(brr==arr)
        cout<<"YES\n";
    else
        cout<<"NO\n";

   return 0;
}
