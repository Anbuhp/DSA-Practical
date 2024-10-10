Program
#include<iostream>
using namespace std;
int main()
{
int a[10],i,f=0,value;
cout<<"enter the elements: \n";
for(i=1;i<=10;i++)
{
cin>>a[i];
}
cout<<"enter the element to serach: \n";
cin>>value;
for(i=1;i<=10;i++)
{
if(a[i]==value)
{
cout<<"location:"<<i;
f=1;
break;
}
}
if(f==0)
{
cout<<"element not found";
}
}
