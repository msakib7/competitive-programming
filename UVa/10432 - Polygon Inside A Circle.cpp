#include<bits/stdc++.h>
using namespace std;
int main()
{
    double r,n;
    while(scanf("%lf%lf",&r,&n)==2)
    {
        double ans;
       ans=(n*r*r/2)*sin(2*acos(-1)/n);
       printf("%.3lf\n",ans);
    }
  return 0;
}
