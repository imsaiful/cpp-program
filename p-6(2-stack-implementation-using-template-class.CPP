#include<iostream.h>
#include<conio.h>
template<class t>
class Stack
{
int top,size;
t a[100],e;
public:
Stack()
{
top=-1;
}
void input(int size)
{
this->size=size;
}
void push()
{
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
void pop()
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
void tope()
{
cout<<"Top element is"<<a[top]<<endl;
}
void print();
};
void Stack<int>::print( )
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
int size,x;
char y1;
cout<<"Enter the size of the stack"<<endl;
cin>>size;
Stack <int>s;
s.input(size);
do
{
  cout<<"1. Push"<<endl;
  cout<<"2. Pop"<<endl;
  cout<<"3. top"<<endl;
  cout<<"4. Print Stack"<<endl;
  cout<<"Choose any of above option :";
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
 cout<<"Do you want to continue Press y or Y"<<endl;
 cin>>y1;
}
while(y1=='y' || y1=='Y');
getch();
}
