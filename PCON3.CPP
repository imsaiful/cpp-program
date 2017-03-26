#include<iostream.h>
#include<conio.h>
const pi=3.14;
class Degree
{
int d;
public:
void input(int x)
{
d=x;
}
int getd()
{
return d;
}
};
class Radian
{
float r;
public:
Radian()
{}
Radian(Degree d)
{
float  temp;
temp=d.getd();
r=(temp/180)*pi;
}
void show()
{
cout<<r;
}
};
void main()
{
clrscr();
Degree d;
int m;
cout<<"Enter the angle in degree"<<endl;
cin>>m;
d.input(m);
Radian r;
r=d;
r.show();
getch();
}