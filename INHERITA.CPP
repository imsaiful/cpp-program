#include<iostream.h>
#include<conio.h>
class I
{
protected:
int n1,n2;
public:
void input()
{
cout<<"Enter two number"<<endl;
cin>>n1>>n2;
}
};
class AD:public I
{
protected:
int s;
public:
void add()
{
s=n1+n2;
}
};
class SB:public AD
{
protected:
int m;
public:
void minus()
{
m=n1-n2;
}
};
class R:public SB
{
public:
void result()
{
cout<<"Sum="<<s<<endl;
cout<<"Difference="<<m;
}
};
void main()
{
clrscr();
R r;
r.input();
r.add();
r.minus();
r.result();
getch();
}                 f