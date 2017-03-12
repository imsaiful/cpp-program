//Write a program in c++ to negate a value using operator overloading
#include<iostream.h>
#include<conio.h>
class Negate
{
int a,b;
public:
Negate()
{

}
void input();
Negate opr();
void show();
};
void Negate::input(int a)
{
this->a=a;
}
Negate opr::operator -()
{
a=-a;
b=-b;
}
void Negate::show()
{
cout<<"a="<<a<<endl;
cout<<"b="<<b<<endl;
}
voi main()
{
clrscr();
Negate n1,n2;
n1.input(2,3);
n1.show();
n2=-n1;
n2.show();
getch();
}
