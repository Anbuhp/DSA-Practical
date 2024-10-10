Program
#include<iostream>
using namespace std;
class queue
{
int a[5],front,rear;
public:
queue()
{
front=0;
rear=0;
}
void enqueue()
{
if(rear==5)
{
cout<<"\n queue is full";
return;
}
else
{
if(front==0)
front=rear=1;
else
rear=rear+1;
}
cout<<"\n enter the element to insert:";
cin>>a[rear];
}
void dequeue()
{
if(front==0)
{
cout<<" \n queue is empty";
return;
}
cout<<"\n deleted element is:"<<a[front];
if(front==rear)
{
front=rear=0;
}
else
{
front=front+1;
}
}
void display();
};
void queue::display()
{
int i;
if(front==0)
{
cout<<"\n queue element are: \n";
for(i=front;i<=rear;i++)
{
cout<<a[i]<<"\n";
}
}
}
int main()
{
queue ob;
int ch;
do
{
cout<<"\n 1.insert \n 2.delete \n 3.display \n 4.exit \n";
cout<<"enter your choice:";
cin>>ch;
switch(ch)
{
case 1:ob.enqueue();
break;
case 2:ob.dequeue();
break;
case 3:ob.display();
break;
}
}while(ch!=4);
return 0;
}
