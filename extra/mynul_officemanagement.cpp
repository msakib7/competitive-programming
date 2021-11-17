/*
 Programming By :- Utkarsh Sharma
 Download By :- www.utsengg.blogspot.com
*/

#include<DOS.h>
#include<fstream.h>
#include<conio.h>
#include<string.h>
#include<stdio.h>
int count =0;
class emp
{
char name[40];
char jobdeg[40],phno[20];
float salary,srno;
public:
void getdata(void);
void display(void);
void mod_data();
};
void emp::getdata(void)
{
char ch;
cin.get(ch);
clrscr();
gotoxy(15,10);
cout<<"Add student data";
gotoxy(17,12);
cout<<"Record "<<(++count)<<endl;
gotoxy(1,14);
for(int i=0;i<40;i++)name[i]=' ';
salary=0.0;srno=0.0;
//jobdeg=;phno='asd';
cout<<"Enter the Serial no:-";
 cin>>srno;
cout<<"Enter Name:-";
gets(name);
cout<<"Enter Job designation:-";
gets(jobdeg);
cout<<"Enter Phone number:-";
gets(phno);
cout<<"Enter the Salary:-";
cin>>salary;
cout<<" ";
}
void emp::display(void)
{
clrscr();
gotoxy(15,10);
cout<<"Student Details ";
gotoxy(1,12);
cout<<"Sr. NO:-"<<srno<<endl<<"Name:-"<<name<<endl<<"Salary:-"<<salary<<endl<<"Job designation:-"<<jobdeg<<endl<<"Phone no:-"<<phno;
}
void emp::mod_data(void)
{
char nm[40],jd[40],ph[20];
float sal,sr;
clrscr();
gotoxy(15,8);
cout<<"Modify Employee's data";
char ch=cin.get();cout<<ch;
clrscr();
gotoxy(17,10);
cout<<"Current details are:-";
gotoxy(17,12);
cout<<"Sr. No.:-"<<srno<<endl<<"Name:-"<<name<<endl<<"Job designation:-"<<jobdeg<<endl<<"Salary:-"<<salary<<endl<<"Contact no:-"<<phno;
gotoxy(17,18);
cout<<"Enter the new details";
cout<<" Serial no:-";cin>>sr;
cout<<" Name:-";gets(nm);
cout<<" Job designation:-";gets(jd);
cout<<" Salary:-";cin>>sal;
cout<<" Phone number:-";gets(ph);
if(strlen(nm)!=0)strcpy(name,nm);
if(strlen(jd)!=0)strcpy(jobdeg,jd);
if(strlen(ph)!=0)strcpy(phno,ph);
if(sal>salary||sal<salary)salary=sal;
if(sr>srno||sr<srno)srno=sr;
clrscr();
}
/*

 FULL BUY PROJECT........................................NO AVAILABLE FREE

*/
