//Write a program in c++ to swap two number using generic function
#include<iostream.h>
#include<conio.h>
template <class T>
swap(T &a,T &b)
{
a=a+b,b=a-b,a=a-b;
}
void main()
{
clrscr();
int a,b;
cout<<"Enter two integer number"<<endl;
cin>>a>>b;
swap(a,b);
cout<<"First Number="<<a<<endl;
cout<<"Second Number="<<b<<endl;
float c,d;
cout<<"Enter two float number"<<endl;
cin>>c>>d;
swap(c,d);
cout<<"First Number="<<c<<endl;
cout<<"Second Number="<<d<<endl;
getch();
}
