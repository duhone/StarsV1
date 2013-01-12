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
  long int xf,yf,xp,yp;
  float length;
  double angle;
 public:
  void dgstari()
   {
   length = 0.0008;
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
   xf *= 524288l;
   yf *= 524288l;
   xp = (cos(angle) * length) * 524288l;
   yp = (sin(angle) * length) * 524288l;
  }
 void movestar(int sp)
  {
   xf += (xp*sp*sp*sp);
   yf += (yp*sp*sp*sp);
   x = (xf >> 19) + 320;
   y = (yf >> 19) + 175;
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
     xf *= 524288l;
     yf *= 524288l;
     xp = (cos(angle) * length) * 524288l;
     yp = (sin(angle) * length) * 524288l;
    }
    putpixel(x,y,13);
   }
};


class lgstar
{
 private:
  int x,y;
  long int xf,yf,xp,yp,xi,yi,size;
  float length;
  double angle;
 public:
  void lgstari()
   {
   length = 0.0012;
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
   xf *= 524288l;
   yf *= 524288l;
   xp = cos(angle) * length * 524288l;
   yp = sin(angle) * length * 524288l;
   xi = xp / 100;
   yi = yp / 100;
   size = 1;
  }
 void movestar(int sp)
  {
   xp += xi;
   yp += yi;
   xf += (xp*sp*sp*sp);
   yf += (yp*sp*sp*sp);
   x = (xf >> 19) + 320;
   y = (yf >> 19) + 175;
   size += (sp*sp*6);
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
     xf *= 524288l;
     yf *= 524288l;
     xp = cos(angle) * length * 524288l;
     yp = sin(angle) * length * 524288l;
     xi = xp / 100;
     yi = yp / 100;
     size = 1;
    }
  if(size < 1000)
    {
    putpixel(x,y,15);
    }
   if(size >= 1000 && size < 2000)
    {
    putpixel(x,y,14);
    }
   if(size >= 2000 && size < 5000)
    {
    putpixel(x,y,13);
    }
   if(size >= 5000 && size < 10000)
    {
    putpixel(x,y,12);
    }
   if(size >= 10000 && size < 20000)
    {
    putpixel(x,y,11);
    }
   if(size >= 20000 && size < 40000l)
    {
    putpixel(x,y,10);
    }
   if(size >= 40000l && size < 80000l)
    {
    putpixel(x,y,9);
    }
   if(size >= 80000l)
    {
    putpixel(x,y,8);
    }
   }
};

class whtstar
{
 private:
  int x,y;
  long int xf,yf,xp,yp,xi,yi,size;
  float length;
  double angle;
 public:
  void whtstari()
   {
   length = 0.0010;
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
   xf *= 524288l;
   yf *= 524288l;
   xp = cos(angle) * length * 524288l;
   yp = sin(angle) * length * 524288l;
   xi = xp / 25;
   yi = yp / 25;
   size = 1;
   }
 void movestar(int sp)
  {
   xp += xi;
   yp += yi;
   xf += (xp*sp*sp*sp);
   yf += (yp*sp*sp*sp);
   x = (xf >> 19) + 320;
   y = (yf >> 19) + 175;
   size += (sp*sp*7);
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
     xf *= 524288l;
     yf *= 524288l;
     xp = cos(angle) * length * 524288l;
     yp = sin(angle) * length * 524288l;
     xi = xp / 25;
     yi = yp / 25;
     size = 1;
     }
 if(size < 1000)
    {
    putpixel(x,y,15);
    }
   if(size >= 1000 && size < 2000)
    {
    putpixel(x,y,14);
    }
   if(size >= 2000 && size < 4000)
    {
    putpixel(x,y,13);
    }
   if(size >= 4000 && size < 6000)
    {
    putpixel(x,y,12);
    }
   if(size >= 6000 && size < 10000)
    {
    putpixel(x,y,11);
    }
   if(size >= 10000 && size < 15000)
    {
    putpixel(x,y,10);
    }
   if(size >= 15000 && size < 20000)
    {
    putpixel(x,y,9);
    }
   if(size >= 20000 && size < 25000)
    {
    putpixel(x,y,8);
    }
   if(size >= 25000 && size < 30000)
    {
    putpixel(x,y,7);
    }
   if(size >= 30000 && size < 40000l)
    {
    putpixel(x,y,6);
    }
   if(size >= 40000l && size < 50000l)
    {
	 putpixel(x,y,5);
    }
	if(size >= 50000l && size < 60000l)
    {
    putpixel(x,y,4);
    }
   if(size >= 60000l && size < 80000l)
    {
    putpixel(x,y,3);
    }
   if(size >= 80000l && size < 120000l)
    {
    putpixel(x,y,2);
    }
   if(size >= 120000l)
    {
    putpixel(x,y,1);
    }
   }
};


class larstar
{
 private:
  int x,y;
  long int xf,yf,xp,yp,xi,yi,size;
  float length;
  double angle;
 public:
  void larstari()
   {
   length = 0.0008;
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
   xf *= 524288l;
   yf *= 524288l;
   xp = cos(angle) * length * 524288l;
   yp = sin(angle) * length * 524288l;
   xi = xp / 5;
   yi = yp / 5;
   size = 1;
   }
 void movestar(void *im[16],int sp)
  {
   xp += xi;
   yp += yi;
   xf += (xp*sp*sp*sp);
   yf += (yp*sp*sp*sp);
   x = (xf >> 19) + 320;
   y = (yf >> 19) + 175;
   size += (sp*sp*9);
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
     xf *= 524288l;
     yf *= 524288l;
     xp = cos(angle) * length * 524288l;
     yp = sin(angle) * length * 524288l;
     xi = xp / 5;
     yi = yp / 5;
     size = 1;
     }
 if(size < 1000)
    {
    putpixel(x,y,15);
    }
   if(size >= 1000 && size < 2000)
    {
    putpixel(x,y,14);
    }
   if(size >= 2000 && size < 3000)
    {
    putpixel(x,y,13);
    }
   if(size >= 3000 && size < 4000)
    {
    putpixel(x,y,12);
    }
   if(size >= 4000 && size < 5000)
    {
    putpixel(x,y,11);
    }
   if(size >= 5000 && size < 6000)
    {
    putpixel(x,y,10);
    }
   if(size >= 6000 && size < 7000)
    {
    putpixel(x,y,9);
    }
   if(size >= 7000 && size < 8000)
    {
    putpixel(x,y,8);
    }
   if(size >= 8000 && size < 10000)
    {
    putpixel(x,y,7);
    }
   if(size >= 10000 && size < 12000)
    {
    putpixel(x,y,6);
    }
   if(size >= 12000 && size < 14000)
    {
    putpixel(x,y,5);
    }
   if(size >= 14000 && size < 16000)
    {
    putpixel(x,y,4);
    }
   if(size >= 16000 && size < 18000)
    {
    putpixel(x,y,3);
    }
   if(size >= 18000 && size < 20000)
    {
    putpixel(x,y,2);
    }
   if(size >= 20000 && size < 22000)
    {
     putimage(x-1,y-1,im[0],COPY_PUT);
    }
   if(size >= 22000 && size < 25000)
    {
     putimage(x-1,y-1,im[1],COPY_PUT);
    }
   if(size >= 25000 && size < 30000)
    {
     putimage(x-1,y-1,im[2],COPY_PUT);
    }
   if(size >= 30000 && size < 35000l)
    {
     putimage(x-1,y-1,im[3],COPY_PUT);
    }
   if(size >= 35000l && size < 40000l)
    {
     putimage(x-1,y-1,im[4],COPY_PUT);
    }
   if(size >= 40000l && size < 50000l)
    {
     putimage(x-1,y-1,im[5],COPY_PUT);
    }
   if(size >= 50000l && size < 60000l)
    {
     putimage(x-1,y-1,im[6],COPY_PUT);
    }
   if(size >= 60000l)
    {
     putimage(x-1,y-1,im[7],COPY_PUT);
    }
   }
};



class slarstar
{
 private:
  int x,y;
  long int xf,yf,xp,yp,xi,yi,size;
  float length;
  double angle;
 public:
  void slarstari()
   {
   length = 0.0006;
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
   xf *= 524288l;
   yf *= 524288l;
   xp = cos(angle) * length * 524288l;
   yp = sin(angle) * length * 524288l;
   xi = xp;
   yi = yp;
   size = 1;
   }
 void movestar(void *im[16],int sp)
  {
   xp += xi;
   yp += yi;
   xf += (xp*sp*sp*sp);
   yf += (yp*sp*sp*sp);
   x = (xf >> 19) + 320;
   y = (yf >> 19) + 175;
   size += (sp*sp*20);
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
     xf *= 524288l;
     yf *= 524288l;
     xp = cos(angle) * length * 524288l;
     yp = sin(angle) * length * 524288l;
     xi = xp;
     yi = yp;
     size = 1;
     }
 if(size < 500)
    {
    putpixel(x,y,15);
    }
   if(size >= 500 && size < 1000)
    {
    putpixel(x,y,14);
    }
   if(size >= 1000 && size < 1500)
    {
    putpixel(x,y,13);
    }
   if(size >= 1500 && size < 2000)
    {
    putpixel(x,y,12);
    }
   if(size >= 2000 && size < 2500)
    {
    putpixel(x,y,11);
    }
   if(size >= 2500 && size < 3000)
    {
    putpixel(x,y,10);
    }
   if(size >= 3000 && size < 3500)
    {
    putpixel(x,y,9);
    }
   if(size >= 3500 && size < 4000)
    {
    putpixel(x,y,8);
    }
   if(size >= 4000 && size < 5000)
    {
    putpixel(x,y,7);
    }
   if(size >= 5000 && size < 6000)
    {
    putpixel(x,y,6);
    }
   if(size >= 6000 && size < 7000)
    {
    putpixel(x,y,5);
    }
   if(size >= 7000 && size < 8000)
    {
    putpixel(x,y,4);
    }
   if(size >= 8000 && size < 9000)
    {
    putpixel(x,y,3);
    }
   if(size >= 9000 && size < 10000)
    {
    putpixel(x,y,2);
    }
   if(size >= 10000 && size < 12000)
    {
     putimage(x-1,y-1,im[0],COPY_PUT);
    }
   if(size >= 12000 && size < 14000)
    {
     putimage(x-1,y-1,im[1],COPY_PUT);
    }
   if(size >= 14000 && size < 16000)
    {
     putimage(x-1,y-1,im[2],COPY_PUT);
    }
   if(size >= 16000 && size < 18000)
    {
     putimage(x-1,y-1,im[3],COPY_PUT);
    }
   if(size >= 18000 && size < 20000)
    {
     putimage(x-1,y-1,im[4],COPY_PUT);
    }
   if(size >= 20000 && size < 25000)
    {
     putimage(x-1,y-1,im[5],COPY_PUT);
    }
   if(size >= 25000 && size < 30000)
    {
     putimage(x-1,y-1,im[6],COPY_PUT);
    }
   if(size >= 30000 && size < 35000l)
    {
     putimage(x-1,y-1,im[7],COPY_PUT);
    }
   if(size >= 35000l && size < 40000l)
    {
     putimage(x-1,y-1,im[8],COPY_PUT);
    }
   if(size >= 40000l && size < 50000l)
    {
     putimage(x-1,y-1,im[9],COPY_PUT);
    }
   if(size >= 50000l && size < 60000l)
    {
     putimage(x-1,y-1,im[10],COPY_PUT);
    }
   if(size >= 60000l && size < 80000l)
    {
     putimage(x-1,y-1,im[11],COPY_PUT);
    }
   if(size >= 80000l && size < 100000l)
    {
     putimage(x-1,y-1,im[12],COPY_PUT);
    }
   if(size >= 100000l && size < 150000l)
    {
     putimage(x-1,y-1,im[13],COPY_PUT);
    }
   if(size >= 150000l && size < 200000l)
    {
     putimage(x-1,y-1,im[14],COPY_PUT);
    }
   if(size >= 200000l)
    {
     putimage(x-1,y-1,im[15],COPY_PUT);
    }
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
 driver = VGA;
 mode = VGAMED;
 initgraph(&driver,&mode,"\tc\bgi");
 directvideo = 1;
 setrgbpalette(1,63,63,63);
 setrgbpalette(2,59,59,60);
 setrgbpalette(3,55,55,57);
 setrgbpalette(4,51,51,54);
 setrgbpalette(5,47,47,51);
 setrgbpalette(20,43,43,48);
 setrgbpalette(7,39,39,45);
 setrgbpalette(56,35,35,42);
 setrgbpalette(57,31,31,39);
 setrgbpalette(58,27,27,36);
 setrgbpalette(59,23,23,33);
 setrgbpalette(60,19,19,30);
 setrgbpalette(61,15,15,27);
 setrgbpalette(62,11,11,24);
 setrgbpalette(63,7,7,21);
 dgstar backstar[320];
 lgstar midstar[160];
 whtstar forstar[80];
 larstar largestar[40];
 slarstar hugestar[20];
 char ch,chspeed[2];
 int abcd;
 abcd = 20;
 unsigned int size;
 void *image[16];
 size = imagesize(0,0,2,2);
 image[0] = malloc(size);
 setcolor(13);
 circle(1,1,0);
 putpixel(1,1,3);
 getimage(0,0,2,2,image[0]);
 size = imagesize(0,0,2,2);
 image[1] = malloc(size);
 setcolor(7);
 circle(1,1,0);
 putpixel(1,1,1);
 getimage(0,0,2,2,image[1]);
 size = imagesize(0,0,4,4);
 image[2] = malloc(size);
 cleardevice();
 setcolor(14);
 circle(2,2,1);
 setcolor(9);
 circle(2,2,0);
 putpixel(2,2,2);
 getimage(0,0,4,4,image[2]);
 size = imagesize(0,0,4,4);
 image[3] = malloc(size);
 setcolor(10);
 circle(2,2,1);
 setcolor(5);
 circle(2,2,0);
 putpixel(2,2,1);
 getimage(0,0,4,4,image[3]);
 size = imagesize(0,0,6,6);
 image[4] = malloc(size);
 cleardevice();
 setcolor(13);
 circle(3,3,2);
 setcolor(9);
 circle(3,3,1);
 setcolor(5);
 circle(3,3,0);
 putpixel(3,3,1);
 getimage(0,0,6,6,image[4]);
 size = imagesize(0,0,6,6);
 image[5] = malloc(size);
 cleardevice();
 setcolor(10);
 circle(3,3,2);
 setcolor(7);
 circle(3,3,1);
 setcolor(4);
 circle(3,3,0);
 putpixel(3,3,1);
 getimage(0,0,6,6,image[5]);
 size = imagesize(0,0,8,8);
 image[6] = malloc(size);
 cleardevice();
 setcolor(13);
 circle(4,4,3);
 setcolor(10);
 circle(4,4,2);
 setcolor(7);
 circle(4,4,1);
 setcolor(4);
 circle(4,4,0);
 putpixel(4,4,1);
 getimage(0,0,8,8,image[6]);
 size = imagesize(0,0,8,8);
 image[7] = malloc(size);
 setcolor(9);
 circle(4,4,3);
 setcolor(7);
 circle(4,4,2);
 setcolor(5);
 circle(4,4,1);
 setcolor(3);
 circle(4,4,0);
 putpixel(4,4,1);
 getimage(0,0,8,8,image[7]);
 size = imagesize(0,0,10,10);
 image[8] = malloc(size);
 cleardevice();
 setcolor(13);
 circle(5,5,4);
 setcolor(11);
 circle(5,5,3);
 setcolor(8);
 circle(5,5,2);
 setcolor(6);
 circle(5,5,1);
 setcolor(3);
 circle(5,5,0);
 putpixel(5,5,1);
 getimage(0,0,10,10,image[8]);
 size = imagesize(0,0,10,10);
 image[9] = malloc(size);
 setcolor(11);
 circle(5,5,4);
 setcolor(9);
 circle(5,5,3);
 setcolor(7);
 circle(5,5,2);
 setcolor(5);
 circle(5,5,1);
 setcolor(3);
 circle(5,5,0);
 putpixel(5,5,1);
 getimage(0,0,10,10,image[9]);
 size = imagesize(0,0,12,12);
 image[10] = malloc(size);
 cleardevice();
 setcolor(14);
 circle(6,6,5);
 setcolor(11);
 circle(6,6,4);
 setcolor(9);
 circle(6,6,3);
 setcolor(7);
 circle(6,6,2);
 setcolor(5);
 circle(6,6,1);
 setcolor(3);
 circle(6,6,0);
 putpixel(6,6,1);
 getimage(0,0,12,12,image[10]);
 size = imagesize(0,0,12,12);
 image[11] = malloc(size);
 setcolor(10);
 circle(6,6,5);
 setcolor(8);
 circle(6,6,4);
 setcolor(7);
 circle(6,6,3);
 setcolor(5);
 circle(6,6,2);
 setcolor(4);
 circle(6,6,1);
 setcolor(2);
 circle(6,6,0);
 putpixel(6,6,1);
 getimage(0,0,12,12,image[11]);
 size = imagesize(0,0,14,14);
 image[12] = malloc(size);
 cleardevice();
 setcolor(14);
 circle(7,7,6);
 setcolor(12);
 circle(7,7,5);
 setcolor(10);
 circle(7,7,4);
 setcolor(8);
 circle(7,7,3);
 setcolor(6);
 circle(7,7,2);
 setcolor(4);
 circle(7,7,1);
 setcolor(2);
 circle(7,7,0);
 putpixel(7,7,1);
 getimage(0,0,14,14,image[12]);
 size = imagesize(0,0,14,14);
 image[13] = malloc(size);
 setcolor(11);
 circle(7,7,6);
 setcolor(10);
 circle(7,7,5);
 setcolor(8);
 circle(7,7,4);
 setcolor(7);
 circle(7,7,3);
 setcolor(5);
 circle(7,7,2);
 setcolor(4);
 circle(7,7,1);
 setcolor(2);
 circle(7,7,0);
 putpixel(7,7,1);
 getimage(0,0,14,14,image[13]);
 size = imagesize(0,0,16,16);
 image[14] = malloc(size);
 cleardevice();
 setcolor(13);
 circle(8,8,7);
 setcolor(11);
 circle(8,8,6);
 setcolor(10);
 circle(8,8,5);
 setcolor(8);
 circle(8,8,4);
 setcolor(7);
 circle(8,8,3);
 setcolor(5);
 circle(8,8,2);
 setcolor(4);
 circle(8,8,1);
 setcolor(2);
 circle(8,8,0);
 putpixel(8,8,1);
 getimage(0,0,16,16,image[14]);
 size = imagesize(0,0,16,16);
 image[15] = malloc(size);
 setcolor(9);
 circle(8,8,7);
 setcolor(8);
 circle(8,8,6);
 setcolor(7);
 circle(8,8,5);
 setcolor(6);
 circle(8,8,4);
 setcolor(5);
 circle(8,8,3);
 setcolor(4);
 circle(8,8,2);
 setcolor(3);
 circle(8,8,1);
 setcolor(2);
 circle(8,8,0);
 putpixel(8,8,1);
 getimage(0,0,16,16,image[15]);
  for(ct=0;ct<320;ct++)
   {
    backstar[ct].dgstari();
   }
  for(ct=0;ct<160;ct++)
   {
    midstar[ct].lgstari();
   }
  for(ct=0;ct<80;ct++)
   {
    forstar[ct].whtstari();
   }
  for(ct=0;ct<40;ct++)
   {
    largestar[ct].larstari();
   }
  for(ct=0;ct<20;ct++)
   {
    hugestar[ct].slarstari();
   }




 active = 0;
 visual = 1;
 randomize();
 while(1 == 1)
  {
  cleardevice();
  for(ct=0;ct<320;ct++)
   {
    backstar[ct].movestar(speed);
   }
   for(ct=0;ct<160;ct++)
   {
    midstar[ct].movestar(speed);
   }
  for(ct=0;ct<80;ct++)
   {
    forstar[ct].movestar(speed);
   }
  for(ct=0;ct<40;ct++)
   {
    largestar[ct].movestar(image,speed);
   }
  for(ct=0;ct<20;ct++)
   {
    hugestar[ct].movestar(image,speed);
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
     if(ch == 72 && speed <= 8)
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
