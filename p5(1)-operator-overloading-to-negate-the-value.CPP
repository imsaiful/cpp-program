//Write a program in c++ to negate a value using operator overloading
#include<iostream.h>
#include<conio.h>
class Negate
{
int a;
public:
Negate()
{

}
void input(int );
void operator --()
{
this->a=-a;
}
void show();
};
void Negate::input(int a)
{
this->a=a;
}
void Negate::show()
{
cout<<a<<endl;
}

void main()
{
clrscr();
Negate n1;
int x;
cout<<"Enter the number"<<endl;
cin>>x;
n1.input(x);
cout<<"Your number is=";
n1.show();
--n1;
cout<<"Number negation is=";
n1.show();
getch();
}
