#include<iostream.h>
#include<conio.h>
class NewOperator
 {
  int x,y;
  public:
  NewOperator()
    {
    x=20;
    y=10;
    }
  void Display()
    {
     cout<<"x="<<x<<endl;
     cout<<"y="<<y<<endl;
    }
  ~NewOperator()
    {
     cout<<"Destructor on fire"<<endl;
    }
};
void main()
{
 clrscr();
 NewOperator *no=new NewOperator();
 no->Display();
 delete no;
 getch();
}