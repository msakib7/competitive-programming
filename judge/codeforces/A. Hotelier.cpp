#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin>>n;
    string stn;
    cin>>stn;
    int arr[15];
    for(int i=0;i<10;i++)
    {
        arr[i]=0;
    }
    for(int i=0;i<n;i++)
    {
        if(stn[i]=='L')
        {
            int c=0;
            while(c<n)
            {
                if(arr[c]==0)
                    {
                        arr[c]=1;
                        break;
                    }
                c++;
            }
        }
       else if(stn[i]=='R')
        {
            int c=9;
            while(c>=0)
            {
                if(arr[c]==0)
                {
                    arr[c]=1;
                    break;
                }
                c--;
            }
        }
        else
        {
           int c=stn[i]-'0';
           arr[c]=0;
        }
    }
    for(int i=0;i<10;i++)
        cout<<arr[i];
    cout<<endl;

 return 0;
}

