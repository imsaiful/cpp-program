//Write a program to implement virtual destructor
#include<iostream.h>
#include<conio.h>
class A
{
int a;
public:
A()
{}
A(int x)
{
a=x;
}
void show()
{
cout<<"a="<<a<<endl;
}
~A()
{
cout<<"A destroy"<<endl;
}
};
class B:public A
{
int b;
public:
B()
{}
B(int y)
{
b=y;
}
void show()
{
cout<<"b="<<b<<endl;
}
~B()
{
cout<<"B destroy"<<endl;
}
};
void main()
{
clrscr();
A *ptr=new A;
B b1;
ptr=&b1;
delete ptr;
getch();


}
