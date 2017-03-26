#include<iostream.h>
#include<conio.h>
class Complex
{
int a, b;
public:
Complex()
{}
Complex(int x)
{
a=x;
b=0;
}
void input(int x, int y)
{
a=x;
b=y;
}
void show()
{
cout<<a<<"+i"<<b<<endl;
}
};
void main()
{
clrscr();
Complex c1;
int x=5;
c1=x;
c1.show();
getch();



}