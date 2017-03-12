//Write a program in c++ to add two complex number using friend function
#include<iostream.h>
#include<conio.h>
class Complex
{
int real,img;
public:
Complex()
{
real=0;
img=0;
}
void input(int real,int img)
{
this->real=real;
this->img=img;
}
friend Complex opr(Complex , Complx );
void show()
{
cout<<real<<"+"<<img<<"i"<<endl;
}
};
Complex opr(Complex c1, Complex c2)
{
Complex temp;
this->real=c1.real+c2.real;
this->img=c1.img+c2.img;
return temp;
}
void main()
{
clrscr();
Complex c1, c2 , c3;
c1.input(2,3);
c2.input(1,4);
c3=opr(c1,c2);
c1.show();
c2.show();
cout<<"Addition is"<<endl;
c3.show();
getch();
}
