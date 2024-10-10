Program
#include <iostream>
using namespace std;
int main()
{
int data[10],i,j,t,n;
cout<<"\n enter the n value:";
cin>>n;
cout<<"\n enter the element to sort:\n";
for(i=0;i<n;i++)
{
cin>>data[i];
}
for(i=0;i<n;i++)
{
for(j=i+1;j<n;j++)
{
if(data[i]>data[j])
{
t=data[i];
data[i]=data[j];
data[j]=t;
}
}
}
cout<<"\n element after sorted \n";
for(i=0;i<n;i++)
{
cout<<data[i]<<"\n";
}
}
