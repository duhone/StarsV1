#include <math.h>
#include <conio.h>
#include <graphics.h>
#include <stdlib.h>
#include <time.h>
#include <fstream.h>
#include <stdio.h>
#include <dos.h>


class dgstar
{
 private:
  int x,y;
  int xf,yf,xp,yp;
  float length;
  double angle;
 public:
  dgstar()
   {
   length = 0.4;
   x = random(640);
   y = random(350);
   if(x == 320)
    x = 321;
   if(y == 175)
    y = 176;
   xf = x - 320;
   yf = y - 175;
   if(xf > 0)
    angle = atan((1.8*yf)/xf);
   else
    angle = 3.14159 + atan((1.8+yf)/xf);
   xf *= 64;
   yf *= 64;
   xp = (cos(angle) * length) * 64;
   yp = (sin(angle) * length) * 64;
  }
 void movestar(int sp)
  {
   xf += (xp*sp);
   yf += (yp*sp);
   x = (xf >> 6) + 320;
   y = (yf >> 6) + 175;
   if(x < 2 || x > 637 || y < 2 || y > 347)
    {
     x = random(90) + 280;
     y = random(50) + 150;
     if(x == 320)
      x = 321;
     if(y == 175)
      y = 176;
     xf = x - 320;
     yf = y - 175;
     if(xf > 0)
      angle = atan((1.8*yf)/xf);
     else
      angle = 3.14159 + atan((1.8+yf)/xf);
     xf *= 64;
     yf *= 64;
     xp = (cos(angle) * length) * 64;
     yp = (sin(angle) * length) * 64;
    }
    putpixel(x,y,8);
   }
};


class lgstar
{
 private:
  int x,y;
  int xf,yf,xp,yp;
  float length;
  double angle;
 public:
  void lgstari()
   {
   length = 0.8;
   x = random(640);
   y = random(350);
   if(x == 320)
    x = 321;
   if(y == 175)
    y = 176;
   xf = x - 320;
   yf = y - 175;
   if(xf > 0)
    angle = atan((1.8*yf)/xf);
   else
    angle = 3.14159 + atan((1.8+yf)/xf);
   xf *= 64;
   yf *= 64;
   xp = cos(angle) * length * 64;
   yp = sin(angle) * length * 64;
  }
 void movestar(int sp)
  {
   xf += (xp*sp);
   yf += (yp*sp);
   x = (xf >> 6) + 320;
   y = (yf >> 6) + 175;
   if(x < 3 || x > 636 || y < 3 || y > 346)
    {
     x = random(90) + 280;
     y = random(50) + 150;
     if(x == 320)
      x = 321;
     if(y == 175)
      y = 176;
     xf = x - 320;
     yf = y - 175;
     if(xf > 0)
      angle = atan((1.8*yf)/xf);
     else
      angle = 3.14159 + atan((1.8+yf)/xf);
     xf *= 64;
     yf *= 64;
     xp = cos(angle) * length * 64;
     yp = sin(angle) * length * 64;
    }
    putpixel(x,y,7);
   }
};

class whtstar
{
 private:
  int x,y;
  int xf,yf,xp,yp;
  float length;
  double angle;
 public:
  void whtstari()
   {
   length = 1.6;
   x = random(640);
   y = random(350);
   if(x == 320)
    x = 321;
   if(y == 175)
    y = 176;
   xf = x - 320;
   yf = y - 175;
   if(xf > 0)
    angle = atan((1.8*yf)/xf);
   else
    angle = 3.14159 + atan((1.8+yf)/xf);
   xf *= 64;
   yf *= 64;
   xp = cos(angle) * length * 64;
   yp = sin(angle) * length * 64;
   }
 void movestar(int sp)
  {
   xf += (xp*sp);
   yf += (yp*sp);
   x = (xf >> 6) + 320;
   y = (yf >> 6) + 175;
   if(x < 4 || x > 635 || y < 4 || y > 345)
    {
     x = random(90) + 280;
     y = random(50) + 150;
      if(x == 320)
      x = 321;
     if(y == 175)
      y = 176;
     xf = x - 320;
     yf = y - 175;
     if(xf > 0)
      angle = atan((1.8*yf)/xf);
     else
      angle = 3.14159 + atan((1.8+yf)/xf);
     xf *= 64;
     yf *= 64;
     xp = cos(angle) * length * 64;
     yp = sin(angle) * length * 64;
     }
    putpixel(x,y,15);
   }
};


class larstar
{
 private:
  int x,y;
  int xf,yf,xp,yp;
  float length;
  double angle;
 public:
  void larstari()
   {
   length = 3.2;
   x = random(640);
   y = random(350);
   if(x == 320)
    x = 321;
   if(y == 175)
    y = 176;
   xf = x - 320;
   yf = y - 175;
   if(xf > 0)
    angle = atan((1.8*yf)/xf);
   else
    angle = 3.14159 + atan((1.8+yf)/xf);
   xf *= 64;
   yf *= 64;
   xp = cos(angle) * length * 64;
   yp = sin(angle) * length * 64;
   }
 void movestar(void *im,int sp)
  {
   xf += (xp*sp);
   yf += (yp*sp);
   x = (xf >> 6) + 320;
   y = (yf >> 6) + 175;
   if(x < 5 || x > 634 || y < 5 || y > 344)
    {
     x = random(90) + 280;
     y = random(50) + 150;
     if(x == 320)
      x = 321;
     if(y == 175)
      y = 176;
     xf = x - 320;
     yf = y - 175;
     if(xf > 0)
      angle = atan((1.8*yf)/xf);
     else
      angle = 3.14159 + atan((1.8+yf)/xf);
     xf *= 64;
     yf *= 64;
     xp = cos(angle) * length * 64;
     yp = sin(angle) * length * 64;
     }
     putimage(x-1,y-1,im,COPY_PUT);
   }
};






extern unsigned _stklen = 653210U;


void main()
{
 int driver,mode,temp,active,visual,ct,speed;
 char buffer;
 ifstream infile("st.cfg");
 infile.get(buffer);
 infile.get(buffer);
 speed = buffer - 48;
 infile.close();
 driver = EGA;
 mode = EGAHI;
 initgraph(&driver,&mode,"\tc\bgi");
 directvideo = 1;
 dgstar backstar[120];
 lgstar midstar[60];
 whtstar forstar[30];
 larstar largestar[15];
 char ch,chspeed[2];
 int abcd;
 abcd = 20;
 unsigned int size;
 void *image;
 size = imagesize(0,0,2,2);
 image = malloc(size);
 setcolor(15);
 circle(1,1,0);
 putpixel(1,1,15);
 getimage(0,0,2,2,image);
  for(ct=0;ct<60;ct++)
   {
    midstar[ct].lgstari();
   }
  for(ct=0;ct<30;ct++)
   {
    forstar[ct].whtstari();
   }
  for(ct=0;ct<15;ct++)
   {
    largestar[ct].larstari();
   }


 active = 0;
 visual = 1;
 randomize();
 while(1 == 1)
  {
  cleardevice();
  for(ct=0;ct<120;ct++)
   {
    backstar[ct].movestar(speed);
   }
   for(ct=0;ct<60;ct++)
   {
    midstar[ct].movestar(speed);
   }
  for(ct=0;ct<30;ct++)
   {
    forstar[ct].movestar(speed);
   }
  for(ct=0;ct<15;ct++)
   {
    largestar[ct].movestar(image,speed);
   }
  if(kbhit() != 0)
    {
    ch = getch();
    if(ch == 27)
     {
     closegraph();
     ofstream outfile("st.cfg");
     buffer = 50;
     outfile.put(buffer);
     buffer = speed + 48;
     outfile.put(buffer);
     buffer = 48;
     outfile.put(buffer);
     outfile.close();
     exit(0);
     }
    if(ch == 0)
     {
     ch = getch();
     if(ch == 72 && speed <= 3)
      { speed += 1;
	abcd = 50;
      }
     if(ch == 80 && speed >= 1)
      { speed -= 1;
	abcd = 50;
      }
     }
    }
   if(abcd >= 1)
    {
     moveto(280,90);
     chspeed[0] = speed + 48;
     chspeed[1] = 0;
     outtext("WARP ");
     outtext(chspeed);
     abcd -= 1;
    }
    temp = active;
    active = visual;
    visual = temp;
    setactivepage(active);
    setvisualpage(visual);
  }



}
