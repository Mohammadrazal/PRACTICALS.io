#include<iosteam.h> 
 #include<conio.h> 
 #include<stdlib.h>
 class stack
{
int a[10],top;
public: 
stack()
{
top=0;
}
void push(void); 
void pop(void);
void display(void);
};
void stack :: push()
{
int i,n;
cout<<"\n enter no. of elements:"; cin>>n;
cout<<"\n enter the elements";
for(i=0;i<n;i++)
{
if(top<10)
{
cin>>a[top++];
}
else
{
cout<<"\n Stack is full"; 
break;
}
}
getch();
}
void stack :: pop()
{
if(top==0)
{
cout<<"\n Stack is empty";
}
else
{
top--;
cout<<a[top]<<" deleted";
}
getch();
}
void stack :: display()
{
int i;
cout<<"\n content of stack"; 
for(i=top-1;i>=0;i--)
cout<<"\n"<<a[i]; getch();
}
void main()
{
stack s; 
int opt;
do
{
clrscr();
cout<<"Stack Operations"; cout<<”\n “;cout<<"\n 1. Push";
cout<<"\n 2. Pop";
cout<<"\n 3. Display";
cout<<"\n 4. Exit";
cout<<"\n Enter your option : "; 
cin>>opt;
switch(opt)
{
case 1:
s.push();
break;
case 2:
s.pop(); 
break;
case 3:
s.display(); 
break;
case 4:
exit(1);
}
}while(opt<=3); getch();
}

