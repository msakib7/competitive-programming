#include<bits/stdc++.h>
using namespace std;
int main()
{
    queue<int>qe;
    qe.push(5);
    qe.push(10);
    qe.push(15);
    qe.push(20);
    //qe.pop();
    cout<<"size "<<qe.size()<<endl;
    cout<<"front "<<qe.front()<<endl;
    cout<<"back "<<qe.back()<<endl;
    while(!qe.empty())
    {
        cout<<qe.front()<<" ";
        qe.pop();
    }
    cout<<endl<<endl;
    cout<<"deque"<<endl;
     cout<<endl;
    deque<int>dq;
    dq.push_back(10);
    dq.push_back(15);
    dq.push_back(20);
    dq.push_front(25);
    dq.push_front(30);
    dq.push_back(35);
    cout<<"size "<<dq.size()<<endl;
    cout<<"front "<<dq.front()<<endl;
    cout<<"back "<<dq.back()<<endl;
    cout<<"at "<<dq.at(0)<<endl;
    while(!dq.empty())
    {
        cout<<dq.front()<<" ";
        dq.pop_front();
    }
    cout<<endl;




}
