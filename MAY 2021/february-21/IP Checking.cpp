#include<bits/stdc++.h>
using namespace std;
void solve(int tc)
{
    int a,b,c,d,a1,b1,c1,d1;
    char ch;
    cin>>a>>ch>>b>>ch>>c>>ch>>d;
    cin>>a1>>ch>>b1>>ch>>c1>>ch>>d1;
    int s1=0,s2=0,s3=0,s4=0,i=0;
    while(a1!=0||b1!=0||c1!=0||d1!=0)
    {
        s1+=(a1%10)*pow(2,i);
        s2+=(b1%10)*pow(2,i);
        s3+=(c1%10)*pow(2,i);
        s4+=(d1%10)*pow(2,i);
        a1/=10,b1/=10,c1/=10,d1/=10;
        i++;
    }
    //cout<<s1<<" "<<s2<<" "<<s3<<" "<<s4<<endl;
    cout<<"Case "<<tc<<": ";
    if(s1==a&&s2==b&&s3==c&&s4==d)
        cout<<"Yes"<<endl;
    else
        cout<<"No"<<endl;

}
int main()
{
    int tc;
    cin>>tc;
    for(int i=1;i<=tc;i++)
    {
        solve(i);
        cout<<endl;
    }
   return 0;
}
