//Write a program in c++ to implement friend function in more than one class
#include<iostream.h>
#include<conio.h>
class Mean2;
class Mean1
{
int a,b;
public:
Mean1()
{
a=0;
b=0;
}
void input(int a, int b)
{
this->a=a;
this->b=b;
}
friend float mean(Mean1, Mean2);
};
class Mean2
{
int a,b;
public:
Mean2()
{
a=0;
b=0;
}
void input(int a,int b)
{
this->a=a;
this->b=b;
}
friend float mean(Mean1, Mean2);
};
float mean(Mean1 m1, Mean2 m2)
{
float s;
s=(m1.a+m1.b+m2.a+m2.b)/4;
return s;
}
void main()
{
clrscr();
Mean1 m1;
Mean2 m2;
m1.input(5,10);
m2.input(25,20);
float m=mean(m1,m2);
cout<<"Mean="<<m;
getch();
}
