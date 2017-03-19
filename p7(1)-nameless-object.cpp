//Write a program in C++ to create nameless object
#include<iostream.h>
#include<conio.h>
class Nameless
{
int x;
public:
Nameless()
{
cout<<"Default Executed"<<endl;
}
Nameless(int x)
{
this->x=x;
cout<<x<<endl;
}
~Nameless()
{
cout<<"Destructor Executed"<<endl;
}
};
void main()
{
clrscr();
Nameless();
Nameless n1;
Nameless n2;
getch();
}
