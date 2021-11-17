#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n,m,x,ans;
    map<int,int> mp;
    map<int,int> :: iterator it;
    while(1){
        cin>>n>>m;
        if(n==0&&m==0) break;
        ans=0;
        while(n--){
            cin>>x;
            mp[x]++;
        }
        while(m--){
            cin>>x;
            mp[x]++;
        }
        for(it=mp.begin();it!=mp.end();it++){
            if(it->second==2)
                {
                    ans++;
                    cout<<"it"<<it->first<<" "<<it->second<<endl;
                }
            cout<<it->first<<" "<<it->second<<endl;
        }
        mp.clear();
        cout<<ans<<endl;
    }
    return 0;
}
