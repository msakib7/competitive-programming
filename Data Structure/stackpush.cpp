#include<bits/stdc++.h>
using namespace std;
int stk[100];
int top=99,rot=0;
void stkpush(int data)
{
    stk[top]=data;
    top--;
    rot++;
    //cout<<"top: "<<top<<" rot: "<<rot<<endl;;
}
void pop()
{
    if(rot-1<=0)
    {
        cout<<"No element to pop() please push."<<endl;
       rot=0;
       top=99;
    }
    else
        {
            rot--;
            top++;
        }
}
void display()
{
    if(rot==0)
    {
        cout<<"Stk Empty"<<endl;
    }
    else
    {
        for(int i=100-rot;i<100;i++)
            cout<<stk[i]<<" ";
        cout<<endl;
    }
}
int main()
{
    stkpush(11);
    stkpush(22);
    stkpush(33);
    stkpush(44);
    stkpush(55);
    cout<<"my stk: ";
    display();
    pop();
    cout<<"poped : ";
    display();
    stkpush(111);
    display();
    stkpush(333);
    display();
    pop();
    pop();
    pop();
    cout<<"3rd poped: ";
    display();
    pop();
    pop();
    pop();
    display();
    stkpush(555);
    display();

 return 0;
}
