#include<iostream.h>
#include<conio.h>
#include<graphics.h>
#include<math.h>
void main()
{
int gd,gm;
float e,x,y,x1,y1,x2,y2,dx,dy,i;
detectgraph(&gd,&gm);
initgraph(&gd,&gm,"C:\\TC\\BGI");
cout<<"Enter THe x1 and y1:";
cin>>x1>>y1;
cout<<"Enter THe x2and y2:";
cin>>x2>>y2;
dx=abs(x2-x1);
dy=abs(y2-y1);
x=x1;
y=y1;
e=2*dy-dx;
i=1;
read:
putpixel(x,y,RED);
while(e>=0)
{
y=y+1;
e=e-2*dx;
}
x=x+1;
e=e+2*dy;
i=i+1;
if(i<=dx)
{
goto read;
}
getch();
}
