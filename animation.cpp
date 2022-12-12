#include<iostream>;
#include<conio.h>;
#include<graphics.h>;
#include<stdlib.h>;
#include<dos.h>;
#include<cmath>;
using namespace std;

int main()
{ 
//mountainarray
int arrm[50]={0,300,200,200,200,200,300,240,300,240,380,145,380,145,600,265,600
,265,785,100,785,100,980,230,980,230,1050,180,1050,180,1250,300,0,300,1250,300};
//rectangle
int arre[10]={0,300,1250,300,1250,1000,0,1000,0,300};
initwindow(1250,1000);
int page=0;
int x0,y0;
int gdriver = DETECT,gmode,errorcode;
errorcode=graphresult();
if(errorcode!=0)
{
cout&lt;&lt;&quot;Graphics error:&quot;&lt;&lt;grapherrormsg(errorcode);
cout&lt;&lt;&quot;Press any ket to halt&quot;;
exit(1);
}

float i,j;
setbkcolor(YELLOW);
setcolor(BLUE);
settextstyle(1,HORIZ_DIR,5);
outtextxy(280,300,&quot;SUNRISE &amp; SUNSET&quot;);
while(!kbhit());
for(i=0,j=180;i&lt;=520,j&gt;=55;i+=6.5,j-=2)
{



system(&quot;cls&quot;);
delay(50);
cleardevice();
if(i&lt;=120)
{ setbkcolor(LIGHTBLUE);
setcolor(4);
setfillstyle(1,RED);
circle(i,j,25);
floodfill(i,j,4);

// rectangle for ground
setcolor(LIGHTGREEN);
setfillstyle(1,LIGHTGREEN);
drawpoly(8,arre);
fillpoly(8,arre);
}
else
{setbkcolor(LIGHTCYAN);
setcolor(YELLOW);
setfillstyle(1,YELLOW);
circle(i,j,25);
floodfill(i,j,YELLOW);

// rectangle for ground
setcolor(LIGHTGREEN);
setfillstyle(9,LIGHTGREEN);
drawpoly(8,arre);
fillpoly(8,arre);
}
//moutain

setfillstyle(SOLID_FILL,GREEN);
drawpoly(17,arrm);
fillpoly(17,arrm);

//road
setcolor(LIGHTGRAY);
setfillstyle(SOLID_FILL,DARKGRAY);
line(0,520,1250,520);
line(1250,520,1250,520);
line(1250,600,0,600);
line(0,600,0,500);
floodfill(3,550,LIGHTGRAY);

//mark
int i;
for(i=0;i&lt;1200;i+=100)
{
setcolor(LIGHTGRAY);
setfillstyle(SOLID_FILL,WHITE);
rectangle(50+i,557,100+i,560);
floodfill(51+i,558,LIGHTGRAY);
}

//tree 2
setcolor(6);
setfillstyle(1,6);
rectangle(972,390,985,515);
floodfill(973,391,6);
setcolor(14);
setfillstyle(1,2);


circle(920,430,35);
floodfill(921,431,14);

setcolor(14);
setfillstyle(1,2);
circle(960,435,30);
floodfill(961,436,14);

setcolor(14);
setfillstyle(1,2);
circle(965,380,45);
floodfill(966,381,14);

setcolor(14);
setfillstyle(1,2);
circle(1025,400,40);
floodfill(1026,401,14);

//trees 1
setcolor(6);
setfillstyle(1,6);
rectangle(372,390,385,515);
floodfill(373,391,6);
setcolor(14);
setfillstyle(1,2);
circle(365,380,35);
floodfill(366,381,14);

setcolor(14);
setfillstyle(1,2);



circle(395,400,30);
floodfill(396,401,14);

setcolor(14);
setfillstyle(1,2);
circle(420,430,35);
floodfill(421,431,14);

setcolor(14);
setfillstyle(1,2);
circle(340,420,40);
floodfill(341,421,14);

//building
setcolor(BLUE);
setfillstyle(SOLID_FILL,LIGHTGRAY);
rectangle(52,320,180,515);
floodfill(93,322,BLUE);
int j;
for(j=0;j&lt;150;j=j+30)
{
setcolor(BLACK);
setfillstyle(SOLID_FILL,DARKGRAY);
rectangle(55,330+j,177,340+j);
floodfill(56+j,331+j,BLACK);
}

setcolor(BLUE);
setfillstyle(SOLID_FILL,LIGHTMAGENTA);
rectangle(182,400,300,515);


floodfill(185,405,BLUE);

int n;

for(n=0;n&lt;70;n=n+25)
{

setcolor(BLACK);
setfillstyle(SOLID_FILL,DARKGRAY);
rectangle(184,410+n,298,420+n);
floodfill(185+n,411+n,BLACK);

}
setcolor(BLUE);
setfillstyle(SOLID_FILL,LIGHTGRAY);
rectangle(632,320,740,515);
floodfill(640,345,BLUE);
int o;

for(o=0;o&lt;125;o=o+25)
{
setcolor(BLACK);
setfillstyle(SOLID_FILL,DARKGRAY);
rectangle(634,330+o,738,340+o);
floodfill(635+o,331+o,BLACK);

}

setcolor(BLUE);
setfillstyle(SOLID_FILL,LIGHTBLUE);
rectangle(470,370,630,515);
floodfill(475,375,BLUE);
int m;

for(m=0;m&lt;125;m=m+25)
{


setcolor(BLACK);
setfillstyle(SOLID_FILL,DARKGRAY);
rectangle(472,380+m,628,390+m);
floodfill(473+m,381+m,BLACK);

}
setcolor(BLUE);
setfillstyle(SOLID_FILL,LIGHTBLUE);
rectangle(742,360,830,515);
floodfill(743,361,BLUE);
int p;

for(p=0;p&lt;100;p=p+25)
{

setcolor(BLACK);
setfillstyle(SOLID_FILL,DARKGRAY);
rectangle(744,370+p,828,380+p);
floodfill(745+p,371+p,BLACK);
}
setcolor(BLUE);
setfillstyle(SOLID_FILL,LIGHTGRAY);
rectangle(1100,280,1150,360);
floodfill(1101,281,BLUE);
int q;
for(q=0;q&lt;60;q=q+20)
{
setcolor(BLACK);
setfillstyle(SOLID_FILL,DARKGRAY);
rectangle(1102,285+q,1148,295+q);
floodfill(1103+q,286+q,BLACK);
}
//pavement1


setcolor(DARKGRAY);
setfillstyle(SOLID_FILL,WHITE);
rectangle(0,515,1250,520);
floodfill(5,516,DARKGRAY);

//pavement2
setcolor(DARKGRAY);
setfillstyle(SOLID_FILL,WHITE);
line(1250,600,0,600);
line(1250,605,1250,605);
line(0,605,1250,605);
line(0,605,0,600);
floodfill(5,602,DARKGRAY);
}
float k,l;
for(k=500,l=55;l&lt;=280;k+=0.5,l+=1)
{ system(&quot;cls&quot;);
delay(50);
cleardevice();
if(l&lt;=250)
{

if(l&lt;=150)
{ setbkcolor(7);
setcolor(LIGHTRED);
setfillstyle(1,LIGHTRED);
circle(k,l,25);
floodfill(k,l,LIGHTRED);
}
else if(l&gt;150&amp;&amp;l&lt;250)
{



setbkcolor(8);
setcolor(RED);
setfillstyle(1,4);
circle(k,l,25);
floodfill(k,l,4);
}
//mountain
setfillstyle(SOLID_FILL,GREEN);
drawpoly(17,arrm);
fillpoly(17,arrm);
//ground
setfillstyle(9,GREEN);
drawpoly(8,arre);
fillpoly(8,arre);
//road
setcolor(0);
setfillstyle(SOLID_FILL,DARKGRAY);
line(0,520,1250,520);
line(1250,520,1250,520);
line(1250,600,0,600);
line(0,600,0,500);
floodfill(3,550,0);

//mark
int i;
for(i=0;i&lt;1200;i+=100)
{
setcolor(LIGHTGRAY);
setfillstyle(SOLID_FILL,WHITE);
rectangle(50+i,557,100+i,560);
floodfill(51+i,558,LIGHTGRAY);
}

//tree 2
setcolor(6);
setfillstyle(1,6);
rectangle(972,390,985,515);
floodfill(973,391,6);

setcolor(14);
setfillstyle(1,2);
circle(965,380,45);
floodfill(966,381,14);

setcolor(14);
setfillstyle(1,2);
circle(1025,400,40);
floodfill(1026,401,14);

setcolor(14);
setfillstyle(1,2);
circle(920,430,35);
floodfill(921,431,14);

setcolor(14);
setfillstyle(1,2);
circle(960,435,30);
floodfill(961,436,14);

//trees 1
setcolor(6);


setfillstyle(1,6);
rectangle(372,390,385,515);
floodfill(373,391,6);

setcolor(14);
setfillstyle(1,2);
circle(365,380,35);
floodfill(366,381,14);

setcolor(14);
setfillstyle(1,2);
circle(395,400,30);
floodfill(396,401,14);

setcolor(14);
setfillstyle(1,2);
circle(420,430,35);
floodfill(421,431,14);

setcolor(14);
setfillstyle(1,2);
circle(340,420,40);
floodfill(341,421,14);
//building
setcolor(BLUE);
setfillstyle(SOLID_FILL,LIGHTGRAY);
rectangle(52,320,180,515);
floodfill(93,322,BLUE);

int j;


for(j=0;j&lt;150;j=j+30)
{
setcolor(BLACK);
setfillstyle(SOLID_FILL,DARKGRAY);
rectangle(55,330+j,177,340+j);
floodfill(56+j,331+j,BLACK);

}
setcolor(BLUE);
setfillstyle(SOLID_FILL,LIGHTMAGENTA);
rectangle(182,400,300,515);
floodfill(185,405,BLUE);

int n;
for(n=0;n&lt;70;n=n+25)
{
setcolor(BLACK);
setfillstyle(SOLID_FILL,DARKGRAY);
rectangle(184,410+n,298,420+n);
floodfill(185+n,411+n,BLACK);

}

setcolor(BLUE);
setfillstyle(SOLID_FILL,LIGHTGRAY);
rectangle(632,320,740,515);
floodfill(640,345,BLUE);

int o;
for(o=0;o&lt;125;o=o+25)
{ setcolor(BLACK);
setfillstyle(SOLID_FILL,DARKGRAY);


rectangle(634,330+o,738,340+o);
floodfill(635+o,331+o,BLACK);
}
setcolor(BLUE);
setfillstyle(SOLID_FILL,LIGHTBLUE);
rectangle(470,370,630,515);
floodfill(475,375,BLUE);

int m;

for(m=0;m&lt;125;m=m+25)
{
setcolor(BLACK);
setfillstyle(SOLID_FILL,DARKGRAY);
rectangle(472,380+m,628,390+m);
floodfill(473+m,381+m,BLACK);

}
setcolor(BLUE);
setfillstyle(SOLID_FILL,LIGHTBLUE);
rectangle(742,360,830,515);
floodfill(743,361,BLUE);

int p;
for(p=0;p&lt;100;p=p+25)
{ setcolor(BLACK);

setfillstyle(SOLID_FILL,DARKGRAY);
rectangle(744,370+p,828,380+p);
floodfill(745+p,371+p,BLACK);

}

setcolor(BLUE);

setfillstyle(SOLID_FILL,LIGHTGRAY);
rectangle(1100,280,1150,360);
floodfill(1101,281,BLUE);

int q;
for(q=0;q&lt;60;q=q+20)
{
setcolor(BLACK);
setfillstyle(SOLID_FILL,DARKGRAY);
rectangle(1102,285+q,1148,295+q);
floodfill(1103+q,286+q,BLACK);
}
//pavement1
setcolor(LIGHTGRAY);
setfillstyle(SOLID_FILL,WHITE);
rectangle(0,515,1250,520);
floodfill(5,516,LIGHTGRAY);

//pavement2
setcolor(LIGHTGRAY);
setfillstyle(SOLID_FILL,WHITE);
line(1250,600,0,600);
line(1250,605,1250,605);
line(0,605,1250,605);
line(0,605,0,600);
floodfill(5,602,LIGHTGRAY);
}
else
{
for(i=0;i&lt;=500;i++)

28

{
int x, y;
x=rand()%getmaxx();
y=rand()%getmaxy();
putpixel(x,y/3,15);
}

setcolor(WHITE);
setfillstyle(SOLID_FILL,15);
arc(915,65,67,294,25);
arc(932,65,113,248,25) ;

//mountain
setbkcolor(8);
setcolor(GREEN);
setfillstyle(1,GREEN);
drawpoly(17,arrm);
fillpoly(17,arrm);

//ground
setfillstyle(9,GREEN);
drawpoly(8,arre);
fillpoly(8,arre);

//road
setcolor(LIGHTGRAY);
setfillstyle(SOLID_FILL,DARKGRAY);
line(0,520,1250,520);
line(1250,520,1250,520);
line(1250,600,0,600);
line(0,600,0,500);


floodfill(3,550,LIGHTGRAY);

//mark
int i;
for(i=0;i&lt;1200;i+=100)
{
setcolor(LIGHTGRAY);
setfillstyle(SOLID_FILL,WHITE);
rectangle(50+i,557,100+i,560);
floodfill(51+i,558,LIGHTGRAY);
}
//tree 2
setcolor(6);
setfillstyle(1,6);
rectangle(972,390,985,515);
floodfill(973,391,6);

setcolor(14);
setfillstyle(1,2);
circle(965,380,45);
floodfill(966,381,14);

setcolor(14);
setfillstyle(1,2);
circle(1025,400,40);
floodfill(1026,401,14);

setcolor(14);
setfillstyle(1,2);
circle(920,430,35);


floodfill(921,431,14);

setcolor(14);
setfillstyle(1,2);
circle(960,435,30);
floodfill(961,436,14);

//trees 1
setcolor(6);
setfillstyle(1,6);
rectangle(372,390,385,515);
floodfill(373,391,6);

setcolor(14);
setfillstyle(1,2);
circle(365,380,35);
floodfill(366,381,14);

setcolor(14);
setfillstyle(1,2);
circle(395,400,30);
floodfill(396,401,14);

setcolor(14);
setfillstyle(1,2);
circle(420,430,35);
floodfill(421,431,14);

setcolor(14);
setfillstyle(1,2);
circle(340,420,40);
floodfill(341,421,14);

//building
setcolor(BLUE);
setfillstyle(SOLID_FILL,LIGHTGRAY);
rectangle(52,320,180,515);
floodfill(93,322,BLUE);

int j;
for(j=0;j&lt;150;j=j+30)
{

setcolor(14);
setfillstyle(SOLID_FILL,14);
rectangle(55,330+j,177,340+j);
floodfill(56+j,331+j,14);

}

setcolor(BLUE);
setfillstyle(SOLID_FILL,LIGHTMAGENTA);
rectangle(182,400,300,514);
floodfill(185,405,BLUE);

int n;

for(n=0;n&lt;70;n=n+25)
{

setcolor(14);
setfillstyle(SOLID_FILL,14);
rectangle(184,410+n,298,420+n);
floodfill(185+n,411+n,14);



}

setcolor(BLUE);
setfillstyle(SOLID_FILL,LIGHTGRAY);
rectangle(632,320,740,515);
floodfill(640,345,BLUE);

int o;
for(o=0;o&lt;125;o=o+25)
{
setcolor(14);
setfillstyle(SOLID_FILL,14);
rectangle(634,330+o,738,340+o);
floodfill(635+o,331+o,14);

}

setcolor(BLUE);
setfillstyle(SOLID_FILL,LIGHTBLUE);
rectangle(470,370,630,515);
floodfill(475,375,BLUE);

int m;
for(m=0;m&lt;125;m=m+25)
{

setcolor(14);
setfillstyle(SOLID_FILL,14);
rectangle(472,380+m,628,390+m);
floodfill(473+m,381+m,14);

}



setcolor(BLUE);
setfillstyle(SOLID_FILL,LIGHTBLUE);
rectangle(742,360,830,515);
floodfill(743,361,BLUE);

int p;

for(p=0;p&lt;100;p=p+25)
{

setcolor(14);
setfillstyle(SOLID_FILL,14);
rectangle(744,370+p,828,380+p);
floodfill(745+p,371+p,14);

}

setcolor(BLUE);
setfillstyle(SOLID_FILL,LIGHTGRAY);
rectangle(1100,280,1150,360);
floodfill(1101,281,BLUE);

int q;
for(q=0;q&lt;60;q=q+20)
{
setcolor(14);
setfillstyle(SOLID_FILL,14);
rectangle(1102,285+q,1148,295+q);
floodfill(1103+q,286+q,14);
}
//pavement1
setcolor(LIGHTGRAY);
setfillstyle(SOLID_FILL,WHITE);
rectangle(0,515,1250,520);
floodfill(5,516,LIGHTGRAY);

//pavement2
setcolor(LIGHTGRAY);
setfillstyle(SOLID_FILL,WHITE);
line(1250,600,0,600);
line(1250,605,1250,605);
line(0,605,1250,605);
line(0,605,0,600);
floodfill(5,602,LIGHTGRAY);
getch();
}
}
return 0;
}
