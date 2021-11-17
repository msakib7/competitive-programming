
#include <iostream>
#include <string>
using namespace std;
void erases(string str)
{

    for(int i=0;i<str.size();i++)
    {
        if(i<5&&i>2)
        {
            i+=5-2;
        }


    }
}

void add(string str,string stn)
{
    str.insert(str.size(),stn);
    cout<<"After insert :";
    cout<<str<<endl;
}

void rplc(string str,string stn)
{
    str.replace(6,5,stn);
    cout<<str<<endl;
}

int main()
{
    string str("Hello World!");
    string stn(" Is firts program");

    cout << "Before all : ";
    cout << str << endl;
    cout<<endl;
    erases(str);
    cout<<endl;
    add(str,stn);
    cout<<endl;
    rplc(str,"Sakib");
    cout<<endl;

    return 0;
}
