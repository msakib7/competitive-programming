#include<bits/stdc++.h>
using namespace std;
#define ll long long
void solve()
{
    ll n , x; cin >> n >> x;
        vector <ll> v(n);
        for (int i = 0; i < n; i++) cin >> v[i];
        ll sum = 0;
        int cnt = 0;
        for (int i = 0; i < n; i++) {
            sum += v[i];
            if (v[i] % x == 0) cnt++;
        }
        ll ans = 0;
        if (sum % x != 0) {
            cout << n << "\n";
            return ;
        }
        if (cnt == n) {
            cout << "-1\n";
            return ;
        }
        ll tmp = 0;
        for (int i = 0; i < n; i++) {
            tmp += v[i];
            if (tmp % x != 0) {
                ans = n - (i + 1);
                break;
            }
        }
        tmp = 0;
        reverse(v.begin() , v.end());
        for (int i = 0; i < n; i++) {
            tmp += v[i];
            if (tmp % x != 0) {
                ans = max(ans , n - (i + 1));
                break;
            }
        }
        cout << ans << "\n";

  return ;

}
int main()
{
   int tc;
   cin>>tc;
   while(tc--)
   {
       solve();
   }
  return 0;
}
