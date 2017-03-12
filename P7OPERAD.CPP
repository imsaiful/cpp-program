#include<iostream.h>
#include<conio.h>
class Complex
{
int real , img;
public:
Complex()
{
real=0;
img=0;
}
void input(real, img)
{
this->real=real;
this->img=img;
}
Complex operator +(Complex c)
{
Complex t;
t.real=real+c.real;
t.img=img+c.img;
retutn t;
}
void show()
{
cout<<real<<"+"<<img<<"i"<<endl;
}
void main()
{
clrscr();
Complex c1,c2,c3;
c3=c1+c2;
c1.show();
c2.show();
cout<<"Your addition is"<<endl;
c3.show();
getch();
}