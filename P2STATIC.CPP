#include<iostream.h>
#include<conio.h>
class Static
{
static int i;
int j;
public:
Static()
{
}
void setj()
{
j=++i;
}
void printj()
{
cout<<"j="<<j<<endl;
}
static void printi()
{
cout<<"i="<<i<<endl;
}
};
setstat(int a)
{
int Static::i=a;
}
void main()
{
clrscr();
int x;
cout<<"Enter the static data member value"<<endl;
cin>>x;
setstat(x);
Static s1,s2;
s1.printi();
s1.printj();
s1.setj();
s1.printj();
s1.printi();
s2.printi();
s2.printj();
getch();
}