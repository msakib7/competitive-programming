#include<bits/stdc++.h>
using namespace std;
int arr[30];
string stn;
int main()
{
    int tc,max;
    cin>>tc;
    getchar();
    while(tc--)
    {
        for(int i='a';i<='z';i++)
                arr[i]=0;
        max=0;
        getline(cin,stn);
        for(int i=0;stn[i];i++)
        {
            if((stn[i]<='Z'&&stn[i]>='A')||(stn[i]<='z'&&stn[i]>='a'))
            {
                if(stn[i]<='Z'&&stn[i]>='A')
                   stn[i]+=32;
                if(++arr[stn[i]]>max)
                    max=arr[stn[i]];
            }
        }
        for(int i='a';i<='z';i++)
            if(arr[i]==max)
            printf("%c",i);
        cout<<endl;
    }
  return 0;
}
