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
  float x,y;
  float xp,yp;
  float length;
  char type;
 public:
  dgstar()
   {
	type = char(random(3));
	type += 1;
   float angle;
   length = 0.0001;
   x = random(640);
   y = random(350);
   if(x == 320)
    x = 321;
   if(y == 175)
    y = 176;
   x = x - 320;
   y = y - 175;
   if(x > 0)
    angle = atan((1.8*y)/x);
   else
    angle = 3.14159 + atan((1.8+y)/x);
   x = x + 320;
   y = y + 175;
   xp = (cos(angle) * length);
   yp = (sin(angle) * length);
  }
 void movestar(int sp)
  {
   x += (xp*sp*sp*sp*sp);
   y += (yp*sp*sp*sp*sp);
   if(x < 0 || x > 639 || y < 0 || y > 349)
    {
	  type = int(random(3));
	  type += 1;
     float angle;
     x = random(90) + 280;
     y = random(50) + 150;
     if(x == 320)
      x = 321;
     if(y == 175)
      y = 176;
     x = x - 320;
     y = y - 175;
     if(x > 0)
      angle = atan((1.8*y)/x);
     else
      angle = 3.14159 + atan((1.8+y)/x);
     xp = (cos(angle) * length);
     yp = (sin(angle) * length);
     x = x + 320;
     y = y + 175;
    }
    if(type == 1)
     putpixel(x,y,6);
    if(type == 2)
     putpixel(x,y,11);
    if(type == 3)
     putpixel(x,y,15);
   }
};


class lgstar
{
 private:
  float x,y;
  long int size;
  float xp,yp;
  float length;
  unsigned char type;
 public:
  lgstar()
   {
	  type = random(3);
	  type += 1;
   float angle;
   length = 0.0005;
   x = random(640);
   y = random(350);
   if(x == 320)
    x = 321;
   if(y == 175)
    y = 176;
   x = x - 320;
   y = y - 175;
   if(x > 0)
    angle = atan((1.8*y)/x);
   else
    angle = 3.14159 + atan((1.8+y)/x);
   xp = cos(angle) * length;
   yp = sin(angle) * length;
   size = 1;
   x = x + 320;
   y = y + 175;
  }
 void movestar(int sp)
  {
   xp *= (0.0000055*sp*sp*sp*sp) + 1;
   yp *= (0.0000055*sp*sp*sp*sp) + 1;
   x += (xp*sp*sp*sp*sp);
   y += (yp*sp*sp*sp*sp);
   size += (sp*sp);
   if(x < 0 || x > 639 || y < 0 || y > 349)
    {
     type = random(3);
     type += 1;
    float angle;
     x = random(90) + 280;
     y = random(50) + 150;
     if(x == 320)
      x = 321;
     if(y == 175)
      y = 176;
     x = x - 320;
     y = y - 175;
     if(x > 0)
      angle = atan((1.8*y)/x);
     else
      angle = 3.14159 + atan((1.8+y)/x);
     xp = cos(angle) * length;
     yp = sin(angle) * length;
     size = 1;
     x = x + 320;
     y = y + 175;
    }
 if(type == 1)
 {
  if(size < 1000)
    {
    putpixel(x,y,6);
    }
   if(size >= 1000 && size < 2000)
    {
    putpixel(x,y,6);
    }
   if(size >= 2000 && size < 5000)
    {
    putpixel(x,y,6);
    }
   if(size >= 5000 && size < 10000)
    {
    putpixel(x,y,6);
    }
   if(size >= 10000 && size < 20000)
    {
    putpixel(x,y,5);
    }
   if(size >= 20000)
    {
    putpixel(x,y,5);
    }
   }
  if(type == 2)
 {
  if(size < 1000)
    {
    putpixel(x,y,11);
    }
   if(size >= 1000 && size < 2000)
    {
    putpixel(x,y,11);
    }
   if(size >= 2000 && size < 5000)
    {
    putpixel(x,y,11);
    }
   if(size >= 5000 && size < 10000)
    {
    putpixel(x,y,11);
    }
   if(size >= 10000 && size < 20000)
    {
    putpixel(x,y,10);
    }
   if(size >= 20000)
    {
    putpixel(x,y,10);
    }
   }
if(type == 3)
 {
  if(size < 1000)
    {
    putpixel(x,y,15);
    }
   if(size >= 1000 && size < 2000)
    {
    putpixel(x,y,15);
    }
   if(size >= 2000 && size < 5000)
    {
    putpixel(x,y,15);
    }
   if(size >= 5000 && size < 10000)
    {
    putpixel(x,y,14);
    }
   if(size >= 10000 && size < 20000)
    {
    putpixel(x,y,14);
    }
   if(size >= 20000)
    {
    putpixel(x,y,14);
    }
   }
   }
};

class whtstar
{
 private:
  float x,y;
  long int size;
  float xp,yp;
  float length;
  unsigned char type;
 public:
  whtstar()
   {
     type = random(3);
     type += 1;
   float angle;
   length = 0.0005;
   x = random(640);
   y = random(350);
   if(x == 320)
    x = 321;
   if(y == 175)
    y = 176;
   x = x - 320;
   y = y - 175;
   if(x > 0)
    angle = atan((1.8*y)/x);
   else
    angle = 3.14159 + atan((1.8+y)/x);
   xp = cos(angle) * length;
   yp = sin(angle) * length;
   x = x + 320;
   y = y + 175;
   size = 1;
   }
 void movestar(int sp)
  {
   xp *= (0.000011*sp*sp*sp*sp) + 1;
   yp *= (0.000011*sp*sp*sp*sp) + 1;
   x += (xp*sp*sp*sp*sp);
   y += (yp*sp*sp*sp*sp);
   size += (sp*sp*2);
   if(x < 0 || x > 639 || y < 0 || y > 349)
    {
     type = random(3);
     type += 1;
     float angle;
     x = random(90) + 280;
     y = random(50) + 150;
      if(x == 320)
      x = 321;
     if(y == 175)
      y = 176;
     x = x - 320;
     y = y - 175;
     if(x > 0)
      angle = atan((1.8*y)/x);
     else
      angle = 3.14159 + atan((1.8+y)/x);
     xp = cos(angle) * length;
     yp = sin(angle) * length;
     size = 1;
     x = x + 320;
     y = y + 175;
     }
 if(type == 1)
 { if(size < 1000)
    {
    putpixel(x,y,6);
    }
   if(size >= 1000 && size < 2000)
    {
    putpixel(x,y,6);
    }
   if(size >= 2000 && size < 4000)
    {
    putpixel(x,y,6);
    }
   if(size >= 4000 && size < 6000)
    {
    putpixel(x,y,6);
    }
   if(size >= 6000 && size < 10000)
    {
    putpixel(x,y,5);
    }
   if(size >= 10000 && size < 15000)
    {
    putpixel(x,y,5);
    }
   if(size >= 15000 && size < 20000)
    {
    putpixel(x,y,4);
    }
   if(size >= 20000 && size < 25000)
    {
    putpixel(x,y,4);
    }
   if(size >= 25000 && size < 30000)
    {
    putpixel(x,y,4);
    }
   if(size >= 30000 && size < 40000l)
    {
    putpixel(x,y,3);
    }
   if(size >= 40000l && size < 50000l)
    {
    putpixel(x,y,3);
    }
   if(size >= 50000l && size < 60000l)
    {
    putpixel(x,y,2);
    }
   if(size >= 60000l)
    {
    putpixel(x,y,2);
    }
   }
 if(type == 2)
 { if(size < 1000)
    {
    putpixel(x,y,11);
    }
   if(size >= 1000 && size < 2000)
    {
    putpixel(x,y,11);
    }
   if(size >= 2000 && size < 4000)
    {
    putpixel(x,y,11);
    }
   if(size >= 4000 && size < 6000)
    {
    putpixel(x,y,11);
    }
   if(size >= 6000 && size < 10000)
    {
    putpixel(x,y,10);
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
    putpixel(x,y,9);
    }
   if(size >= 25000 && size < 30000)
    {
    putpixel(x,y,9);
    }
   if(size >= 30000 && size < 40000l)
    {
    putpixel(x,y,8);
    }
   if(size >= 40000l && size < 50000l)
    {
    putpixel(x,y,8);
    }
   if(size >= 50000l && size < 60000l)
    {
    putpixel(x,y,7);
    }
   if(size >= 60000l)
    {
    putpixel(x,y,7);
    }
   }
 if(type == 3)
 { if(size < 1000)
    {
    putpixel(x,y,15);
    }
   if(size >= 1000 && size < 2000)
    {
    putpixel(x,y,15);
    }
   if(size >= 2000 && size < 4000)
    {
    putpixel(x,y,15);
    }
   if(size >= 4000 && size < 6000)
    {
    putpixel(x,y,14);
    }
   if(size >= 6000 && size < 10000)
    {
    putpixel(x,y,14);
    }
   if(size >= 10000 && size < 15000)
    {
    putpixel(x,y,14);
    }
   if(size >= 15000 && size < 20000)
    {
    putpixel(x,y,14);
    }
   if(size >= 20000 && size < 25000)
    {
    putpixel(x,y,13);
    }
   if(size >= 25000 && size < 30000)
    {
    putpixel(x,y,13);
    }
   if(size >= 30000 && size < 40000l)
    {
    putpixel(x,y,13);
    }
   if(size >= 40000l && size < 50000l)
    {
    putpixel(x,y,12);
    }
   if(size >= 50000l && size < 60000l)
    {
    putpixel(x,y,12);
    }
   if(size >= 60000l)
    {
    putpixel(x,y,12);
    }
   }
   }
};


class larstar
{
 private:
  float x,y;
  long int size;
  float xp,yp;
  float length;
  unsigned char type;
 public:
  larstar()
   {
     type = random(3);
     type += 1;
   float angle;
   length = 0.0006;
   x = random(640);
   y = random(350);
   if(x == 320)
    x = 321;
   if(y == 175)
    y = 176;
   x = x - 320;
   y = y - 175;
   if(x > 0)
    angle = atan((1.8*y)/x);
   else
    angle = 3.14159 + atan((1.8+y)/x);
   xp = cos(angle) * length;
   yp = sin(angle) * length;
   x = x + 320;
   y = y + 175;
   size = 1;
   }
 void movestar(void *im[48],int sp)
  {
   xp *= (0.000016*sp*sp*sp*sp)+1;
   yp *= (0.000016*sp*sp*sp*sp)+1;
   x += (xp*sp*sp*sp*sp);
   y += (yp*sp*sp*sp*sp);
   size += (sp*sp*3);
   if(x < 0 || x > 639 || y < 0 || y > 349)
    {
     type = random(3);
     type += 1;
     float angle;
     x = random(90) + 280;
     y = random(50) + 150;
     if(x == 320)
      x = 321;
     if(y == 175)
      y = 176;
     x = x - 320;
     y = y - 175;
     if(x > 0)
      angle = atan((1.8*y)/x);
     else
      angle = 3.14159 + atan((1.8+y)/x);
     xp = cos(angle) * length;
     yp = sin(angle) * length;
     x = x + 320;
     y = y + 175;
     size = 1;
     }
 if(type == 1)
 {
 if(size < 1000)
    {
    putpixel(x,y,6);
    }
   if(size >= 1000 && size < 2000)
    {
    putpixel(x,y,6);
    }
   if(size >= 2000 && size < 3000)
    {
    putpixel(x,y,6);
    }
   if(size >= 3000 && size < 4000)
    {
    putpixel(x,y,6);
    }
   if(size >= 4000 && size < 5000)
    {
    putpixel(x,y,5);
    }
   if(size >= 5000 && size < 6000)
    {
    putpixel(x,y,5);
    }
   if(size >= 6000 && size < 7000)
    {
    putpixel(x,y,4);
    }
   if(size >= 7000 && size < 8000)
    {
    putpixel(x,y,4);
    }
   if(size >= 8000 && size < 10000)
    {
    putpixel(x,y,4);
    }
   if(size >= 10000 && size < 12000)
    {
    putpixel(x,y,3);
    }
   if(size >= 12000 && size < 14000)
    {
    putpixel(x,y,3);
    }
   if(size >= 14000 && size < 16000)
    {
    putpixel(x,y,2);
    }
   if(size >= 16000 && size < 18000)
    {
    putpixel(x,y,2);
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
   if(size >= 35000l)
    {
     putimage(x-1,y-1,im[4],COPY_PUT);
    }
 }
 if(type == 2)
 {
 if(size < 1000)
    {
    putpixel(x,y,11);
    }
   if(size >= 1000 && size < 2000)
    {
    putpixel(x,y,11);
    }
   if(size >= 2000 && size < 3000)
    {
    putpixel(x,y,11);
    }
   if(size >= 3000 && size < 4000)
    {
    putpixel(x,y,11);
    }
   if(size >= 4000 && size < 5000)
    {
    putpixel(x,y,10);
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
    putpixel(x,y,9);
    }
   if(size >= 8000 && size < 10000)
    {
    putpixel(x,y,9);
    }
   if(size >= 10000 && size < 12000)
    {
    putpixel(x,y,8);
    }
   if(size >= 12000 && size < 14000)
    {
    putpixel(x,y,8);
    }
   if(size >= 14000 && size < 16000)
    {
    putpixel(x,y,7);
    }
   if(size >= 16000 && size < 18000)
    {
    putpixel(x,y,7);
    }
   if(size >= 18000 && size < 20000)
    {
    putpixel(x,y,7);
    }
   if(size >= 20000 && size < 22000)
    {
     putimage(x-1,y-1,im[16],COPY_PUT);
    }
   if(size >= 22000 && size < 25000)
    {
     putimage(x-1,y-1,im[17],COPY_PUT);
    }
   if(size >= 25000 && size < 30000)
    {
     putimage(x-1,y-1,im[18],COPY_PUT);
    }
   if(size >= 30000 && size < 35000l)
    {
     putimage(x-1,y-1,im[19],COPY_PUT);
    }
   if(size >= 35000l)
    {
     putimage(x-1,y-1,im[20],COPY_PUT);
    }
 }
 if(type == 3)
 {
 if(size < 1000)
    {
    putpixel(x,y,15);
    }
   if(size >= 1000 && size < 2000)
    {
    putpixel(x,y,15);
    }
   if(size >= 2000 && size < 3000)
    {
    putpixel(x,y,15);
    }
   if(size >= 3000 && size < 4000)
    {
    putpixel(x,y,14);
    }
   if(size >= 4000 && size < 5000)
    {
    putpixel(x,y,14);
    }
   if(size >= 5000 && size < 6000)
    {
    putpixel(x,y,14);
    }
   if(size >= 6000 && size < 7000)
    {
    putpixel(x,y,14);
    }
   if(size >= 7000 && size < 8000)
    {
    putpixel(x,y,13);
    }
   if(size >= 8000 && size < 10000)
    {
    putpixel(x,y,13);
    }
   if(size >= 10000 && size < 12000)
    {
    putpixel(x,y,13);
    }
   if(size >= 12000 && size < 14000)
    {
    putpixel(x,y,12);
    }
   if(size >= 14000 && size < 16000)
    {
    putpixel(x,y,12);
    }
   if(size >= 16000 && size < 18000)
    {
    putpixel(x,y,12);
    }
   if(size >= 18000 && size < 20000)
    {
    putpixel(x,y,12);
    }
   if(size >= 20000 && size < 22000)
    {
     putimage(x-1,y-1,im[32],COPY_PUT);
    }
   if(size >= 22000 && size < 25000)
    {
     putimage(x-1,y-1,im[33],COPY_PUT);
    }
   if(size >= 25000 && size < 30000)
    {
     putimage(x-1,y-1,im[34],COPY_PUT);
    }
   if(size >= 30000 && size < 35000l)
    {
     putimage(x-1,y-1,im[35],COPY_PUT);
    }
   if(size >= 35000l)
    {
     putimage(x-1,y-1,im[36],COPY_PUT);
    }
 }
   }
};



class slarstar
{
 private:
  float x,y;
  long int size;
  float xp,yp;
  float length;
  unsigned char type;
 public:
  slarstar()
   {
     type = random(3);
     type += 1;
   float angle;
   length = 0.0008;
   x = random(640);
   y = random(350);
   if(x == 320)
    x = 321;
   if(y == 175)
    y = 176;
   x = x - 320;
   y = y - 175;
   if(x > 0)
    angle = atan((1.8*y)/x);
   else
    angle = 3.14159 + atan((1.8+y)/x);
   xp = cos(angle) * length;
   yp = sin(angle) * length;
   x = x + 320;
   y = y + 175;
   size = 1;
   }
 void movestar(void *im[48],int sp)
  {
   xp *= (0.000022*sp*sp*sp*sp) + 1;
   yp *= (0.000022*sp*sp*sp*sp) + 1;
   x += (xp*sp*sp*sp*sp);
   y += (yp*sp*sp*sp*sp);
   size += (sp*sp*5);
   if(x < 0 || x > 639 || y < 0 || y > 349)
    {
     type = random(3);
     type += 1;
     float angle;
     x = random(90) + 280;
     y = random(50) + 150;
     if(x == 320)
      x = 321;
     if(y == 175)
      y = 176;
     x = x - 320;
     y = y - 175;
     if(x > 0)
      angle = atan((1.8*y)/x);
     else
      angle = 3.14159 + atan((1.8+y)/x);
     xp = cos(angle) * length;
     yp = sin(angle) * length;
     size = 1;
     x = x + 320;
     y = y + 175;
     }
 if(type == 1)
 {
 if(size < 500)
    {
    putpixel(x,y,6);
    }
   if(size >= 500 && size < 1000)
    {
    putpixel(x,y,6);
    }
   if(size >= 1000 && size < 1500)
    {
    putpixel(x,y,6);
    }
   if(size >= 1500 && size < 2000)
    {
    putpixel(x,y,6);
    }
   if(size >= 2000 && size < 2500)
    {
    putpixel(x,y,5);
    }
   if(size >= 2500 && size < 3000)
    {
    putpixel(x,y,5);
    }
   if(size >= 3000 && size < 3500)
    {
    putpixel(x,y,4);
    }
   if(size >= 3500 && size < 4000)
    {
    putpixel(x,y,4);
    }
   if(size >= 4000 && size < 5000)
    {
    putpixel(x,y,4);
    }
   if(size >= 5000 && size < 6000)
    {
    putpixel(x,y,3);
    }
   if(size >= 6000 && size < 7000)
    {
    putpixel(x,y,3);
    }
   if(size >= 7000 && size < 8000)
    {
    putpixel(x,y,2);
    }
   if(size >= 8000 && size < 9000)
    {
    putpixel(x,y,2);
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
   if(size >= 60000l)
    {
     putimage(x-1,y-1,im[11],COPY_PUT);
    }
 }
 if(type == 2)
 {
 if(size < 500)
    {
    putpixel(x,y,11);
    }
   if(size >= 500 && size < 1000)
    {
    putpixel(x,y,11);
    }
   if(size >= 1000 && size < 1500)
    {
    putpixel(x,y,11);
    }
   if(size >= 1500 && size < 2000)
    {
    putpixel(x,y,11);
    }
   if(size >= 2000 && size < 2500)
    {
    putpixel(x,y,10);
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
    putpixel(x,y,9);
    }
   if(size >= 4000 && size < 5000)
    {
    putpixel(x,y,9);
    }
   if(size >= 5000 && size < 6000)
    {
    putpixel(x,y,8);
    }
   if(size >= 6000 && size < 7000)
    {
    putpixel(x,y,8);
    }
   if(size >= 7000 && size < 8000)
    {
    putpixel(x,y,7);
    }
   if(size >= 8000 && size < 9000)
    {
    putpixel(x,y,7);
    }
   if(size >= 9000 && size < 10000)
    {
    putpixel(x,y,7);
    }
   if(size >= 10000 && size < 12000)
    {
     putimage(x-1,y-1,im[16],COPY_PUT);
    }
   if(size >= 12000 && size < 14000)
    {
     putimage(x-1,y-1,im[17],COPY_PUT);
    }
   if(size >= 14000 && size < 16000)
    {
     putimage(x-1,y-1,im[18],COPY_PUT);
    }
   if(size >= 16000 && size < 18000)
    {
     putimage(x-1,y-1,im[19],COPY_PUT);
    }
   if(size >= 18000 && size < 20000)
    {
     putimage(x-1,y-1,im[20],COPY_PUT);
    }
   if(size >= 20000 && size < 25000)
    {
     putimage(x-1,y-1,im[21],COPY_PUT);
    }
   if(size >= 25000 && size < 30000)
    {
     putimage(x-1,y-1,im[22],COPY_PUT);
    }
   if(size >= 30000 && size < 35000l)
    {
     putimage(x-1,y-1,im[23],COPY_PUT);
    }
   if(size >= 35000l && size < 40000l)
    {
     putimage(x-1,y-1,im[24],COPY_PUT);
    }
   if(size >= 40000l && size < 50000l)
    {
     putimage(x-1,y-1,im[25],COPY_PUT);
    }
   if(size >= 50000l && size < 60000l)
    {
     putimage(x-1,y-1,im[26],COPY_PUT);
    }
   if(size >= 60000l)
    {
     putimage(x-1,y-1,im[27],COPY_PUT);
    }
 }
 if(type == 3)
 {
 if(size < 500)
    {
    putpixel(x,y,15);
    }
   if(size >= 500 && size < 1000)
    {
    putpixel(x,y,15);
    }
   if(size >= 1000 && size < 1500)
    {
    putpixel(x,y,15);
    }
   if(size >= 1500 && size < 2000)
    {
    putpixel(x,y,14);
    }
   if(size >= 2000 && size < 2500)
    {
    putpixel(x,y,14);
    }
   if(size >= 2500 && size < 3000)
    {
    putpixel(x,y,14);
    }
   if(size >= 3000 && size < 3500)
    {
    putpixel(x,y,14);
    }
   if(size >= 3500 && size < 4000)
    {
    putpixel(x,y,13);
    }
   if(size >= 4000 && size < 5000)
    {
    putpixel(x,y,13);
    }
   if(size >= 5000 && size < 6000)
    {
    putpixel(x,y,13);
    }
   if(size >= 6000 && size < 7000)
    {
    putpixel(x,y,12);
    }
   if(size >= 7000 && size < 8000)
    {
    putpixel(x,y,12);
    }
   if(size >= 8000 && size < 9000)
    {
    putpixel(x,y,12);
    }
   if(size >= 9000 && size < 10000)
    {
    putpixel(x,y,12);
    }
   if(size >= 10000 && size < 12000)
    {
     putimage(x-1,y-1,im[32],COPY_PUT);
    }
   if(size >= 12000 && size < 14000)
    {
     putimage(x-1,y-1,im[33],COPY_PUT);
    }
   if(size >= 14000 && size < 16000)
    {
     putimage(x-1,y-1,im[34],COPY_PUT);
    }
   if(size >= 16000 && size < 18000)
    {
     putimage(x-1,y-1,im[35],COPY_PUT);
    }
   if(size >= 18000 && size < 20000)
    {
     putimage(x-1,y-1,im[36],COPY_PUT);
    }
   if(size >= 20000 && size < 25000)
    {
     putimage(x-1,y-1,im[37],COPY_PUT);
    }
   if(size >= 25000 && size < 30000)
    {
     putimage(x-1,y-1,im[38],COPY_PUT);
    }
   if(size >= 30000 && size < 35000l)
    {
     putimage(x-1,y-1,im[39],COPY_PUT);
    }
   if(size >= 35000l && size < 40000l)
    {
     putimage(x-1,y-1,im[40],COPY_PUT);
    }
   if(size >= 40000l && size < 50000l)
    {
     putimage(x-1,y-1,im[41],COPY_PUT);
    }
   if(size >= 50000l && size < 60000l)
    {
     putimage(x-1,y-1,im[42],COPY_PUT);
    }
   if(size >= 60000l)
    {
     putimage(x-1,y-1,im[43],COPY_PUT);
    }
 }
   }
};

class ularstar
{
 private:
  float x,y;
  long int size;
  float xp,yp;
  float length;
  unsigned char type;
 public:
  ularstar()
   {
     type = random(3);
     type += 1;
   float angle;
   length = 0.0008;
   x = random(640);
   y = random(350);
   if(x == 320)
    x = 321;
   if(y == 175)
    y = 176;
   x = x - 320;
   y = y - 175;
   if(x > 0)
    angle = atan((1.8*y)/x);
   else
    angle = 3.14159 + atan((1.8+y)/x);
   xp = cos(angle) * length;
   yp = sin(angle) * length;
   x = x + 320;
   y = y + 175;
   size = 1;
   }
 void movestar(void *im[48],int sp)
  {
   xp *= (0.00005*sp*sp*sp*sp) + 1;
   yp *= (0.00005*sp*sp*sp*sp) + 1;
   x += (xp*sp*sp*sp*sp);
   y += (yp*sp*sp*sp*sp);
   size += (sp*sp*20);
   if(x < 0 || x > 639 || y < 0 || y > 349)
    {
     type = random(3);
     type += 1;
     float angle;
     x = random(90) + 280;
     y = random(50) + 150;
     if(x == 320)
      x = 321;
     if(y == 175)
      y = 176;
     x = x - 320;
     y = y - 175;
     if(x > 0)
      angle = atan((1.8*y)/x);
     else
      angle = 3.14159 + atan((1.8+y)/x);
     xp = cos(angle) * length;
     yp = sin(angle) * length;
     size = 1;
     x = x + 320;
     y = y + 175;
     }
 if(type == 1)
 {
 if(size < 500)
    {
    putpixel(x,y,6);
    }
   if(size >= 500 && size < 1000)
    {
    putpixel(x,y,6);
    }
   if(size >= 1000 && size < 1500)
    {
    putpixel(x,y,6);
    }
   if(size >= 1500 && size < 2000)
    {
    putpixel(x,y,6);
    }
   if(size >= 2000 && size < 2500)
    {
    putpixel(x,y,5);
    }
   if(size >= 2500 && size < 3000)
    {
    putpixel(x,y,5);
    }
   if(size >= 3000 && size < 3500)
    {
    putpixel(x,y,4);
    }
   if(size >= 3500 && size < 4000)
    {
    putpixel(x,y,4);
    }
   if(size >= 4000 && size < 5000)
    {
    putpixel(x,y,4);
    }
   if(size >= 5000 && size < 6000)
    {
    putpixel(x,y,3);
    }
   if(size >= 6000 && size < 7000)
    {
    putpixel(x,y,3);
    }
   if(size >= 7000 && size < 8000)
    {
    putpixel(x,y,2);
    }
   if(size >= 8000 && size < 9000)
    {
    putpixel(x,y,2);
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
if(size >= 100000l && size < 120000l)
    {
     putimage(x-1,y-1,im[13],COPY_PUT);
    }
if(size >= 120000l && size < 140000l)
    {
     putimage(x-1,y-1,im[14],COPY_PUT);
    }
if(size >= 140000l)
    {
     putimage(x-1,y-1,im[15],COPY_PUT);
    }
 }
 if(type == 2)
 {
 if(size < 500)
    {
    putpixel(x,y,11);
    }
   if(size >= 500 && size < 1000)
    {
    putpixel(x,y,11);
    }
   if(size >= 1000 && size < 1500)
    {
    putpixel(x,y,11);
    }
   if(size >= 1500 && size < 2000)
    {
    putpixel(x,y,11);
    }
   if(size >= 2000 && size < 2500)
    {
    putpixel(x,y,10);
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
    putpixel(x,y,9);
    }
   if(size >= 4000 && size < 5000)
    {
    putpixel(x,y,9);
    }
   if(size >= 5000 && size < 6000)
    {
    putpixel(x,y,8);
    }
   if(size >= 6000 && size < 7000)
    {
    putpixel(x,y,8);
    }
   if(size >= 7000 && size < 8000)
    {
    putpixel(x,y,7);
    }
   if(size >= 8000 && size < 9000)
    {
    putpixel(x,y,7);
    }
   if(size >= 9000 && size < 10000)
    {
    putpixel(x,y,7);
    }
   if(size >= 10000 && size < 12000)
    {
     putimage(x-1,y-1,im[16],COPY_PUT);
    }
   if(size >= 12000 && size < 14000)
    {
     putimage(x-1,y-1,im[17],COPY_PUT);
    }
   if(size >= 14000 && size < 16000)
    {
     putimage(x-1,y-1,im[18],COPY_PUT);
    }
   if(size >= 16000 && size < 18000)
    {
     putimage(x-1,y-1,im[19],COPY_PUT);
    }
   if(size >= 18000 && size < 20000)
    {
     putimage(x-1,y-1,im[20],COPY_PUT);
    }
   if(size >= 20000 && size < 25000)
    {
     putimage(x-1,y-1,im[21],COPY_PUT);
    }
   if(size >= 25000 && size < 30000)
    {
     putimage(x-1,y-1,im[22],COPY_PUT);
    }
   if(size >= 30000 && size < 35000l)
    {
     putimage(x-1,y-1,im[23],COPY_PUT);
    }
   if(size >= 35000l && size < 40000l)
    {
     putimage(x-1,y-1,im[24],COPY_PUT);
    }
   if(size >= 40000l && size < 50000l)
    {
     putimage(x-1,y-1,im[25],COPY_PUT);
    }
   if(size >= 50000l && size < 60000l)
    {
     putimage(x-1,y-1,im[26],COPY_PUT);
    }
   if(size >= 60000l && size < 80000l)
    {
     putimage(x-1,y-1,im[27],COPY_PUT);
    }
  if(size >= 80000l && size < 100000l)
    {
     putimage(x-1,y-1,im[28],COPY_PUT);
    }
  if(size >= 100000l && size < 120000l)
    {
     putimage(x-1,y-1,im[29],COPY_PUT);
    }
  if(size >= 120000l && size < 140000l)
    {
     putimage(x-1,y-1,im[30],COPY_PUT);
    }
  if(size >= 140000l)
    {
     putimage(x-1,y-1,im[31],COPY_PUT);
    }
 }
 if(type == 3)
 {
 if(size < 500)
    {
    putpixel(x,y,15);
    }
   if(size >= 500 && size < 1000)
    {
    putpixel(x,y,15);
    }
   if(size >= 1000 && size < 1500)
    {
    putpixel(x,y,15);
    }
   if(size >= 1500 && size < 2000)
    {
    putpixel(x,y,14);
    }
   if(size >= 2000 && size < 2500)
    {
    putpixel(x,y,14);
    }
   if(size >= 2500 && size < 3000)
    {
    putpixel(x,y,14);
    }
   if(size >= 3000 && size < 3500)
    {
    putpixel(x,y,14);
    }
   if(size >= 3500 && size < 4000)
    {
    putpixel(x,y,13);
    }
   if(size >= 4000 && size < 5000)
    {
    putpixel(x,y,13);
    }
   if(size >= 5000 && size < 6000)
    {
    putpixel(x,y,13);
    }
   if(size >= 6000 && size < 7000)
    {
    putpixel(x,y,12);
    }
   if(size >= 7000 && size < 8000)
    {
    putpixel(x,y,12);
    }
   if(size >= 8000 && size < 9000)
    {
    putpixel(x,y,12);
    }
   if(size >= 9000 && size < 10000)
    {
    putpixel(x,y,12);
    }
   if(size >= 10000 && size < 12000)
    {
     putimage(x-1,y-1,im[32],COPY_PUT);
    }
   if(size >= 12000 && size < 14000)
    {
     putimage(x-1,y-1,im[33],COPY_PUT);
    }
   if(size >= 14000 && size < 16000)
    {
     putimage(x-1,y-1,im[34],COPY_PUT);
    }
   if(size >= 16000 && size < 18000)
    {
     putimage(x-1,y-1,im[35],COPY_PUT);
    }
   if(size >= 18000 && size < 20000)
    {
     putimage(x-1,y-1,im[36],COPY_PUT);
    }
   if(size >= 20000 && size < 25000)
    {
     putimage(x-1,y-1,im[37],COPY_PUT);
    }
   if(size >= 25000 && size < 30000)
    {
     putimage(x-1,y-1,im[38],COPY_PUT);
    }
   if(size >= 30000 && size < 35000l)
    {
     putimage(x-1,y-1,im[39],COPY_PUT);
    }
   if(size >= 35000l && size < 40000l)
    {
     putimage(x-1,y-1,im[40],COPY_PUT);
    }
   if(size >= 40000l && size < 50000l)
    {
     putimage(x-1,y-1,im[41],COPY_PUT);
    }
   if(size >= 50000l && size < 60000l)
    {
     putimage(x-1,y-1,im[42],COPY_PUT);
    }
   if(size >= 60000l && size < 80000l)
    {
     putimage(x-1,y-1,im[43],COPY_PUT);
    }
   if(size >= 80000l && size < 100000l)
    {
     putimage(x-1,y-1,im[44],COPY_PUT);
    }
   if(size >= 100000l && size < 120000l)
    {
     putimage(x-1,y-1,im[45],COPY_PUT);
    }
   if(size >= 120000l && size < 140000l)
    {
     putimage(x-1,y-1,im[46],COPY_PUT);
    }
   if(size >= 140000l)
    {
     putimage(x-1,y-1,im[47],COPY_PUT);
    }
 }
   }
};



extern unsigned _stklen = 653210U;


void main()
{
 int driver,mode,temp,active,visual,speed;
 unsigned long int ct;
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
 setrgbpalette(2,56,56,57);
 setrgbpalette(3,46,46,48);
 setrgbpalette(4,39,39,42);
 setrgbpalette(5,29,29,33);
 setrgbpalette(20,22,22,27);
 setrgbpalette(7,57,56,56);
 setrgbpalette(56,48,46,46);
 setrgbpalette(57,42,39,39);
 setrgbpalette(58,33,29,29);
 setrgbpalette(59,27,22,22);
 setrgbpalette(60,54,54,53);
 setrgbpalette(61,45,45,43);
 setrgbpalette(62,36,36,33);
 setrgbpalette(63,27,27,23);
 dgstar backstar[600];
 lgstar midstar[300];
 whtstar forstar[150];
 larstar largestar[75];
 slarstar hugestar[35];
 ularstar ultrastar[15];
 char ch,chspeed[2];
 int abcd;
 abcd = 20;
 unsigned int size;
 void *image[48];
 size = imagesize(0,0,2,2);
 image[0] = malloc(size);
 setcolor(6);
 circle(1,1,0);
 putpixel(1,1,2);
 getimage(0,0,2,2,image[0]);
 size = imagesize(0,0,2,2);
 image[1] = malloc(size);
 setcolor(4);
 circle(1,1,0);
 putpixel(1,1,1);
 getimage(0,0,2,2,image[1]);
 size = imagesize(0,0,4,4);
 image[2] = malloc(size);
 cleardevice();
 setcolor(6);
 circle(2,2,1);
 setcolor(4);
 circle(2,2,0);
 putpixel(2,2,2);
 getimage(0,0,4,4,image[2]);
 size = imagesize(0,0,4,4);
 image[3] = malloc(size);                           
 setcolor(5);
 circle(2,2,1);
 setcolor(3);
 circle(2,2,0);
 putpixel(2,2,1);
 getimage(0,0,4,4,image[3]);
 size = imagesize(0,0,6,6);
 image[4] = malloc(size);
 cleardevice();
 setcolor(6);
 circle(3,3,2);
 setcolor(4);
 circle(3,3,1);
 setcolor(3);
 circle(3,3,0);
 putpixel(3,3,1);
 getimage(0,0,6,6,image[4]);
 size = imagesize(0,0,6,6);
 image[5] = malloc(size);
 cleardevice();
 setcolor(5);
 circle(3,3,2);
 setcolor(3);
 circle(3,3,1);
 setcolor(2);
 circle(3,3,0);
 putpixel(3,3,1);
 getimage(0,0,6,6,image[5]);
 size = imagesize(0,0,8,8);
 image[6] = malloc(size);
 cleardevice();
 setcolor(6);
 circle(4,4,3);
 setcolor(5);
 circle(4,4,2);
 setcolor(4);
 circle(4,4,1);
 setcolor(2);
 circle(4,4,0);
 putpixel(4,4,1);
 getimage(0,0,8,8,image[6]);
 size = imagesize(0,0,8,8);
 image[7] = malloc(size);
 setcolor(4);
 circle(4,4,3);
 setcolor(4);
 circle(4,4,2);
 setcolor(3);
 circle(4,4,1);
 setcolor(2);
 circle(4,4,0);
 putpixel(4,4,1);
 getimage(0,0,8,8,image[7]);
 size = imagesize(0,0,10,10);
 image[8] = malloc(size);
 cleardevice();
 setcolor(6);
 circle(5,5,4);
 setcolor(5);
 circle(5,5,3);
 setcolor(4);
 circle(5,5,2);
 setcolor(3);
 circle(5,5,1);
 setcolor(2);
 circle(5,5,0);
 putpixel(5,5,1);
 getimage(0,0,10,10,image[8]);
 size = imagesize(0,0,10,10);
 image[9] = malloc(size);
 setcolor(5);
 circle(5,5,4);
 setcolor(4);
 circle(5,5,3);
 setcolor(4);
 circle(5,5,2);
 setcolor(3);
 circle(5,5,1);
 setcolor(2);
 circle(5,5,0);
 putpixel(5,5,1);
 getimage(0,0,10,10,image[9]);
 size = imagesize(0,0,12,12);
 image[10] = malloc(size);
 cleardevice();
 setcolor(6);
 circle(6,6,5);
 setcolor(5);
 circle(6,6,4);
 setcolor(4);
 circle(6,6,3);
 setcolor(4);
 circle(6,6,2);
 setcolor(3);
 circle(6,6,1);
 setcolor(2);
 circle(6,6,0);
 putpixel(6,6,1);
 getimage(0,0,12,12,image[10]);
 size = imagesize(0,0,12,12);
 image[11] = malloc(size);
 setcolor(5);
 circle(6,6,5);
 setcolor(4);
 circle(6,6,4);
 setcolor(4);
 circle(6,6,3);
 setcolor(3);
 circle(6,6,2);
 setcolor(2);
 circle(6,6,1);
 setcolor(2);
 circle(6,6,0);
 putpixel(6,6,1);
 getimage(0,0,12,12,image[11]);
 size = imagesize(0,0,14,14);
 image[12] = malloc(size);
 cleardevice();
 setcolor(6);
 circle(7,7,6);
 setcolor(6);
 circle(7,7,5);
 setcolor(5);
 circle(7,7,4);
 setcolor(4);
 circle(7,7,3);
 setcolor(3);
 circle(7,7,2);
 setcolor(2);
 circle(7,7,1);
 setcolor(2);
 circle(7,7,0);
 putpixel(7,7,1);
 getimage(0,0,14,14,image[12]);
 size = imagesize(0,0,14,14);
 image[13] = malloc(size);
 setcolor(5);
 circle(7,7,6);
 setcolor(5);
 circle(7,7,5);
 setcolor(4);
 circle(7,7,4);
 setcolor(4);
 circle(7,7,3);
 setcolor(3);
 circle(7,7,2);
 setcolor(2);
 circle(7,7,1);
 setcolor(2);
 circle(7,7,0);
 putpixel(7,7,1);
 getimage(0,0,14,14,image[13]);
 size = imagesize(0,0,16,16);
 image[14] = malloc(size);
 cleardevice();
 setcolor(6);
 circle(8,8,7);
 setcolor(5);
 circle(8,8,6);
 setcolor(5);
 circle(8,8,5);
 setcolor(4);
 circle(8,8,4);
 setcolor(4);
 circle(8,8,3);
 setcolor(3);
 circle(8,8,2);
 setcolor(2);
 circle(8,8,1);
 setcolor(2);
 circle(8,8,0);
 putpixel(8,8,1);
 getimage(0,0,16,16,image[14]);
 size = imagesize(0,0,16,16);
 image[15] = malloc(size);
 setcolor(4);
 circle(8,8,7);
 setcolor(4);
 circle(8,8,6);
 setcolor(4);
 circle(8,8,5);
 setcolor(3);
 circle(8,8,4);
 setcolor(3);
 circle(8,8,3);
 setcolor(2);
 circle(8,8,2);
 setcolor(2);
 circle(8,8,1);
 setcolor(2);
 circle(8,8,0);
 putpixel(8,8,1);
 getimage(0,0,16,16,image[15]);

 size = imagesize(0,0,2,2);
 image[16] = malloc(size);
 setcolor(11);
 circle(1,1,0);
 putpixel(1,1,7);
 getimage(0,0,2,2,image[16]);
 size = imagesize(0,0,2,2);
 image[17] = malloc(size);
 setcolor(9);
 circle(1,1,0);
 putpixel(1,1,1);
 getimage(0,0,2,2,image[17]);
 size = imagesize(0,0,4,4);
 image[18] = malloc(size);
 cleardevice();
 setcolor(11);
 circle(2,2,1);
 setcolor(9);
 circle(2,2,0);
 putpixel(2,2,7);
 getimage(0,0,4,4,image[18]);
 size = imagesize(0,0,4,4);
 image[19] = malloc(size);
 setcolor(10);
 circle(2,2,1);
 setcolor(8);
 circle(2,2,0);
 putpixel(2,2,1);
 getimage(0,0,4,4,image[19]);
 size = imagesize(0,0,6,6);
 image[20] = malloc(size);
 cleardevice();
 setcolor(11);
 circle(3,3,2);
 setcolor(9);
 circle(3,3,1);
 setcolor(8);
 circle(3,3,0);
 putpixel(3,3,1);
 getimage(0,0,6,6,image[20]);
 size = imagesize(0,0,6,6);
 image[21] = malloc(size);
 cleardevice();
 setcolor(10);
 circle(3,3,2);
 setcolor(9);
 circle(3,3,1);
 setcolor(7);
 circle(3,3,0);
 putpixel(3,3,1);
 getimage(0,0,6,6,image[21]);
 size = imagesize(0,0,8,8);
 image[22] = malloc(size);
 cleardevice();
 setcolor(11);
 circle(4,4,3);
 setcolor(10);
 circle(4,4,2);
 setcolor(9);
 circle(4,4,1);
 setcolor(7);
 circle(4,4,0);
 putpixel(4,4,1);
 getimage(0,0,8,8,image[22]);
 size = imagesize(0,0,8,8);
 image[23] = malloc(size);
 setcolor(9);
 circle(4,4,3);
 setcolor(9);
 circle(4,4,2);
 setcolor(8);
 circle(4,4,1);
 setcolor(7);
 circle(4,4,0);
 putpixel(4,4,1);
 getimage(0,0,8,8,image[23]);
 size = imagesize(0,0,10,10);
 image[24] = malloc(size);
 cleardevice();
 setcolor(11);
 circle(5,5,4);
 setcolor(10);
 circle(5,5,3);
 setcolor(9);
 circle(5,5,2);
 setcolor(8);
 circle(5,5,1);
 setcolor(7);
 circle(5,5,0);
 putpixel(5,5,1);
 getimage(0,0,10,10,image[24]);
 size = imagesize(0,0,10,10);
 image[25] = malloc(size);
 setcolor(10);
 circle(5,5,4);
 setcolor(9);
 circle(5,5,3);
 setcolor(9);
 circle(5,5,2);
 setcolor(8);
 circle(5,5,1);
 setcolor(7);
 circle(5,5,0);
 putpixel(5,5,1);
 getimage(0,0,10,10,image[25]);
 size = imagesize(0,0,12,12);
 image[26] = malloc(size);
 cleardevice();
 setcolor(11);
 circle(6,6,5);
 setcolor(10);
 circle(6,6,4);
 setcolor(9);
 circle(6,6,3);
 setcolor(9);
 circle(6,6,2);
 setcolor(8);
 circle(6,6,1);
 setcolor(7);
 circle(6,6,0);
 putpixel(6,6,1);
 getimage(0,0,12,12,image[26]);
 size = imagesize(0,0,12,12);
 image[27] = malloc(size);
 setcolor(10);
 circle(6,6,5);
 setcolor(9);
 circle(6,6,4);
 setcolor(9);
 circle(6,6,3);
 setcolor(8);
 circle(6,6,2);
 setcolor(7);
 circle(6,6,1);
 setcolor(7);
 circle(6,6,0);
 putpixel(6,6,1);
 getimage(0,0,12,12,image[27]);
 size = imagesize(0,0,14,14);
 image[28] = malloc(size);
 cleardevice();
 setcolor(11);
 circle(7,7,6);
 setcolor(11);
 circle(7,7,5);
 setcolor(10);
 circle(7,7,4);
 setcolor(9);
 circle(7,7,3);
 setcolor(8);
 circle(7,7,2);
 setcolor(7);
 circle(7,7,1);
 setcolor(7);
 circle(7,7,0);
 putpixel(7,7,1);
 getimage(0,0,14,14,image[28]);
 size = imagesize(0,0,14,14);
 image[29] = malloc(size);
 setcolor(10);
 circle(7,7,6);
 setcolor(10);
 circle(7,7,5);
 setcolor(9);
 circle(7,7,4);
 setcolor(9);
 circle(7,7,3);
 setcolor(8);
 circle(7,7,2);
 setcolor(7);
 circle(7,7,1);
 setcolor(7);
 circle(7,7,0);
 putpixel(7,7,1);
 getimage(0,0,14,14,image[29]);
 size = imagesize(0,0,16,16);
 image[30] = malloc(size);
 cleardevice();
 setcolor(11);
 circle(8,8,7);
 setcolor(10);
 circle(8,8,6);
 setcolor(10);
 circle(8,8,5);
 setcolor(9);
 circle(8,8,4);
 setcolor(9);
 circle(8,8,3);
 setcolor(8);
 circle(8,8,2);
 setcolor(7);
 circle(8,8,1);
 setcolor(7);
 circle(8,8,0);
 putpixel(8,8,1);
 getimage(0,0,16,16,image[30]);
 size = imagesize(0,0,16,16);
 image[31] = malloc(size);
 setcolor(9);
 circle(8,8,7);
 setcolor(9);
 circle(8,8,6);
 setcolor(9);
 circle(8,8,5);
 setcolor(8);
 circle(8,8,4);
 setcolor(8);
 circle(8,8,3);
 setcolor(7);
 circle(8,8,2);
 setcolor(7);
 circle(8,8,1);
 setcolor(7);
 circle(8,8,0);
 putpixel(8,8,1);
 getimage(0,0,16,16,image[31]);

  size = imagesize(0,0,2,2);
 image[32] = malloc(size);
 setcolor(15);
 circle(1,1,0);
 putpixel(1,1,12);
 getimage(0,0,2,2,image[32]);
 size = imagesize(0,0,2,2);
 image[33] = malloc(size);
 setcolor(13);
 circle(1,1,0);
 putpixel(1,1,1);
 getimage(0,0,2,2,image[33]);
 size = imagesize(0,0,4,4);
 image[34] = malloc(size);
 cleardevice();
 setcolor(15);
 circle(2,2,1);
 setcolor(14);
 circle(2,2,0);
 putpixel(2,2,12);
 getimage(0,0,4,4,image[34]);
 size = imagesize(0,0,4,4);
 image[35] = malloc(size);
 setcolor(14);
 circle(2,2,1);
 setcolor(12);
 circle(2,2,0);
 putpixel(2,2,1);
 getimage(0,0,4,4,image[35]);
 size = imagesize(0,0,6,6);
 image[36] = malloc(size);
 cleardevice();
 setcolor(15);
 circle(3,3,2);
 setcolor(14);
 circle(3,3,1);
 setcolor(12);
 circle(3,3,0);
 putpixel(3,3,1);
 getimage(0,0,6,6,image[36]);
 size = imagesize(0,0,6,6);
 image[37] = malloc(size);
 cleardevice();
 setcolor(14);
 circle(3,3,2);
 setcolor(13);
 circle(3,3,1);
 setcolor(12);
 circle(3,3,0);
 putpixel(3,3,1);
 getimage(0,0,6,6,image[37]);
 size = imagesize(0,0,8,8);
 image[38] = malloc(size);
 cleardevice();
 setcolor(15);
 circle(4,4,3);
 setcolor(14);
 circle(4,4,2);
 setcolor(13);
 circle(4,4,1);
 setcolor(12);
 circle(4,4,0);
 putpixel(4,4,1);
 getimage(0,0,8,8,image[38]);
 size = imagesize(0,0,8,8);
 image[39] = malloc(size);
 setcolor(14);
 circle(4,4,3);
 setcolor(13);
 circle(4,4,2);
 setcolor(12);
 circle(4,4,1);
 setcolor(12);
 circle(4,4,0);
 putpixel(4,4,1);
 getimage(0,0,8,8,image[39]);
 size = imagesize(0,0,10,10);
 image[40] = malloc(size);
 cleardevice();
 setcolor(15);
 circle(5,5,4);
 setcolor(14);
 circle(5,5,3);
 setcolor(13);
 circle(5,5,2);
 setcolor(13);
 circle(5,5,1);
 setcolor(12);
 circle(5,5,0);
 putpixel(5,5,1);
 getimage(0,0,10,10,image[40]);
 size = imagesize(0,0,10,10);
 image[41] = malloc(size);
 setcolor(14);
 circle(5,5,4);
 setcolor(14);
 circle(5,5,3);
 setcolor(13);
 circle(5,5,2);
 setcolor(12);
 circle(5,5,1);
 setcolor(12);
 circle(5,5,0);
 putpixel(5,5,1);
 getimage(0,0,10,10,image[41]);
 size = imagesize(0,0,12,12);
 image[42] = malloc(size);
 cleardevice();
 setcolor(15);
 circle(6,6,5);
 setcolor(14);
 circle(6,6,4);
 setcolor(14);
 circle(6,6,3);
 setcolor(13);
 circle(6,6,2);
 setcolor(12);
 circle(6,6,1);
 setcolor(12);
 circle(6,6,0);
 putpixel(6,6,1);
 getimage(0,0,12,12,image[42]);
 size = imagesize(0,0,12,12);
 image[43] = malloc(size);
 setcolor(14);
 circle(6,6,5);
 setcolor(13);
 circle(6,6,4);
 setcolor(13);
 circle(6,6,3);
 setcolor(12);
 circle(6,6,2);
 setcolor(12);
 circle(6,6,1);
 setcolor(12);
 circle(6,6,0);
 putpixel(6,6,1);
 getimage(0,0,12,12,image[43]);
 size = imagesize(0,0,14,14);
 image[44] = malloc(size);
 cleardevice();
 setcolor(15);
 circle(7,7,6);
 setcolor(14);
 circle(7,7,5);
 setcolor(14);
 circle(7,7,4);
 setcolor(13);
 circle(7,7,3);
 setcolor(13);
 circle(7,7,2);
 setcolor(12);
 circle(7,7,1);
 setcolor(12);
 circle(7,7,0);
 putpixel(7,7,1);
 getimage(0,0,14,14,image[44]);
 size = imagesize(0,0,14,14);
 image[45] = malloc(size);
 setcolor(14);
 circle(7,7,6);
 setcolor(14);
 circle(7,7,5);
 setcolor(13);
 circle(7,7,4);
 setcolor(13);
 circle(7,7,3);
 setcolor(12);
 circle(7,7,2);
 setcolor(12);
 circle(7,7,1);
 setcolor(12);
 circle(7,7,0);
 putpixel(7,7,1);
 getimage(0,0,14,14,image[45]);
 size = imagesize(0,0,16,16);
 image[46] = malloc(size);
 cleardevice();
 setcolor(15);
 circle(8,8,7);
 setcolor(14);
 circle(8,8,6);
 setcolor(14);
 circle(8,8,5);
 setcolor(13);
 circle(8,8,4);
 setcolor(13);
 circle(8,8,3);
 setcolor(12);
 circle(8,8,2);
 setcolor(12);
 circle(8,8,1);
 setcolor(12);
 circle(8,8,0);
 putpixel(8,8,1);
 getimage(0,0,16,16,image[46]);
 size = imagesize(0,0,16,16);
 image[47] = malloc(size);
 setcolor(14);
 circle(8,8,7);
 setcolor(13);
 circle(8,8,6);
 setcolor(13);
 circle(8,8,5);
 setcolor(13);
 circle(8,8,4);
 setcolor(12);
 circle(8,8,3);
 setcolor(12);
 circle(8,8,2);
 setcolor(12);
 circle(8,8,1);
 setcolor(12);
 circle(8,8,0);
 putpixel(8,8,1);
 getimage(0,0,16,16,image[47]);

 active = 0;
 visual = 1;
 randomize();
 while(1 == 1)
  {
  cleardevice();
  for(ct=0;ct<600;ct++)
	{
	 backstar[ct].movestar(speed);
	}
  for(ct=0;ct<300;ct++)
	{
	 midstar[ct].movestar(speed);
	}
  for(ct=0;ct<150;ct++)
	{
	 forstar[ct].movestar(speed);
	}
 for(ct=0;ct<75;ct++)
	{
	 largestar[ct].movestar(image,speed);
	}
 for(ct=0;ct<35;ct++)
	{
	 hugestar[ct].movestar(image,speed);
	}
 for(ct=0;ct<15;ct++)
   {
    ultrastar[ct].movestar(image,speed);
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
	abcd = 100;
      }
     if(ch == 80 && speed >= 1)
      { speed -= 1;
	abcd = 100;
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
