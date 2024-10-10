Program
#include<iostream>
using namespace std;
int main()
{
int data[10],beg,end,mid,i,f,value;
cout<<"\n enter the value: \n";
for(i=1;i<=10;i++)
{
cin>>data[i];
}
cout<<"\n enter the element to search:";
cin>>value;
beg=1;
end=10;
mid=(beg+end)/2;
while(beg<=end)
{
if(data[mid]==value)
{
f=1;
cout<<"\n location:"<<mid;
break;
}
else if(data[mid]<value)
{
beg=mid+1;
}
else
{
end=mid-1;
}
mid=(beg+end)/2;
}
if(f==0)
{
cout<<"\n element is not found";
}
}
