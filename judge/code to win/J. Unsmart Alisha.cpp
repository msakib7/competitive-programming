#include<bits/stdc++.h>
using namespace std;
void solve(int tc)
{
    string arr;
    int len,brr[11]={0};
    cin>>arr;
    len=arr.length();
    cout<<"Case "<<tc<<":"<<endl;
    for(int i=0;i<len;i++)
    {
        if(arr[i]=='a'||arr[i]=='A')
            cout<<"2-1 times"<<endl;
        if(arr[i]=='b'||arr[i]=='B')
            cout<<"2-2 times"<<endl;
        if(arr[i]=='c'||arr[i]=='C')
            cout<<"2-3 times"<<endl;
        if(arr[i]=='d'||arr[i]=='D')
            cout<<"3-1 times"<<endl;
        if(arr[i]=='e'||arr[i]=='E')
            cout<<"3-2 times"<<endl;
        if(arr[i]=='f'||arr[i]=='F')
            cout<<"3-3 times"<<endl;
        if(arr[i]=='g'||arr[i]=='G')
            cout<<"4-1 times"<<endl;
        if(arr[i]=='h'||arr[i]=='H')
            cout<<"4-2 times"<<endl;
        if(arr[i]=='i'||arr[i]=='I')
            cout<<"4-3 times"<<endl;
        if(arr[i]=='j'||arr[i]=='J')
            cout<<"5-1 times"<<endl;
        if(arr[i]=='k'||arr[i]=='K')
            cout<<"5-2 times"<<endl;
        if(arr[i]=='l'||arr[i]=='L')
            cout<<"5-3 times"<<endl;
        if(arr[i]=='m'||arr[i]=='M')
            cout<<"6-1 times"<<endl;
        if(arr[i]=='n'||arr[i]=='N')
            cout<<"6-2 times"<<endl;
        if(arr[i]=='o'||arr[i]=='O')
            cout<<"6-3 times"<<endl;
        if(arr[i]=='p'||arr[i]=='P')
            cout<<"7-1 times"<<endl;
        if(arr[i]=='q'||arr[i]=='Q')
            cout<<"7-2 times"<<endl;
        if(arr[i]=='r'||arr[i]=='R')
            cout<<"7-3 times"<<endl;
        if(arr[i]=='s'||arr[i]=='S')
            cout<<"7-4 times"<<endl;
        if(arr[i]=='t'||arr[i]=='T')
            cout<<"8-1 times"<<endl;
        if(arr[i]=='u'||arr[i]=='U')
            cout<<"8-2 times"<<endl;
        if(arr[i]=='v'||arr[i]=='V')
            cout<<"8-3 times"<<endl;
        if(arr[i]=='w'||arr[i]=='W')
            cout<<"9-1 times"<<endl;
        if(arr[i]=='x'||arr[i]=='X')
            cout<<"9-2 times"<<endl;
        if(arr[i]=='y'||arr[i]=='Y')
            cout<<"9-3 times"<<endl;
        if(arr[i]=='z'||arr[i]=='Z')
            cout<<"9-4 times"<<endl;
        if(arr[i]=='.')
            cout<<"1-1 times"<<endl;
        if(arr[i]==',')
            cout<<"1-2 times"<<endl;
        if(arr[i]=='@')
            cout<<"1-3 times"<<endl;
        if(arr[i]=='#')
            cout<<"#-1 times"<<endl;
        if(arr[i]=='*')
            cout<<"*-1 times"<<endl;
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
