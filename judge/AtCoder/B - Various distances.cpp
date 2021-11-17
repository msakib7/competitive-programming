#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,x,sum=0,sum2=0,mx=-1;
    vector<int>vec;
    scanf("%d",&n);
    for(int i=0;i<n;i++)
    {
        cin>>x;
        vec.push_back(abs(x));
        sum+=abs(x);
    }
    for(int i=0;i<n;i++)
    {
        sum2+=pow(vec[i],2);
        if(vec[i]>mx)
            mx=vec[i];
    }
    int ans1,ans3;
    double ans2;
    ans1=sum;
    ans2=sqrt(sum2);
    ans3=mx;
    printf("%d\n",ans1);
    printf("%lf\n",ans2);
    printf("%d\n",ans3);
  return 0;
}
