#include<bits/stdc++.h>
using namespace std;
#define ll long long
int const mxn=10000005;
ll arr[mxn+1];
bool isp[mxn+1];

void seive()
{
    arr[0]=arr[1]=0LL;
    ll sq = sqrt(mxn);
    for(ll i=2;i<=sq;i++){
        if(arr[i]==0){
            arr[i]=i;
            for(ll j=i*i;j<mxn;j+=i){
                if(arr[j]==0)
                    arr[j]=i;
            }
        }
    }
    for(ll i=2;i<mxn;i++){
        if(arr[i]==0)
            arr[i]=i;
        arr[i]+=arr[i-1];
    }
}
int main()
{
    int tc;
    seive();
    cin>>tc;
    while(tc--){
            int n;
            cin>>n;
            cout<<arr[n]<<endl;
    }
  return 0;
}
