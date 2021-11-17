#include<bits/stdc++.h>
using namespace std;
void solve(int ces)
{
    int n,m,a;
    cin>>n>>m;
    printf("Case %d:\n",ces);
    deque<int>dq;
    string x;
    while(m--)
    {
       cin>>x;
       if(x=="pushLeft"){
        cin>>a;
        if(dq.size()>=n){
            cout<<"The queue is full\n";
            continue;
        }
        else{
        dq.push_front(a);
        cout<<"Pushed in left: "<<a<<endl;;
        }
       }
       else if(x=="pushRight"){
        cin>>a;
        if(dq.size()>=n)
        {
            cout<<"The queue is full\n";
            continue;
        }
        else{
        dq.push_back(a);
        cout<<"Pushed in right: "<<a<<endl;;
        }
       }
       else if(x=="popLeft"){
        if(!dq.empty()){
            cout<<"Popped from left: "<<dq.front()<<endl;;
            dq.pop_front();
        }
        else
            cout<<"The queue is empty\n";
       }
       else if(x=="popRight"){
        if(!dq.empty()){
            cout<<"Popped from right: "<<dq.back()<<endl;;
            dq.pop_back();
        }
        else
            cout<<"The queue is empty\n";
       }
     //printf("Size= %d\n",dq.size());

    }
}
int main()
{
    int tc;
    cin>>tc;
    for(int i=1;i<=tc;i++)
    {
        solve(i);
    }
  return 0;
}
