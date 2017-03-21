#include<iostream.h>
#include<conio.h>
class Stack
{
int top,size,a[100],e;
public:
Stack()
{
top=-1;
}
void input(int );
void push();
void pop();
void tope();
void print();
};
void Stack::input(int size)
{
this->size=size;
}
void Stack::push()
{
cout<<top<<endl;
if(top>=size-1)
{
cout<<"Overflow condition"<<endl;
}
else
{
top=top+1;
cout<<"Enter the element"<<endl;
cin>>e;
a[top]=e;
cout<<"Element Inserted"<<endl;
}
}
void Stack::pop()
{
if(top==-1)
{
cout<<"Underflow condition"<<endl;
}
else
{
top=top-1;
cout<<"Element removed"<<endl;
}
}
void Stack::tope()
{
cout<<"Top element is"<<a[top]<<endl;
}
void Stack::print()
{
if(top==-1)
{
cout<<"No element to print"<<endl;
}
else
{
for(int m=top;m>=0;m--)
{
cout<<a[m]<<" ";
}
}
}
void main()
{
clrscr();
Stack s;
int size,x;
char y1;
cout<<"Enter the size of the stack"<<endl;
cin>>size;
s.input(size);

do
{
  cout<<"1. Push"<<endl;
  cout<<"2. Pop"<<endl;
  cout<<"3. top"<<endl;
  cout<<"4. Print Stack"<<endl;
  cout<<"Choose any of above option";
  cin>>x;
  switch(x)
   {
    case 1:
    s.push();
    break;
    case 2:
    s.pop();
    break;
    case 3:
    s.tope();
    break;
    case 4:
    s.print();
    break;
    default:
    cout<<"you enter the wrong option"<<endl;
   }
 cout<<"Do you want to continue"<<endl;
 cin>>y1;
}
while(y1=='y' || y1=='Y');
getch();
}
