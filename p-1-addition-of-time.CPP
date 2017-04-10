//write-a-program-in-cpp-to-add-two-time-in-hh:mm 
#include<iostream.h>
#include<conio.h>
class Time
{
int h,m;
public:
Time()
{
h=0;
m=0;
}
void setTime(int , int );
void add(Time, Time);
void show();
~Time()
{
cout<<"Destructor Executed"<<endl;
}
};
void Time::setTime(int h,int m)
{
this->h=h;
this->m=m;
}
void Time::add(Time t1,Time t2)
{
int m1=t1.m+t2.m;
int h1=m1/60;
this->m=m1%60;
this->h=t1.h+t2.h+h1;
}
void Time::show()
{
cout<<h<<":"<<m<<endl;
}
void main()
{
clrscr();
Time t1,t2,t3;
t1.setTime(1,10);
t2.setTime(3,25);
t3.add(t1,t2);
t1.show();
t2.show();
cout<<"Addition is"<<endl;
t3.show();
getch();
}
