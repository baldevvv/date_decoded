#include<iostream>
using namespace std;
int main()
{
int i,d,f,m,y,c;
string dt;
cout<<"Enter the date in dd-mm-yyyy format ";
cin>>dt;
for(i=0;i<10;i++)
dt[i]-=48;
d=dt[0]*10+dt[1];
m=dt[3]*10+dt[4];
c=dt[6]*10+dt[7];
y=dt[8]*10+dt[9];
if(m>2)
m-=2;
else if(m==1)
{m=11;y--;}
else if(m==2)
{m=12;y--;}
if(y<0)
{
y+=100;
c--;
}
f=d+((13*m-1)/5)+y+(y/4)+(c/4)-(2*c);
f%=7;
if(f<0)
f+=7;
for(i=0;i<10;i++)
dt[i]+=48;
switch(f)
{
case 1:
cout<<"The Day on "<<dt<<" is Monday"<<endl;
break;
case 2:
cout<<"The Day on "<<dt<<" is Tuesday"<<endl;
break;
case 3:
cout<<"The Day on "<<dt<<" is Wednesday"<<endl;
break;
case 4:
cout<<"The Day on "<<dt<<" is Thursday"<<endl;
break;
case 5:
cout<<"The Day on "<<dt<<" is Friday"<<endl;
break;
case 6:
cout<<"The Day on "<<dt<<" is Saturday"<<endl;
break;
case 0:
cout<<"The Day on "<<dt<<" is Sunday"<<endl;
break;
}
return 0;
}