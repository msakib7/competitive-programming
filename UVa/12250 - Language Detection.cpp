#include<bits/stdc++.h>
using namespace std;

int main()
{
    string stn;
    int i=1;
    while(cin>>stn)
    {
        if(stn=="#")
            break;
        else
        {
            if(stn=="HELLO")
                printf("Case %d: ENGLISH",i);
            else if(stn=="HOLA")
                printf("Case %d: SPANISH",i);
            else if(stn=="HALLO")
                printf("Case %d: GERMAN",i);
            else if(stn=="BONJOUR")
                printf("Case %d: FRENCH",i);
            else if(stn=="CIAO")
                printf("Case %d: ITALIAN",i);
            else if(stn=="ZDRAVSTVUJTE")
                printf("Case %d: RUSSIAN",i);
            else
                printf("Case %d: UNKNOWN",i);
        }
            printf("\n");
            i++;
    }
  return 0;
}
