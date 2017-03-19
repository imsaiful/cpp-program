#include<iostream.h>
#include<conio.h>
#include<string.h>
class Mother
{
char *Mname;
public:
Mother(char *m)
{
strcpy(Mname,m);
}
virtual void show()
{
cout<<"Mother name="<<Mname<<endl;
}
};
class Son:public Mother
{
char *sname;
public:
Son(char * s, char * M):Mother(M)
{
strcpy(sname,s);
}
void show()
{
cout<<"Son name="<<sname<<endl;
}
};
void main()
{
clrscr();
Mother *Mptr;
Son s1("Saiful Hasan","Nasra Parveen");
Mptr=&s1;
Mptr->show();
getch();
}