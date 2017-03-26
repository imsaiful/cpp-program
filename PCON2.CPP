#include<iostream.h>
#include<conio.h>
class Foot
{
float m;
public:
void input(int m)
{
this->m=m;
}
operator float()
{
return m*12;
}
};
void main()
{
clrscr();
Foot f;
int a;
cout<<"Enter the value in meter"<<endl;
cin>>a;
f.input(a);
float y;
y=f;
cout<<a<<" foot="<<y<<" inch"<<endl;
getch();
}