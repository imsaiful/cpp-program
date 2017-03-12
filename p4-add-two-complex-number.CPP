//Write a program in c++ to add two complex number

#include<iostream.h>
#include<conio.h>
class Complex
{
float real,img;
public:
Complex()
{
real=0;
img=0;
}
void input(float , float);
Complex opr(Complex);
void print();
};
void Complex::input(float real, float img)
{
this->real=real;
this->img=img;
}
Complex Complex::opr(Complex o)
{
Complex temp;
temp.real=real+o.real;
temp.img=img+o.img;
return temp;
}
void Complex::print()
{
cout<<real<<"+"<<img<<"i"<<endl;
}
void main()
{
clrscr();
Complex o1,o2,o3;
o1.input(2.3,4.6);
o2.input(4.2,8.5);
o3=o1.opr(o2);
o1.print();
o2.print();
cout<<"Addition is"<<endl;
o3.print();
getch();
}
