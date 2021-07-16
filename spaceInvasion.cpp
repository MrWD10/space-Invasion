#include <dos.h>
#include <stdlib.h>
#include <math.h>
#include<windows.h>
#include<process.h>
#include "graphics.h"
#pragma comment(lib, "Winmm.lib")
#pragma comment(lib, "Ws2_32.lib")

int Case=0;
void *image;
 int x=740,y=700;
int rect3=683;

 void drawmess(int x,int y){                                                                    
	
 readimagefile("v3.gif",x,y,x+100,y+150);
 int imageSize=imagesize(x,y,x+100,y+150);
 image=malloc(imageSize);
 getimage(x,y,x+100,y+150,image);
 }
 void drawmess2(int x,int y){

   putimage(x,y,image,COPY_PUT);
  
 }
 int a1=0,b1=700;
 void massage1(void *parama){
	 int x=0,y=0;
	  delay(5000);
	while(1){
		
     drawmess2( x, y);
  
   delay(70);

   y=y+25;
   
   if(y+150>=b1 && y<=b1 && x<=a1 && x+100>=a1    ){
	
	   exit(1);
   }
  if(y>800){
 
     y=0;
	 delay(5000);
}
 

}
	 
	_endthread();

 
}
 

 void massage2(   void *parama){
	 int x1=1196,y1=0;
	 delay(5400);
	 while(1){
		  
     drawmess2( x1, y1);
  
   delay(70);
  
   y1=y1+25;

    if(y1+150>=b1 && y1<=b1+100 && x1<=a1+100 && x1+100>=a1+100){
		
		exit(1);
	}
  if(y1>800){
 
     y1=0;
	 delay(5400);
}
  
}
	 

 _endthread();
 
 }


 void moveBall(void *param){
	int x6=130,y6=600;
	void *image2;
	readimagefile("ball1.gif",x6,y6,x6+40,y6+40);
	int imageSize=imagesize(x6,y6,x6+40,y6+40);
	image2=malloc(imageSize);
	getimage(x6,y6,x6+40,y6+40,image2);
	int a=x6, b=y6;
	int count =1;
	delay(100);
	
	while(1){

		delay(25);
		putimage(x6,y6,image2,XOR_PUT);
		
		
		if(count<=20 ){
			x6=x6+5;    y6=y6-5;
			count++;
		}
		if (count<=40 && count >20){
			x6=x6-5;    y6=y6-5;
			
			count++;
		}
		if (count <=60 && count >40){
			x6=x6-5;    y6=y6+5;
			count++;
		}
		if (count<=80 && count >60){
			x6=x6+5;    y6=y6+5;
			count++;
			if(count>80){ count =1;
			x6=130;y6=600;
			}
		}
		
		/*if((x6<=a+100 && x6>=a) && (y6>=b-100 && y6<=b))
		{x6=x6+5;    y6=y6-5;
		delay(500);}
		 if((x6<a+200 && x6>=a+100) && (y6<b && y6>=b-100))
		{x6=x6+5;    y6=y6+5;
		delay(500);}
		 if((x6>a+100 && x6<=a+200) && (y6<b+100 && y6>=b))
		{x6=x6-5;    y6=y6+5;
		delay(500);}
	 if((x6>a && x6<=a+100) && (y6>b && y6<=b+100))
		{x6=x6-5;    y6=y6-5;
		delay(500);}*/

		
		
		//putimage(x6,y6,image2,XOR_PUT);

		if(((y6+40>=y) && (y6+40<=y+50) && (x6+40<=x+50) && (x6+40>=x)) || ((y6+40>=y) && (y6+40<=y+50) && (x6<=x+50) && (x6>=x)) || ((y6>=y) && (y6<=y+50) && (x6+40<=x+50) && (x6+40>=x)) || ((y6>=y) && (y6<=y+50) && (x6<=x+50) && (x6>=x)) ){ 
		setcolor(8);
		rectangle(682,0,948,30);
		setfillstyle(SOLID_FILL,0);
		floodfill(800,10,8);
		rect3+=7;

		//power bar 10//
		setcolor(5);
		rectangle(rect3,1,947,29);
		setfillstyle(SOLID_FILL,5);
		floodfill(946,10,5);
		if(rect3>=942){
			
	exit(1);
		}
		}
		
		
		printf(" x %d y %d\n",x6,y6);
		//delay(2000);
	}
	_endthread();
}



 void moveBall2(void *param){
	int x6=510,y6=600;
	void *image2;
	readimagefile("ball1.gif",x6,y6,x6+40,y6+40);
	int imageSize=imagesize(x6,y6,x6+40,y6+40);
	image2=malloc(imageSize);
	getimage(x6,y6,x6+40,y6+40,image2);
	int a=x6, b=y6;
	int count =1;
	delay(100);
	while(1){

			delay(25);
		putimage(x6,y6,image2,XOR_PUT);
		
		
		/*if(count<=20 ){
			x6=x6-5;    y6=y6+5;
			//x6=x6+5;   // y6=y6-5;
			count++;
		}
		if (count<=40 && count >20){
			x6=x6+5;    y6=y6+5;
			count++;
		}
		if (count <=60 && count >40){
			x6=x6+5;   y6=y6-5;
			//x6=x6-5;   // y6=y6+5;
			count++;
		}
		if (count<=80 && count >60){
			x6=x6-5;    y6=y6-5;
			count++;
			if(count>80){ count =1;
			//x6=130;y6=600;
			}
		}*/


		
		if(count<=20 ){
			x6=x6+5;    y6=y6-5;
			count++;
		}
		if (count<=40 && count >20){
			x6=x6-5;    y6=y6-5;
			
			count++;
		}
		if (count <=60 && count >40){
			x6=x6-5;    y6=y6+5;
			count++;
		}
		if (count<=80 && count >60){
			x6=x6+5;    y6=y6+5;
			count++;
			if(count>80){ count =1;
			x6=510;y6=600;
			}
		}

	
		//putimage(x6,y6,image2,XOR_PUT);

		if(((y6+40>=y) && (y6+40<=y+50) && (x6+40<=x+50) && (x6+40>=x)) || ((y6+40>=y) && (y6+40<=y+50) && (x6<=x+50) && (x6>=x)) || ((y6>=y) && (y6<=y+50) && (x6+40<=x+50) && (x6+40>=x)) || ((y6>=y) && (y6<=y+50) && (x6<=x+50) && (x6>=x)) ){ 
		setcolor(8);
		rectangle(682,0,948,30);
		setfillstyle(SOLID_FILL,0);
		floodfill(800,10,8);
		rect3+=7;

		//power bar 10//
		setcolor(5);
		rectangle(rect3,1,947,29);
		setfillstyle(SOLID_FILL,5);
		floodfill(946,10,5);
		if(rect3>=942){
			
	exit(1);
		}
		}
		
		
		printf(" x %d y %d\n",x6,y6);
		//delay(2000);
	}
	_endthread();
}



 void moveBall3(void *param){
	int x6=230,y6=400;
	void *image2;
	readimagefile("ball1.gif",x6,y6,x6+40,y6+40);
	int imageSize=imagesize(x6,y6,x6+40,y6+40);
	image2=malloc(imageSize);
	getimage(x6,y6,x6+40,y6+40,image2);
	int a=x6, b=y6;
	int count =1;
	
	while(1){
		delay(25);
		
		putimage(x6,y6,image2,XOR_PUT);
		
		
		if(count<=20 ){
			x6=x6-5;    y6=y6+5;
			//x6=x6+5;   // y6=y6-5;
			count++;
		}
		if (count<=40 && count >20){
			x6=x6+5;    y6=y6+5;
			count++;
		}
		if (count <=60 && count >40){
			x6=x6+5;   y6=y6-5;
			//x6=x6-5;   // y6=y6+5;
			count++;
		}
		if (count<=80 && count >60){
			x6=x6-5;    y6=y6-5;
			count++;
			if(count>80){ count =1;
			x6=240;y6=400;
			}
		}
		
		//putimage(x6,y6,image2,XOR_PUT);

		if(((y6+40>=y) && (y6+40<=y+50) && (x6+40<=x+50) && (x6+40>=x)) || ((y6+40>=y) && (y6+40<=y+50) && (x6<=x+50) && (x6>=x)) || ((y6>=y) && (y6<=y+50) && (x6+40<=x+50) && (x6+40>=x)) || ((y6>=y) && (y6<=y+50) && (x6<=x+50) && (x6>=x)) ){ 
		setcolor(8);
		rectangle(682,0,948,30);
		setfillstyle(SOLID_FILL,0);
		floodfill(800,10,8);
		rect3+=7;

		//power bar 10//
		setcolor(5);
		rectangle(rect3,1,947,29);
		setfillstyle(SOLID_FILL,5);
		floodfill(946,10,5);
		if(rect3>=942){
			
		exit(1);
		}
		}
		
		
		printf(" x %d y %d\n",x6,y6);
		//delay(2000);
	}
	_endthread();
}



 void moveBall4(void *param){
	int x6=400,y6=400;
	void *image2;
	readimagefile("ball1.gif",x6,y6,x6+40,y6+40);
	int imageSize=imagesize(x6,y6,x6+40,y6+40);
	image2=malloc(imageSize);
	getimage(x6,y6,x6+40,y6+40,image2);
	int a=x6, b=y6;
	int count =1;
	
	while(1){

		delay(25);
		putimage(x6,y6,image2,XOR_PUT);
		
		
		if(count<=20 ){
			x6=x6-5;    y6=y6+5;
			//x6=x6+5;   // y6=y6-5;
			count++;
		}
		if (count<=40 && count >20){
			x6=x6+5;    y6=y6+5;
			count++;
		}
		if (count <=60 && count >40){
			x6=x6+5;   y6=y6-5;
			//x6=x6-5;   // y6=y6+5;
			count++;
		}
		if (count<=80 && count >60){
			x6=x6-5;    y6=y6-5;
			count++;
			if(count>80){ count =1;
			x6=400;y6=400;
			}
		}
		
		//putimage(x6,y6,image2,XOR_PUT);

		if(((y6+40>=y) && (y6+40<=y+50) && (x6+40<=x+50) && (x6+40>=x)) || ((y6+40>=y) && (y6+40<=y+50) && (x6<=x+50) && (x6>=x)) || ((y6>=y) && (y6<=y+50) && (x6+40<=x+50) && (x6+40>=x)) || ((y6>=y) && (y6<=y+50) && (x6<=x+50) && (x6>=x)) ){ 
		setcolor(8);
		rectangle(682,0,948,30);
		setfillstyle(SOLID_FILL,0);
		floodfill(800,10,8);
		rect3+=7;

		//power bar 10//
		setcolor(5);
		rectangle(rect3,1,947,29);
		setfillstyle(SOLID_FILL,5);
		floodfill(946,10,5);
		if(rect3>=942){
			
		exit(1);
		//exit(1);
		}
		}
		
		
		printf(" x %d y %d\n",x6,y6);
		//delay(2000);
	}
	_endthread();
}






 void ball(void *param){
	int x6=130,y6=600;
	void *image2;
	readimagefile("ball.bmp",x6,y6,x6+40,y6+40);
int imageSize=imagesize(x6,y6,x6+40,y6+40);
image2=malloc(imageSize);
getimage(x6,y6,x6+40,y6+40,image2);
delay(100);

	while(1){

		putimage(x6,y6,image2,XOR_PUT);
int a=x6, b=y6;

while(x6!=a+100 && y6!=b-100)
{	
x6=x6+5; y6=y6-5;
putimage(x6,y6,image2,XOR_PUT);
delay(50);
if(((y6+40>=y) && (y6+40<=y+50) && (x6+40<=x+50) && (x6+40>=x)) || ((y6+40>=y) && (y6+40<=y+50) && (x6<=x+50) && (x6>=x)) || ((y6>=y) && (y6<=y+50) && (x6+40<=x+50) && (x6+40>=x)) || ((y6>=y) && (y6<=y+50) && (x6<=x+50) && (x6>=x)) ){ 
		setcolor(8);
	rectangle(682,0,948,30);
	setfillstyle(SOLID_FILL,0);
	floodfill(800,10,8);

	rect3+=7;

	//power bar 10//
	setcolor(8);
	rectangle(rect3,0,948,30);
	setfillstyle(SOLID_FILL,5);
	floodfill(943,10,8);
	if(rect3>=941){
		exit(1);
	}
	}

}

while(x6!=a && y6!=b)
{x6=x6-5; y6=y6-5;
putimage(x6,y6,image2,XOR_PUT);
delay(50);
if(((y6+40>=y) && (y6+40<=y+50) && (x6+40<=x+50) && (x6+40>=x)) || ((y6+40>=y) && (y6+40<=y+50) && (x6<=x+50) && (x6>=x)) || ((y6>=y) && (y6<=y+50) && (x6+40<=x+50) && (x6+40>=x)) || ((y6>=y) && (y6<=y+50) && (x6<=x+50) && (x6>=x)) ){ 
		setcolor(8);
	rectangle(682,0,948,30);
	setfillstyle(SOLID_FILL,0);
	floodfill(800,10,8);

	rect3+=7;

	//power bar 10//
	setcolor(8);
	rectangle(rect3,0,948,30);
	setfillstyle(SOLID_FILL,5);
	floodfill(943,10,8);
	if(rect3>=941){
		exit(1);
	}
	}


}
while(x6!=a-100 && y6!=b-100)
{x6=x6-5; y6=y6+5;
putimage(x6,y6,image2,XOR_PUT);
delay(50);
if(((y6+40>=y) && (y6+40<=y+50) && (x6+40<=x+50) && (x6+40>=x)) || ((y6+40>=y) && (y6+40<=y+50) && (x6<=x+50) && (x6>=x)) || ((y6>=y) && (y6<=y+50) && (x6+40<=x+50) && (x6+40>=x)) || ((y6>=y) && (y6<=y+50) && (x6<=x+50) && (x6>=x)) ){ 
		setcolor(8);
	rectangle(682,0,948,30);
	setfillstyle(SOLID_FILL,0);
	floodfill(800,10,8);

	rect3+=7;

	//power bar 10//
	setcolor(8);
	rectangle(rect3,0,948,30);
	setfillstyle(SOLID_FILL,5);
	floodfill(943,10,8);
	if(rect3>=941){
		exit(1);
	}
	}


}
while(x6!=a && y6!=b)
{x6=x6+5; y6=y6+5;
putimage(x6,y6,image2,XOR_PUT);
delay(50);
if(((y6+40>=y) && (y6+40<=y+50) && (x6+40<=x+50) && (x6+40>=x)) || ((y6+40>=y) && (y6+40<=y+50) && (x6<=x+50) && (x6>=x)) || ((y6>=y) && (y6<=y+50) && (x6+40<=x+50) && (x6+40>=x)) || ((y6>=y) && (y6<=y+50) && (x6<=x+50) && (x6>=x)) ){ 
		setcolor(8);
	rectangle(682,0,948,30);
	setfillstyle(SOLID_FILL,0);
	floodfill(800,10,8);

	rect3+=7;

	//power bar 10//
	setcolor(8);
	rectangle(rect3,0,948,30);
	setfillstyle(SOLID_FILL,5);
	floodfill(943,10,8);
	if(rect3>=941){
		exit(1);
	}
	}


}
	}
	_endthread();
}

void ball2(void *param){
	int x6=240,y6=400;
	void *image2;
	readimagefile("ball.bmp",x6,y6,x6+40,y6+40);
int imageSize=imagesize(x6,y6,x6+40,y6+40);
image2=malloc(imageSize);
getimage(x6,y6,x6+40,y6+40,image2);
delay(100);
	while(1){
		
putimage(x6,y6,image2,XOR_PUT);
int a=x6, b=y6;

while(x6!=a-100 && y6!=b+100)
{	
x6=x6-5; y6=y6+5;
putimage(x6,y6,image2,XOR_PUT);
delay(50);
if(((y6+40>=y) && (y6+40<=y+50) && (x6+40<=x+50) && (x6+40>=x)) || ((y6+40>=y) && (y6+40<=y+50) && (x6<=x+50) && (x6>=x)) || ((y6>=y) && (y6<=y+50) && (x6+40<=x+50) && (x6+40>=x)) || ((y6>=y) && (y6<=y+50) && (x6<=x+50) && (x6>=x)) ){ 
		setcolor(8);
	rectangle(682,0,948,30);
	setfillstyle(SOLID_FILL,0);
	floodfill(800,10,8);

	rect3+=7;

	//power bar 10//
	setcolor(8);
	rectangle(rect3,0,948,30);
	setfillstyle(SOLID_FILL,5);
	floodfill(943,10,8);
	if(rect3>=941){
		exit(1);
	}
	}


}

while(x6!=a && y6!=b+200)
{x6=x6+5; y6=y6+5;
putimage(x6,y6,image2,XOR_PUT);
delay(50);
if(((y6+40>=y) && (y6+40<=y+50) && (x6+40<=x+50) && (x6+40>=x)) || ((y6+40>=y) && (y6+40<=y+50) && (x6<=x+50) && (x6>=x)) || ((y6>=y) && (y6<=y+50) && (x6+40<=x+50) && (x6+40>=x)) || ((y6>=y) && (y6<=y+50) && (x6<=x+50) && (x6>=x)) ){ 
		setcolor(8);
	rectangle(682,0,948,30);
	setfillstyle(SOLID_FILL,0);
	floodfill(800,10,8);

	rect3+=7;

	//power bar 10//
	setcolor(8);
	rectangle(rect3,0,948,30);
	setfillstyle(SOLID_FILL,5);
	floodfill(943,10,8);
	if(rect3>=941){
		exit(1);
	}
	}


}
while(x6!=a+100 && y6!=b+100)
{x6=x6+5; y6=y6-5;
putimage(x6,y6,image2,XOR_PUT);
delay(50);

}
while(x6!=a && y6!=b)
{x6=x6-5; y6=y6-5;
putimage(x6,y6,image2,XOR_PUT);
delay(50);
if(((y6+40>=y) && (y6+40<=y+50) && (x6+40<=x+50) && (x6+40>=x)) || ((y6+40>=y) && (y6+40<=y+50) && (x6<=x+50) && (x6>=x)) || ((y6>=y) && (y6<=y+50) && (x6+40<=x+50) && (x6+40>=x)) || ((y6>=y) && (y6<=y+50) && (x6<=x+50) && (x6>=x)) ){ 
		setcolor(8);
	rectangle(682,0,948,30);
	setfillstyle(SOLID_FILL,0);
	floodfill(800,10,8);

	rect3+=7;

	//power bar 10//
	setcolor(8);
	rectangle(rect3,0,948,30);
	setfillstyle(SOLID_FILL,5);
	floodfill(943,10,8);
	if(rect3>=941){
		exit(1);
	}
	}


}
	}
	_endthread();
}


void ball3(void *param){
int x6=400,y6=400;
	void *image2;
	readimagefile("ball.bmp",x6,y6,x6+40,y6+40);
int imageSize=imagesize(x6,y6,x6+40,y6+40);
image2=malloc(imageSize);
getimage(x6,y6,x6+40,y6+40,image2);
delay(100);
	while(1){
		
putimage(x6,y6,image2,XOR_PUT);
int a=x6, b=y6;

while(x6!=a-100 && y6!=b+100)
{	
x6=x6-5; y6=y6+5;
putimage(x6,y6,image2,XOR_PUT);
delay(50);
if(((y6+40>=y) && (y6+40<=y+50) && (x6+40<=x+50) && (x6+40>=x)) || ((y6+40>=y) && (y6+40<=y+50) && (x6<=x+50) && (x6>=x)) || ((y6>=y) && (y6<=y+50) && (x6+40<=x+50) && (x6+40>=x)) || ((y6>=y) && (y6<=y+50) && (x6<=x+50) && (x6>=x)) ){ 
		setcolor(8);
	rectangle(682,0,948,30);
	setfillstyle(SOLID_FILL,0);
	floodfill(800,10,8);

	rect3+=7;

	//power bar 10//
	setcolor(8);
	rectangle(rect3,0,948,30);
	setfillstyle(SOLID_FILL,5);
	floodfill(943,10,8);
	if(rect3>=941){
		exit(1);
	}
	}


}

while(x6!=a && y6!=b+200)
{x6=x6+5; y6=y6+5;
putimage(x6,y6,image2,XOR_PUT);
delay(50);
if(((y6+40>=y) && (y6+40<=y+50) && (x6+40<=x+50) && (x6+40>=x)) || ((y6+40>=y) && (y6+40<=y+50) && (x6<=x+50) && (x6>=x)) || ((y6>=y) && (y6<=y+50) && (x6+40<=x+50) && (x6+40>=x)) || ((y6>=y) && (y6<=y+50) && (x6<=x+50) && (x6>=x)) ){ 
		setcolor(8);
	rectangle(682,0,948,30);
	setfillstyle(SOLID_FILL,0);
	floodfill(800,10,8);

	rect3+=7;

	//power bar 10//
	setcolor(8);
	rectangle(rect3,0,948,30);
	setfillstyle(SOLID_FILL,5);
	floodfill(943,10,8);
	if(rect3>=941){
		exit(1);
	}
	}


}
while(x6!=a+100 && y6!=b+100)
{x6=x6+5; y6=y6-5;
putimage(x6,y6,image2,XOR_PUT);
delay(50);
if(((y6+40>=y) && (y6+40<=y+50) && (x6+40<=x+50) && (x6+40>=x)) || ((y6+40>=y) && (y6+40<=y+50) && (x6<=x+50) && (x6>=x)) || ((y6>=y) && (y6<=y+50) && (x6+40<=x+50) && (x6+40>=x)) || ((y6>=y) && (y6<=y+50) && (x6<=x+50) && (x6>=x)) ){ 
		setcolor(8);
	rectangle(682,0,948,30);
	setfillstyle(SOLID_FILL,0);
	floodfill(800,10,8);

	rect3+=7;

	//power bar 10//
	setcolor(8);
	rectangle(rect3,0,948,30);
	setfillstyle(SOLID_FILL,5);
	floodfill(943,10,8);
	if(rect3>=941){
		exit(1);
	}
	}


}
while(x6!=a && y6!=b)
{x6=x6-5; y6=y6-5;
putimage(x6,y6,image2,XOR_PUT);
delay(50);
if(((y6+40>=y) && (y6+40<=y+50) && (x6+40<=x+50) && (x6+40>=x)) || ((y6+40>=y) && (y6+40<=y+50) && (x6<=x+50) && (x6>=x)) || ((y6>=y) && (y6<=y+50) && (x6+40<=x+50) && (x6+40>=x)) || ((y6>=y) && (y6<=y+50) && (x6<=x+50) && (x6>=x)) ){ 
		setcolor(8);
	rectangle(682,0,948,30);
	setfillstyle(SOLID_FILL,0);
	floodfill(800,10,8);

	rect3+=7;

	//power bar 10//
	setcolor(8);
	rectangle(rect3,0,948,30);
	setfillstyle(SOLID_FILL,5);
	floodfill(943,10,8);
	if(rect3>=941){
		exit(1);
	}
	}


}
}
	_endthread();
}


//ball  part 2
void ball4(void *param){
int x6=510,y6=600;
	void *image2;
	readimagefile("ball.bmp",x6,y6,x6+40,y6+40);
int imageSize=imagesize(x6,y6,x6+40,y6+40);
image2=malloc(imageSize);
getimage(x6,y6,x6+40,y6+40,image2);
delay(100);

	while(1){
		putimage(x6,y6,image2,XOR_PUT);
int a=x6, b=y6;

while(x6!=a+100 && y6!=b-100)
{	
x6=x6+5; y6=y6-5;
putimage(x6,y6,image2,XOR_PUT);
delay(50);
if(((y6+40>=y) && (y6+40<=y+50) && (x6+40<=x+50) && (x6+40>=x)) || ((y6+40>=y) && (y6+40<=y+50) && (x6<=x+50) && (x6>=x)) || ((y6>=y) && (y6<=y+50) && (x6+40<=x+50) && (x6+40>=x)) || ((y6>=y) && (y6<=y+50) && (x6<=x+50) && (x6>=x)) ){ 
		setcolor(8);
	rectangle(682,0,948,30);
	setfillstyle(SOLID_FILL,0);
	floodfill(800,10,8);

	rect3+=7;

	//power bar 10//
	setcolor(8);
	rectangle(rect3,0,948,30);
	setfillstyle(SOLID_FILL,5);
	floodfill(943,10,8);
	if(rect3>=941){
		exit(1);
	}
	}


}

while(x6!=a && y6!=b)
{x6=x6-5; y6=y6-5;
putimage(x6,y6,image2,XOR_PUT);
delay(50);
if(((y6+40>=y) && (y6+40<=y+50) && (x6+40<=x+50) && (x6+40>=x)) || ((y6+40>=y) && (y6+40<=y+50) && (x6<=x+50) && (x6>=x)) || ((y6>=y) && (y6<=y+50) && (x6+40<=x+50) && (x6+40>=x)) || ((y6>=y) && (y6<=y+50) && (x6<=x+50) && (x6>=x)) ){ 
		setcolor(8);
	rectangle(682,0,948,30);
	setfillstyle(SOLID_FILL,0);
	floodfill(800,10,8);

	rect3+=7;

	//power bar 10//
	setcolor(8);
	rectangle(rect3,0,948,30);
	setfillstyle(SOLID_FILL,5);
	floodfill(943,10,8);
	if(rect3>=941){
		exit(1);
	}
	}


}
while(x6!=a-100 && y6!=b-100)
{x6=x6-5; y6=y6+5;
putimage(x6,y6,image2,XOR_PUT);
delay(50);
if(((y6+40>=y) && (y6+40<=y+50) && (x6+40<=x+50) && (x6+40>=x)) || ((y6+40>=y) && (y6+40<=y+50) && (x6<=x+50) && (x6>=x)) || ((y6>=y) && (y6<=y+50) && (x6+40<=x+50) && (x6+40>=x)) || ((y6>=y) && (y6<=y+50) && (x6<=x+50) && (x6>=x)) ){ 
		setcolor(8);
	rectangle(682,0,948,30);
	setfillstyle(SOLID_FILL,0);
	floodfill(800,10,8);

	rect3+=7;

	//power bar 10//
	setcolor(8);
	rectangle(rect3,0,948,30);
	setfillstyle(SOLID_FILL,5);
	floodfill(943,10,8);
	if(rect3>=941){
		exit(1);
	}
	}


}
while(x6!=a && y6!=b)
{x6=x6+5; y6=y6+5;
putimage(x6,y6,image2,XOR_PUT);
delay(50);
if(((y6+40>=y) && (y6+40<=y+50) && (x6+40<=x+50) && (x6+40>=x)) || ((y6+40>=y) && (y6+40<=y+50) && (x6<=x+50) && (x6>=x)) || ((y6>=y) && (y6<=y+50) && (x6+40<=x+50) && (x6+40>=x)) || ((y6>=y) && (y6<=y+50) && (x6<=x+50) && (x6>=x)) ){ 
		setcolor(8);
	rectangle(682,0,948,30);
	setfillstyle(SOLID_FILL,0);
	floodfill(800,10,8);

	rect3+=7;

	//power bar 10//
	setcolor(8);
	rectangle(rect3,0,948,30);
	setfillstyle(SOLID_FILL,5);
	floodfill(943,10,8);
	if(rect3>=941){
		exit(1);
	}
	}


}

}
	_endthread();
}






void movingbar(void *param){
	int x5=1000,y5=30;
	readimagefile("ship1r2.gif",1000,0,1020,40);
	 int imgSize1=imagesize(1000,0,1020,40	);
          void *image1=malloc(imgSize1);
	      getimage(1000,0,1020,40,image1);
		   
	readimagefile("v(2).gif",1000,760,1020,800);
	 int imgSize2=imagesize(1000,760,1020,800	);
          void *image2=malloc(imgSize2);
	     getimage(1000,760,1020,800,image2);
	while(1){
		int a[28]={x5,y5,x5,y5-70,x5,y5-140,x5,y5-210,x5,y5-280,x5,y5-350,x5,y5-420,x5,y5-490,x5,y5-560,x5,y5-630,x5,y5-700,x5,y5-770};
	     
		for(int i=0;i<28;i+=2){
	      readimagefile("v(1).gif",a[i],a[i+1],a[i]+15,a[i+1]+40);
	      int imgSize=imagesize(a[i],a[i+1],a[i]+15,a[i+1]+40);
          void *image=malloc(imgSize);
	      getimage(a[i],a[i+1],a[i]+15,a[i+1]+40,image);
		 putimage(1000,0,image1,COPY_PUT);
 for(int j=0;j<28;j+=2){
	putimage(1000,0,image1,COPY_PUT);
	if(a[j+1]>=30){
		delay(23);
		putimage(a[j],a[j+1],image,XOR_PUT);
		
		}

	a[j+1]+=70;
	if((a[j+1]+40>=y && a[j+1]<=y+50) && (a[j]>=x && a[j]<x+50 ) || (a[j+1]+40>=y && a[j+1]<=y+50) && (a[j]+15>=x && a[j]+15<=x+50 )){ 
		setcolor(8);
	rectangle(682,0,948,30);
	setfillstyle(SOLID_FILL,0);
	floodfill(800,10,8);

	rect3+=7;

	//power bar 10//
	setcolor(5);
	rectangle(rect3,1,947,29);
	setfillstyle(SOLID_FILL,5);
	floodfill(946,10,5);
	if(rect3>=942){
		//delay(1000);
		//exit(1)
		
		exit(1);
	}
	}
   a[j]=1000;
	putimage(a[j],a[j+1],image,XOR_PUT);
	
	putimage(1000,760,image2,COPY_PUT);
	}
putimage(1000,760,image2,COPY_PUT);
 
}
}
	_endthread();
}

void movingbar2(void *param){
	int x1=1090,y1=30;
	readimagefile("ship1r2.gif",1090,0,1110,40);
		   int imgSize1=imagesize(1090,0,1110,40	);
          void *image1=malloc(imgSize1);
	      getimage(1090,0,1110,40,image1);
		readimagefile("v(2).gif",1090,760,1110,800);
		 int imgSize2=imagesize(1090,760,1110,800	);
          void *image2=malloc(imgSize2);
	      getimage(1090,760,1110,800,image2);
	while(1){
		int a[28]={x1,y1,x1,y1-70,x1,y1-140,x1,y1-210,x1,y1-280,x1,y1-350,x1,y1-420,x1,y1-490,x1,y1-560,x1,y1-630,x1,y1-700,x1,y1-770};

	for(int i=0;i<28;i+=2){
	      readimagefile("v(1).gif",a[i],a[i+1],a[i]+20,a[i+1]+40);
	      int imgSize=imagesize(a[i],a[i+1],a[i]+20,a[i+1]+40);
          void *image=malloc(imgSize);
	      getimage(a[i],a[i+1],a[i]+20,a[i+1]+40,image);
		   putimage(1090,0,image1,COPY_PUT);
 for(int j=0;j<28;j+=2){
	 putimage(1090,0,image1,COPY_PUT);
	  
	if(a[j+1]>=30){
		delay(25);
		putimage(a[j],a[j+1],image,XOR_PUT);
		
		}
	a[j+1]+=70;
	
	if((a[j+1]+40>=y && a[j+1]<=y+50) && (a[j]>=x && a[j]<x+50 ) || (a[j+1]+40>=y && a[j+1]<=y+50) && (a[j]+15>=x && a[j]+15<=x+50 )){ 
		setcolor(8);
	rectangle(682,0,948,30);
	setfillstyle(SOLID_FILL,0);
	floodfill(800,10,8);

	rect3+=7;

	//power bar 10//
	setcolor(5);
	rectangle(rect3,1,947,29);
	setfillstyle(SOLID_FILL,5);
	floodfill(946,10,5);
	if(rect3>=942){
		//delay(1000);
		//exit(1);
	
		exit(1);
	}
	}
	a[j]=1090;
	putimage(a[j],a[j+1],image,XOR_PUT);
	
	putimage(1090,760,image2,COPY_PUT);
	}
 	 putimage(1090,760,image2,COPY_PUT);
	 }
 
	}
	_endthread();
}

void movingbar3(void *param){
	int x2=1170,y2=30;
	 readimagefile("ship1r2.gif",1170,0,1190,40);
		 int imgSize1=imagesize(1170,0,1190,40	);
          void *image1=malloc(imgSize1);
	      getimage(1170,0,1190,40,image1);
		 readimagefile("v(2).gif",1170,760,1190,800);
		  int imgSize2=imagesize(1170,760,1190,800	);
          void *image2=malloc(imgSize2);
	      getimage(1170,760,1190,800,image2);
	while(1){
		int a[28]={x2,y2,x2,y2-70,x2,y2-140,x2,y2-210,x2,y2-280,x2,y2-350,x2,y2-420,x2,y2-490,x2,y2-560,x2,y2-630,x2,y2-700,x2,y2-770};
	
	  for(int i=0;i<28;i+=2){
	      readimagefile("v(1).gif",a[i],a[i+1],a[i]+20,a[i+1]+40);
	      int imgSize=imagesize(a[i],a[i+1],a[i]+20,a[i+1]+40);
          void *image=malloc(imgSize);
	      getimage(a[i],a[i+1],a[i]+20,a[i+1]+40,image);
		  putimage(1170,0,image1,COPY_PUT);
 for(int j=0;j<28;j+=2){
	 putimage(1170,0,image1,XOR_PUT);
	 	
	if(a[j+1]>=30){
		delay(27);
		putimage(a[j],a[j+1],image,XOR_PUT);
		
		}
	a[j+1]+=70;
	if((a[j+1]+40>=y && a[j+1]<=y+50) && (a[j]>=x && a[j]<x+50 ) || (a[j+1]+40>=y && a[j+1]<=y+50) && (a[j]+15>=x && a[j]+15<=x+50 )){ 
		setcolor(8);
	rectangle(682,0,948,30);
	setfillstyle(SOLID_FILL,0);
	floodfill(800,10,8);

	rect3+=7;

	//power bar 10//
	setcolor(5);
	rectangle(rect3,1,947,29);
	setfillstyle(SOLID_FILL,5);
	floodfill(946,10,5);
	if(rect3>=942){
		//delay(1000);
		//exit(1);
		
		exit(1);
	}
	}
	a[j]=1170;
	putimage(a[j],a[j+1],image,XOR_PUT);
	 putimage(1170,760,image2,COPY_PUT);
	}
  putimage(1170,760,image2,COPY_PUT);
 
}
	}
	_endthread();
}

 

#define keyUp     72
#define keyDown   80
#define keyLeft   75
#define keyRight  77
#define keyEsc    27
#define spacebar  32

void drawShip(char ch, int *a1, int *b1, int inc,int *rect,int *x1,int *y1);
const int totalbullets = 16;



struct bullet{
	int x1;
	int y1;
	
	int alive;
	
	int initialize(){
		alive=1;
	}

	void initBullet(int x, int y, int a){
		x1 = x;
		y1 = y;
		alive = a;
	}

	void update(int a1, int b1, int *rect1){
		if(1){
			y1+=50;
			setfillstyle(1,YELLOW);
			fillellipse(x1+50,y1+100,5,5);

	
			if(b1<=y1+100 && b1+100>=y1+100 && a1<=x1+50 && a1+100>=x1+50){

				setcolor(0);
	
			rectangle(1360,420,1440,780);
	setfillstyle(SOLID_FILL,0);
	floodfill(1390,779,0);
			x1=x1+50;
			y1=y1;
	
			if(*rect1<=771){
			*rect1+=7;
			setcolor(GREEN);
			rectangle(1360,*rect1,1440,780);
	setfillstyle(SOLID_FILL,GREEN);
	floodfill(1390,779,GREEN);
			}
	
			else
			{ 
				initwindow(1500,800,"space Invasion");
	
	readimagefile("failed.gif",100,0,1200,800);
		delay(5000);
			//cleardevice();
				//  readimagefile("failed.jpg",0,0,1500,800);
				  //delay(3000);
				  exit(1);
				
			  }
				}
			}
		}
		
		 void reset(int a, int b){
		if(y1>600+b){
			x1 = a;
			y1 = b;
		}
	}
	
}bullets[totalbullets];



struct menu{
int x1,y1,x2,y2;


};

POINT points;


void main(){
	initwindow(1500,800,"space Invasion");
	
	readimagefile("cover.jpg",0,0,1500,800);
	PlaySound("main.wav",GetModuleHandle(NULL),SND_FILENAME | SND_ASYNC);
	menu menu1={45,360,445,450};
	menu menu2={45,495,445,585};
	menu menu3={45,630,445,720};
	menu I={90,370,535,580};
	menu II={930,370,1370,570};
	menu back={40,25,220,110};
cover:
	readimagefile("cover.jpg",0,0,1500,800);
	
	
	while(1){
	GetCursorPos(&points);
	if(points.x-2>=menu1.x1 && points.y-26>=menu1.y1 && points.x-2<=menu1.x2 && points.y-26<=menu1.y2){
		if(GetAsyncKeyState(VK_LBUTTON)){
			GetCursorPos(&points);
				
				printf("bt1 x; %d,y; %d\n",points.x-2,points.y-26);
				Case=1;
				break;
			}
	}
	if(points.x-2>=menu2.x1 && points.y-26>=menu2.y1 && points.x-2<=menu2.x2 && points.y-26<=menu2.y2){
		if(GetAsyncKeyState(VK_LBUTTON)){
			GetCursorPos(&points);
				
				printf("btn2 x; %d,y; %d\n",points.x-2,points.y-26);
				
				Case=2;
				break;
			}
	}
	if(points.x-2>=menu3.x1 && points.y-26>=menu3.y1 && points.x-2<=menu3.x2 && points.y-26<=menu3.y2){
		if(GetAsyncKeyState(VK_LBUTTON)){
			GetCursorPos(&points);
				
				printf("btn3 x; %d,y; %d\n",points.x-2,points.y-26);
				
				Case=3;
				break;
			}
		}
	}
	
	
	cleardevice();

	settextstyle(4,0,8);
	if(Case == 1){
		readimagefile("levels.jpg",0,0,1500,800);
		
	while(1){
	GetCursorPos(&points);

	if(points.x-2>= back.x1 && points.y-26>= back.y1 && points.x-2<= back.x2 && points.y-26<= back.y2){
		if(GetAsyncKeyState(VK_LBUTTON)){
			
				printf("btn back x; %d,y; %d\n",points.x-2,points.y-26);
				goto cover;
				
				break;
			}
		}

	GetCursorPos(&points);

	if(points.x-2>= I.x1 && points.y-26>= I.y1 && points.x-2<= I.x2 && points.y-26<= I.y2){
		if(GetAsyncKeyState(VK_LBUTTON)){
			
				//fillellipse(points.x-2,points.y-26,3,3);
				printf("I x; %d,y; %d\n",points.x-2,points.y-26);

				Case=4;
				break;
			}
		}


	GetCursorPos(&points);

	if(points.x-2>= II.x1 && points.y-26>= II.y1 && points.x-2<= II.x2 && points.y-26<= II.y2){
		if(GetAsyncKeyState(VK_LBUTTON)){
			
				//fillellipse(points.x-2,points.y-26,3,3);
				printf("II x; %d,y; %d\n",points.x-2,points.y-26);
			
				Case=5;
				break;
			}
		}
	}
	
	}
	
	if(Case == 2){
	
		readimagefile("intro2.jpg",0,0,1500,800);
	while(1){
	GetCursorPos(&points);

	if(points.x-2>= back.x1 && points.y-26>= back.y1 && points.x-2<= back.x2 && points.y-26<= back.y2){
		if(GetAsyncKeyState(VK_LBUTTON)){
			
				printf("btn back x; %d,y; %d\n",points.x-2,points.y-26);
				goto cover;
				
				break;
			
				
				Case =0;
				
			}
		}
	}
	}

	if(Case == 3){
	exit(1);
	}


	
	if(Case==4){

	
		PlaySound("first.wav",GetModuleHandle(NULL),SND_FILENAME | SND_ASYNC);
		int gd = DETECT, gm;
	int vx = 8,cx=15,v=0;
	int x1 = 350,  y1 = 0;
	int f=0,g=0;
	  int rect1=420;
	int rect=20;
    
	int  ch = '=', inc = 23  ,page=0;
	HANDLE handle1;
	HANDLE handle2;
	initwindow(1500,800,"space invasion");
	
	for(int i = 0; i < totalbullets; i++){
		bullets[i].initBullet(x1, y1+150*i, 1);
	}	
	
	int x = 0, y = 0, w = 1500, h = 800;
	readimagefile("g.jpg",x,y,x+w,y+h);
	int imageSize = imagesize(x, y, x+w, y+h);
	void *imagePtr = malloc(imageSize);
	getimage(x, y, x+w, y+h, imagePtr);	

	v=1+rand()%3;
	//whole black bar
	setcolor(8);
	rectangle(1360,0,1500,800);
	setfillstyle(SOLID_FILL,BLACK);
	floodfill(1350,50,BLACK);

   setcolor(8);
	rectangle(1300,0,1500,400);
	setfillstyle(SOLID_FILL,BLACK);
	floodfill(1350,50,BLACK);
	
	//bar start
	setcolor(RED);             
	rectangle(1360,20,1440,380);
	setfillstyle(SOLID_FILL,RED);
	floodfill(1390,379,RED);
	//bar end
	
	
	

	//bar start
	
	setcolor(GREEN);
	rectangle(1360,420,1440,780);
	setfillstyle(SOLID_FILL,GREEN);
	floodfill(1390,779,GREEN);

	//bar end
	drawmess(f,g);
	handle1=(HANDLE)_beginthread(massage1,0,0);
	handle2=(HANDLE)_beginthread(massage2,0,0);
	while(1){
		
		while(!kbhit()){
			//buffers setup
		
			setactivepage(page);
			setvisualpage(1-page);
			
			cleardevice();
			
			putimage(x, y, imagePtr, COPY_PUT);



			//whole black bar
	setcolor(8);
	rectangle(1300,0,1500,800);
	setfillstyle(SOLID_FILL,BLACK);
	floodfill(1350,50,BLACK);


	setcolor(8);
	rectangle(1300,0,1500,400);
	setfillstyle(SOLID_FILL,BLACK);
	floodfill(1350,50,BLACK);

	

	setcolor(0);             
	//rectangle(800,0,1000,600);
	
	rectangle(1360,20,1440,380);
	setfillstyle(SOLID_FILL,0);
	floodfill(1390,379,0);
	
	//bar start
	setcolor(RED);             
	//rectangle(800,0,1000,600);
	
	rectangle(1360,rect,1440,380);
	setfillstyle(SOLID_FILL,RED);
	floodfill(1390,379,RED);
	//bar end
	
	setcolor(0);
	
	rectangle(1360,420,1440,780);
	setfillstyle(SOLID_FILL,0);
	floodfill(1390,779,0);

	

	//bar start
	
	setcolor(GREEN);
	
	rectangle(1360,rect1,1440,780);
	setfillstyle(SOLID_FILL,GREEN);
	floodfill(1390,779,GREEN);

			
      	//create storm
			/*for(int i = 0; i < 800; i+=50){
				for(int j = 0; j < 1300; j+=50){//setcolor(4);
					circle(j+50*rand()/RAND_MAX, i+50*rand()/RAND_MAX, 1);
				}
			}
			*/
			
	for(int i = 0; i < totalbullets; i++){
			if(bullets[i].alive == 1){
				bullets[i].update(a1,b1,&rect1);
				bullets[i].reset(x1, y1);
				printf("x -> %d, y -> %d\n", bullets[i].x1, bullets[i].y1);
					
			}
		}

           //draw user ship
			drawShip(ch, &a1, &b1, inc, &rect,&x1,&y1);	
			delay(50);
		readimagefile("b.bmp",x1,y1,x1+100,y1+100);
			//check boundry for enemy ship
		
			switch(v)
			{
			case 1:
			if(y1 < 0|| y1>300){
				vx *= -1;//reverse ship if out of boundry

				v=1+rand()%3;
			}

				y1+=vx;

			
			break;
			case 2:
		if(x1 <130|| x1>1096 ){
				cx *= -1; //reverse ship if out of boundry

				v=1+rand()%3;
			}

			x1+=cx;

			break;
		case 3:
			if(y1 < 0|| y1>300 ){
				vx *= -1;//reverse ship if out of boundry

				v=1+rand()%3;
			}
	
				y1+=vx; //reverse ship if out of boundry

				if(x1 <130|| x1>1096 ){
				cx *= -1;
				v=1+rand()%3;
				
			}
			
			x1+=cx;
		
			break;
			}
			
		
		ch='=';		
		
		
		page=1-page;
		}
		
		
		
		ch=getch();
		/*if(rect>379){
			Case=5;
			break;
		}*/
	}
	}



	if (Case==5){
		PlaySound("second.wav",GetModuleHandle(NULL),SND_FILENAME | SND_ASYNC);
			 HANDLE handle1;
   HANDLE handle2;
   HANDLE handle3;
	HANDLE handle4;
HANDLE handle5;
HANDLE handle6;
HANDLE handle7;
	
initwindow(1500,800,"Space Invasion level II");
 

  
	int j=0,k=0,page=0;
	
	int x4=0,y4=0;
	/*readimagefile("vb.bmp",x4,y4,x4+1500,y4+800);
void *image12;
int imgsize;
imgsize=imagesize(x4,y4,x4+1500,y4+800);
image12=malloc(imgsize);
getimage(x4,y4,x4+1500,y4+800,image12);*/



readimagefile("j.gif",x,y,x+50,y+50);
void *image3;
int imagsize;
imagsize=imagesize(x,y,x+50,y+50);
image3=malloc(imagsize);
getimage(x,y,x+50,y+50,image3);

int ch='=';
   handle1= (HANDLE)_beginthread(moveBall,0,0);
	handle2=(HANDLE)_beginthread(moveBall2,0,0);
	handle3=(HANDLE)_beginthread(movingbar,0,0);
	handle4=(HANDLE)_beginthread(movingbar2,0,0);
	handle5=(HANDLE)_beginthread(movingbar3,0,0);
	handle6=(HANDLE)_beginthread(moveBall3,0,0);
		handle7=(HANDLE)_beginthread(moveBall4,0,0);
//handle5=(HANDLE)_beginthread(movingbar3,0,0);
while(1){
		setactivepage(page);
		setvisualpage(1-page);
	cleardevice();
	
	ch='=';
   //putimage(x4,y4,image12,XOR_PUT);
	
			
      	//create storm
			for(int i = 0; i < 800; i+=50){
				for(int j = 0; j < 1500; j+=50){
					setcolor(15);
					circle(j+50*rand()/RAND_MAX, i+50*rand()/RAND_MAX, 1);
				}
			}
		
// red rectangle
	setcolor(RED);
	rectangle(682,650,850,800);
	setfillstyle(1,RED);
	floodfill(800,700,RED);

	setcolor(YELLOW);
	rectangle(697,665,835,785);
	setfillstyle(5,14);
	floodfill(800,700,14);
	
	setcolor(RED);
	rectangle(720,680,812,770);
	setfillstyle(1,4);
	floodfill(800,700,4);

	setcolor(YELLOW);
	rectangle(740,700,790,750);
	setfillstyle(5,14);
	floodfill(760,710,14);

	//green block//
    setcolor(GREEN);
	rectangle(30,200,180,350);
	setfillstyle(SOLID_FILL,2);
	floodfill(100,250,2);
	
	setcolor(8);
	rectangle(45,215,165,335);
	setfillstyle(4,8);
	floodfill(100,258,8);

	
	setcolor(GREEN);
	rectangle(60,230,150,320);
	setfillstyle(SOLID_FILL,2);
	floodfill(100,250,2);

	setcolor(8);
	rectangle(80,250,130,300);
	setfillstyle(4,8);
	floodfill(100,259,8);
	

	//bar 1//
	setcolor(8);
	rectangle(0,0,30,600);
	setfillstyle(SOLID_FILL,8);
	floodfill(20,200,8);
	
	//bar 2//
	setcolor(8);
	rectangle(0,0,650,30);
	setfillstyle(SOLID_FILL,8);
	floodfill(200,15,8);
	
	//bar 3//
	setcolor(8);
	rectangle(650,0,680,800);
	setfillstyle(SOLID_FILL,8);
	floodfill(675,500,8);

	//bar 4//
	setcolor(8);
	rectangle(0,770,650,800);
	setfillstyle(SOLID_FILL,8);
	floodfill(200,790,8);
	
	//bar 5//
	setcolor(8);
	rectangle(950,0,980,550);
	setfillstyle(SOLID_FILL,8);
	floodfill(960,200,8);
	
	//bar 6//
	setcolor(8);
	rectangle(1250,300,1280,800);
	setfillstyle(SOLID_FILL,8);
	floodfill(1260,500,8);
	
	//bar 7//
	setcolor(8);
	rectangle(1280,430,1500,460);
	setfillstyle(SOLID_FILL,8);
	floodfill(1300,450,8);

	//bar 8// as it is
	setcolor(8);
	rectangle(0,350,200,380);
	setfillstyle(SOLID_FILL,8);
	floodfill(100,375,8);
	
	//bar 9// as it is
	setcolor(8);
	rectangle(180,200,200,350);
	setfillstyle(SOLID_FILL,8);
	floodfill(190,300,8);
	
	setcolor(8);
	rectangle(682,0,948,30);
	setfillstyle(SOLID_FILL,0);
	floodfill(800,10,8);
     

	//power bar 10//
	setcolor(5);
	rectangle(rect3,1,947,29);
	setfillstyle(SOLID_FILL,5);
	floodfill(946,10,5);
    
	if(y>800){
		putimage(x,y,image3,COPY_PUT);
	y=0;
	
	  putimage(x,y,image3,COPY_PUT);           

   }
	
	if(x>1500){
		putimage(x,y,image3,COPY_PUT);
		 x=0;
	putimage(x,y,image3,COPY_PUT);
	}

	if(y<0){
  
		
   putimage(x,y,image3,COPY_PUT);
     y=800;
	
	putimage(x,y,image3,COPY_PUT);
    }
	if(x<0){
  
		putimage(x,y,image3,COPY_PUT);
	
    x=1500;
	
	putimage(x,y,image3,COPY_PUT);

    }
	
	ch='=';
	if(kbhit())
	ch=getch();
	//key Left
	switch(ch){
	case 75:
   

		if((x>= 0 && x<= 30 && y>=0 && y<=600) || (x>= 0 && x<= 650 &&  y>=0 && y<=30) || (x>= 650 && x<= 680 && y>=0 && y<=800) || (x >=0 && x<= 650 && y>=770 && y<=800)  || (x>= 950 && x<= 980 && y>=0 && y<=550) || (x>=1250 && x<=1280 && y>=300 && y<=800) || (x>=1280 && x<=1500 && y>=430 && y<=460) || (x>=0 && x<=200 && y>=350 && y<=380) || (x>=180 && x<=200 && y>=200 && y<=350) || (x>=682 && x<=948 && y>=0 && y<=30) || (x+50>=0 && x+50<=30 && y+50>=0 && y+50<=600) || (x+50>=0 && x+50<=650 &&  y+50>=0 && y+50<=30) || (x+50>=650 && x+50<=680 && y+50>=0 && y+50<=800) || (x+50>=0 && x+50<=650 && y+50>=770 && y+50<=800)  || (x+50>=950 && x+50<=980 && y+50>=0 && y+50<=550) || (x+50>=1250 && x+50<=1280 && y+50>=300 && y+50<=800) || (x+50>=1280 && x+50<=1500 && y+50>=430 && y+50<=460) || (x+50>=0 && x+50<=200 && y+50>=350 && y+50<=380) || (x+50>=180 && x+50<=200 && y+50>=200 && y+50<=350) || (x+50>=682 && x+50<=948 && y+50>=0 && y+50<=30) ||   (x+50>= 0 && x+50<= 30 && y>=0 && y<=600) || (x+50>= 0 && x+50<= 650 &&  y>=0 && y<=30) || (x>= 650 && x<= 680 && y>=0 && y<=800) || (x+50 >=0 && x+50<= 650 && y>=770 && y<=800)  || (x+50>= 950 && x+50<= 980 && y>=0 && y<=550) || (x+50>=1250 && x+50<=1280 && y>=300 && y<=800) || (x+50>=1280 && x+50<=1500 && y>=430 && y<=460) || (x+50>=0 && x+50<=200 && y>=350 && y<=380) || (x+50>=180 && x+50<=200 && y>=200 && y<=350) || (x+50>=682 && x+50<=948 && y>=0 && y<=30) || (x>=0 && x<=30 && y+50>=0 && y+50<=600) || (x>=0 && x<=650 &&  y+50>=0 && y+50<=30) || (x>=650 && x<=680 && y+50>=0 && y+50<=800) || (x>=0 && x<=650 && y+50>=770 && y+50<=800)  || (x>=950 && x<=980 && y+50>=0 && y+50<=550) || (x>=1250 && x<=1280 && y+50>=300 && y+50<=800) || (x>=1280 && x<=1500 && y+50>=430 && y+50<=460) || (x>=0 && x<=200 && y+50>=350 && y+50<=380) || (x>=180 && x<=200 && y+50>=200 && y+50<=350) || (x>=682 && x<=948 && y+50>=0 && y+50<=30) ){
	x=740;
	y=700;
	putimage(x,y,image3,COPY_PUT);

	break;
    }
	 j=-5;
	k=0;
	x+=j;
	y+=k;
	putimage(x,y,image3,COPY_PUT);
	if((x>=80 && x<=82) && (y>=250 && y<=252)){
		 
		// exit(1);
		initwindow(1500,800,"space Invasion II");

	
	readimagefile("mision.jpg",633,100,1000,600);
		delay(10000);
		exit(1);
	 }
	if(((x+50>=1000 && x+50<=1020) && (y+50>=760 && y+50<=800)) || ((x>=1000 && x<=1020) && (y+50>=760 && y+50<=800)) ||  ((x>=1000 && x<=1020) && (y>=760 && y<=800)) || ((x+50>=1000 && x+50<=1020) && (y>=760 && y<=800))  ){
		initwindow(1500,800,"space Invasion II");
	
	readimagefile("failed.jpg",633,100,1000,600);
		delay(5000);
		exit(1);
	}
	if(((x+50>=1170 && x+50<=1190) && (y+50>=760 && y+50<=800)) || ((x>=1170 && x<=1190) && (y+50>=760 && y+50<=800)) || ((x>=1170 && x<=1190) && (y>=760 && y<=800)) || ((x+50>=1170 && x+50<=1190) && (y>=760 && y<=800)) ){
		//exit(1);
		initwindow(1500,800,"space Invasion II");
	
	readimagefile("failed.jpg",633,100,1000,600);

		delay(5000);
		exit(1);
	}
	if(((x+50>=1090 && x+50<=1110) && (y+50>=760 && y+50<=800)) || ((x>=1090 && x<=1110) && (y+50>=760 && y+50<=800)) || ((x>=1090 && x<=1110) && (y>=760 && y<=800))  || ((x+50>=1090 && x+50<=1110) && (y>=760 && y<=800))  ){
		//exit(1);
		initwindow(1500,800,"space Invasion II");
	
	readimagefile("failed.jpg",633,100,1000,600);
		delay(5000);
		exit(1);
	}

	if(((x+50>=1000 && x+50<=1020) && (y+50>=0 && y+50<=40)) || ((x>=1000 && x<=1020) && (y>=0 && y<=40))  || ((x+50>=1000 && x+50<=1020) && (y>=0 && y<=40)) || ((x>=1000 && x<=1020) && (y+50>=0 && y+50<=40)) ){
		//exit(1);
		initwindow(1500,800,"space Invasion II");
	
	readimagefile("failed.jpg",633,100,1000,600);
		delay(5000);
		exit(1);
	}
	if(((x+50>=1170 && x+50<=1190) && (y+50>=0 && y+50<=40)) || ((x>=1170 && x<=1190) && (y>=0 && y<=40)) ||  ((x+50>=1170 && x+50<=1190) && (y>=0 && y<=40)) || ((x>=1170 && x<=1190) && (y+50>=0 && y+50<=40)) ){
		//exit(1);
		initwindow(1500,800,"space Invasion II");
	
	readimagefile("failed.jpg",633,100,1000,600);
		delay(5000);
		exit(1);
	}
	if(((x+50>=1090 && x+50<=1110) && (y+50>=0 && y+50<=40)) || ((x>=1090 && x<=1110) && (y>=0 && y<=40)) || ((x+50>=1090 && x+50<=1110) && (y>=0 && y<=40)) || ((x>=1090 && x<=1110) && (y+50>=0 && y+50<=40)) ){
		//exit(1);
		initwindow(1500,800,"space Invasion II");
	
	readimagefile("failed.jpg",633,100,1000,600);
		delay(5000);
		exit(1);
	}
	
	break;

	//key Right
	case 77:
	
		if((x>= 0 && x<= 30 && y>=0 && y<=600) || (x>= 0 && x<= 650 &&  y>=0 && y<=30) || (x>= 650 && x<= 680 && y>=0 && y<=800) || (x >=0 && x<= 650 && y>=770 && y<=800)  || (x>= 950 && x<= 980 && y>=0 && y<=550) || (x>=1250 && x<=1280 && y>=300 && y<=800) || (x>=1280 && x<=1500 && y>=430 && y<=460) || (x>=0 && x<=200 && y>=350 && y<=380) || (x>=180 && x<=200 && y>=200 && y<=350) || (x>=682 && x<=948 && y>=0 && y<=30) || (x+50>=0 && x+50<=30 && y+50>=0 && y+50<=600) || (x+50>=0 && x+50<=650 &&  y+50>=0 && y+50<=30) || (x+50>=650 && x+50<=680 && y+50>=0 && y+50<=800) || (x+50>=0 && x+50<=650 && y+50>=770 && y+50<=800)  || (x+50>=950 && x+50<=980 && y+50>=0 && y+50<=550) || (x+50>=1250 && x+50<=1280 && y+50>=300 && y+50<=800) || (x+50>=1280 && x+50<=1500 && y+50>=430 && y+50<=460) || (x+50>=0 && x+50<=200 && y+50>=350 && y+50<=380) || (x+50>=180 && x+50<=200 && y+50>=200 && y+50<=350) || (x+50>=682 && x+50<=948 && y+50>=0 && y+50<=30) ||   (x+50>= 0 && x+50<= 30 && y>=0 && y<=600) || (x+50>= 0 && x+50<= 650 &&  y>=0 && y<=30) || (x>= 650 && x<= 680 && y>=0 && y<=800) || (x+50 >=0 && x+50<= 650 && y>=770 && y<=800)  || (x+50>= 950 && x+50<= 980 && y>=0 && y<=550) || (x+50>=1250 && x+50<=1280 && y>=300 && y<=800) || (x+50>=1280 && x+50<=1500 && y>=430 && y<=460) || (x+50>=0 && x+50<=200 && y>=350 && y<=380) || (x+50>=180 && x+50<=200 && y>=200 && y<=350) || (x+50>=682 && x+50<=948 && y>=0 && y<=30) || (x>=0 && x<=30 && y+50>=0 && y+50<=600) || (x>=0 && x<=650 &&  y+50>=0 && y+50<=30) || (x>=650 && x<=680 && y+50>=0 && y+50<=800) || (x>=0 && x<=650 && y+50>=770 && y+50<=800)  || (x>=950 && x<=980 && y+50>=0 && y+50<=550) || (x>=1250 && x<=1280 && y+50>=300 && y+50<=800) || (x>=1280 && x<=1500 && y+50>=430 && y+50<=460) || (x>=0 && x<=200 && y+50>=350 && y+50<=380) || (x>=180 && x<=200 && y+50>=200 && y+50<=350) || (x>=682 && x<=948 && y+50>=0 && y+50<=30) ){
	
	
		x=740;
	y=700;
	putimage(x,y,image3,COPY_PUT);
	
break;
	
    }
	j=5;
	k=0;
	x+=j;
	y+=k;
	putimage(x,y,image3,COPY_PUT);
	if((x>=80 && x<=82) && (y>=250 && y<=252)){
		 
		 //exit(1);
		initwindow(1500,800,"space Invasion II");
	
	readimagefile("mision.jpg",633,100,1000,600);
		delay(10000);
		
		exit(1);
	}
	if(((x+50>=1000 && x+50<=1020) && (y+50>=760 && y+50<=800)) || ((x>=1000 && x<=1020) && (y+50>=760 && y+50<=800)) ||  ((x>=1000 && x<=1020) && (y>=760 && y<=800)) || ((x+50>=1000 && x+50<=1020) && (y>=760 && y<=800))  ){
		//exit(1);
		initwindow(1500,800,"space Invasion II");
	
	readimagefile("failed.jpg",633,100,1000,600);
		delay(5000);
		exit(1);
	}
	
		if(((x+50>=1170 && x+50<=1190) && (y+50>=760 && y+50<=800)) || ((x>=1170 && x<=1190) && (y+50>=760 && y+50<=800)) || ((x>=1170 && x<=1190) && (y>=760 && y<=800)) || ((x+50>=1170 && x+50<=1190) && (y>=760 && y<=800)) ){
		//exit(1);
			initwindow(1500,800,"space Invasion II");
	
	readimagefile("failed.jpg",633,100,1000,600);
		delay(5000);
		exit(1);
	}
	if(((x+50>=1090 && x+50<=1110) && (y+50>=760 && y+50<=800)) || ((x>=1090 && x<=1110) && (y+50>=760 && y+50<=800)) || ((x>=1090 && x<=1110) && (y>=760 && y<=800))  || ((x+50>=1090 && x+50<=1110) && (y>=760 && y<=800))  ){
		//exit(1);
		initwindow(1500,800,"space Invasion II");
	
	readimagefile("failed.jpg",633,100,1000,600);
		delay(5000);
		exit(1);
	}

	if(((x+50>=1000 && x+50<=1020) && (y+50>=0 && y+50<=40)) || ((x>=1000 && x<=1020) && (y>=0 && y<=40))  || ((x+50>=1000 && x+50<=1020) && (y>=0 && y<=40)) || ((x>=1000 && x<=1020) && (y+50>=0 && y+50<=40)) ){
		//exit(1);
		initwindow(1500,800,"space Invasion II");
	
	readimagefile("failed.jpg",633,100,1000,600);
		delay(5000);
		exit(1);
	}
	if(((x+50>=1170 && x+50<=1190) && (y+50>=0 && y+50<=40)) || ((x>=1170 && x<=1190) && (y>=0 && y<=40)) ||  ((x+50>=1170 && x+50<=1190) && (y>=0 && y<=40)) || ((x>=1170 && x<=1190) && (y+50>=0 && y+50<=40)) ){
		//exit(1);
		initwindow(1500,800,"space Invasion II");
	
	readimagefile("failed.jpg",633,100,1000,600);
		delay(5000);
		exit(1);
	}
	if(((x+50>=1090 && x+50<=1110) && (y+50>=0 && y+50<=40)) || ((x>=1090 && x<=1110) && (y>=0 && y<=40)) || ((x+50>=1090 && x+50<=1110) && (y>=0 && y<=40)) || ((x>=1090 && x<=1110) && (y+50>=0 && y+50<=40)) ){
		//exit(1);
		initwindow(1500,800,"space Invasion II");
	
	readimagefile("failed.jpg",633,100,1000,600);
	delay(5000);
		exit(1);
	}
	break;
	
	//key Up
	case 72:
		
	if((x>= 0 && x<= 30 && y>=0 && y<=600) || (x>= 0 && x<= 650 &&  y>=0 && y<=30) || (x>= 650 && x<= 680 && y>=0 && y<=800) || (x >=0 && x<= 650 && y>=770 && y<=800)  || (x>= 950 && x<= 980 && y>=0 && y<=550) || (x>=1250 && x<=1280 && y>=300 && y<=800) || (x>=1280 && x<=1500 && y>=430 && y<=460) || (x>=0 && x<=200 && y>=350 && y<=380) || (x>=180 && x<=200 && y>=200 && y<=350) || (x>=682 && x<=948 && y>=0 && y<=30) || (x+50>=0 && x+50<=30 && y+50>=0 && y+50<=600) || (x+50>=0 && x+50<=650 &&  y+50>=0 && y+50<=30) || (x+50>=650 && x+50<=680 && y+50>=0 && y+50<=800) || (x+50>=0 && x+50<=650 && y+50>=770 && y+50<=800)  || (x+50>=950 && x+50<=980 && y+50>=0 && y+50<=550) || (x+50>=1250 && x+50<=1280 && y+50>=300 && y+50<=800) || (x+50>=1280 && x+50<=1500 && y+50>=430 && y+50<=460) || (x+50>=0 && x+50<=200 && y+50>=350 && y+50<=380) || (x+50>=180 && x+50<=200 && y+50>=200 && y+50<=350) || (x+50>=682 && x+50<=948 && y+50>=0 && y+50<=30) ||   (x+50>= 0 && x+50<= 30 && y>=0 && y<=600) || (x+50>= 0 && x+50<= 650 &&  y>=0 && y<=30) || (x>= 650 && x<= 680 && y>=0 && y<=800) || (x+50 >=0 && x+50<= 650 && y>=770 && y<=800)  || (x+50>= 950 && x+50<= 980 && y>=0 && y<=550) || (x+50>=1250 && x+50<=1280 && y>=300 && y<=800) || (x+50>=1280 && x+50<=1500 && y>=430 && y<=460) || (x+50>=0 && x+50<=200 && y>=350 && y<=380) || (x+50>=180 && x+50<=200 && y>=200 && y<=350) || (x+50>=682 && x+50<=948 && y>=0 && y<=30) || (x>=0 && x<=30 && y+50>=0 && y+50<=600) || (x>=0 && x<=650 &&  y+50>=0 && y+50<=30) || (x>=650 && x<=680 && y+50>=0 && y+50<=800) || (x>=0 && x<=650 && y+50>=770 && y+50<=800)  || (x>=950 && x<=980 && y+50>=0 && y+50<=550) || (x>=1250 && x<=1280 && y+50>=300 && y+50<=800) || (x>=1280 && x<=1500 && y+50>=430 && y+50<=460) || (x>=0 && x<=200 && y+50>=350 && y+50<=380) || (x>=180 && x<=200 && y+50>=200 && y+50<=350) || (x>=682 && x<=948 && y+50>=0 && y+50<=30) ){
	
		x=740;
	y=700;
	putimage(x,y,image3,COPY_PUT);
	
	break;
    }
	j=0;
	k=-5;
	x+=j;
	y+=k;
	putimage(x,y,image3,COPY_PUT);
	if((x>=80 && x<=82) && (y>=250 && y<=252)){
		 
		// exit(1);
		initwindow(1500,800,"space Invasion II");
	
	readimagefile("mision.jpg",633,100,1000,600);
		delay(10000);
		exit(1);
	 }
	if(((x+50>=1000 && x+50<=1020) && (y+50>=760 && y+50<=800)) || ((x>=1000 && x<=1020) && (y+50>=760 && y+50<=800)) ||  ((x>=1000 && x<=1020) && (y>=760 && y<=800)) || ((x+50>=1000 && x+50<=1020) && (y>=760 && y<=800))  ){
		//exit(1);
		initwindow(1500,800,"space Invasion II");
	
	readimagefile("failed.jpg",633,100,1000,600);
		delay(5000);
		exit(1);
	}
		
	
		if(((x+50>=1170 && x+50<=1190) && (y+50>=760 && y+50<=800)) || ((x>=1170 && x<=1190) && (y+50>=760 && y+50<=800)) || ((x>=1170 && x<=1190) && (y>=760 && y<=800)) || ((x+50>=1170 && x+50<=1190) && (y>=760 && y<=800)) ){
		//exit(1);
			initwindow(1500,800,"space Invasion II");
	
	readimagefile("failed.jpg",633,100,1000,600);
		delay(5000);
		exit(1);
	}
	if(((x+50>=1090 && x+50<=1110) && (y+50>=760 && y+50<=800)) || ((x>=1090 && x<=1110) && (y+50>=760 && y+50<=800)) || ((x>=1090 && x<=1110) && (y>=760 && y<=800))  || ((x+50>=1090 && x+50<=1110) && (y>=760 && y<=800))  ){
		//exit(1);
		initwindow(1500,800,"space Invasion II");
	
	readimagefile("failed.jpg",633,100,1000,600);
		delay(5000);
		exit(1);
	}
	
	if(((x+50>=1000 && x+50<=1020) && (y+50>=0 && y+50<=40)) || ((x>=1000 && x<=1020) && (y>=0 && y<=40))  || ((x+50>=1000 && x+50<=1020) && (y>=0 && y<=40)) || ((x>=1000 && x<=1020) && (y+50>=0 && y+50<=40)) ){
		//exit(1);
		initwindow(1500,800,"space Invasion II");
	
	readimagefile("failed.jpg",633,100,1000,600);
		delay(5000);
		exit(1);
	}
	if(((x+50>=1170 && x+50<=1190) && (y+50>=0 && y+50<=40)) || ((x>=1170 && x<=1190) && (y>=0 && y<=40)) ||  ((x+50>=1170 && x+50<=1190) && (y>=0 && y<=40)) || ((x>=1170 && x<=1190) && (y+50>=0 && y+50<=40)) ){
		//exit(1);
		initwindow(1500,800,"space Invasion II");
	
	readimagefile("failed.jpg",633,100,1000,600);
		delay(5000);
		exit(1);
	}
if(((x+50>=1090 && x+50<=1110) && (y+50>=0 && y+50<=40)) || ((x>=1090 && x<=1110) && (y>=0 && y<=40)) || ((x+50>=1090 && x+50<=1110) && (y>=0 && y<=40)) || ((x>=1090 && x<=1110) && (y+50>=0 && y+50<=40)) ){
		//exit(1);
	initwindow(1500,800,"space Invasion II");
	
	readimagefile("failed.jpg",633,100,1000,600);
		delay(5000);
		exit(1);
	}

	break;
	
	
	//key Down
	case 80:
	
		if((x>= 0 && x<= 30 && y>=0 && y<=600) || (x>= 0 && x<= 650 &&  y>=0 && y<=30) || (x>= 650 && x<= 680 && y>=0 && y<=800) || (x >=0 && x<= 650 && y>=770 && y<=800)  || (x>= 950 && x<= 980 && y>=0 && y<=550) || (x>=1250 && x<=1280 && y>=300 && y<=800) || (x>=1280 && x<=1500 && y>=430 && y<=460) || (x>=0 && x<=200 && y>=350 && y<=380) || (x>=180 && x<=200 && y>=200 && y<=350) || (x>=682 && x<=948 && y>=0 && y<=30) || (x+50>=0 && x+50<=30 && y+50>=0 && y+50<=600) || (x+50>=0 && x+50<=650 &&  y+50>=0 && y+50<=30) || (x+50>=650 && x+50<=680 && y+50>=0 && y+50<=800) || (x+50>=0 && x+50<=650 && y+50>=770 && y+50<=800)  || (x+50>=950 && x+50<=980 && y+50>=0 && y+50<=550) || (x+50>=1250 && x+50<=1280 && y+50>=300 && y+50<=800) || (x+50>=1280 && x+50<=1500 && y+50>=430 && y+50<=460) || (x+50>=0 && x+50<=200 && y+50>=350 && y+50<=380) || (x+50>=180 && x+50<=200 && y+50>=200 && y+50<=350) || (x+50>=682 && x+50<=948 && y+50>=0 && y+50<=30) ||   (x+50>= 0 && x+50<= 30 && y>=0 && y<=600) || (x+50>= 0 && x+50<= 650 &&  y>=0 && y<=30) || (x>= 650 && x<= 680 && y>=0 && y<=800) || (x+50 >=0 && x+50<= 650 && y>=770 && y<=800)  || (x+50>= 950 && x+50<= 980 && y>=0 && y<=550) || (x+50>=1250 && x+50<=1280 && y>=300 && y<=800) || (x+50>=1280 && x+50<=1500 && y>=430 && y<=460) || (x+50>=0 && x+50<=200 && y>=350 && y<=380) || (x+50>=180 && x+50<=200 && y>=200 && y<=350) || (x+50>=682 && x+50<=948 && y>=0 && y<=30) || (x>=0 && x<=30 && y+50>=0 && y+50<=600) || (x>=0 && x<=650 &&  y+50>=0 && y+50<=30) || (x>=650 && x<=680 && y+50>=0 && y+50<=800) || (x>=0 && x<=650 && y+50>=770 && y+50<=800)  || (x>=950 && x<=980 && y+50>=0 && y+50<=550) || (x>=1250 && x<=1280 && y+50>=300 && y+50<=800) || (x>=1280 && x<=1500 && y+50>=430 && y+50<=460) || (x>=0 && x<=200 && y+50>=350 && y+50<=380) || (x>=180 && x<=200 && y+50>=200 && y+50<=350) || (x>=682 && x<=948 && y+50>=0 && y+50<=30) ){
	
		x=740;
	y=700;
	putimage(x,y,image3,COPY_PUT);
	
	break;
    }
	j=0;
	k=5;
	x+=j;
	y+=k;
	putimage(x,y,image3,COPY_PUT);
	if((x>=80 && x<=82) && (y>=250 && y<=252)){
		 
		// exit(1);
		initwindow(1500,800,"space Invasion II");
	
	readimagefile("mision.jpg",633,100,1000,600);
		delay(10000);
		exit(1);
	 }
	if(((x+50>=1000 && x+50<=1020) && (y+50>=760 && y+50<=800)) || ((x>=1000 && x<=1020) && (y+50>=760 && y+50<=800)) ||  ((x>=1000 && x<=1020) && (y>=760 && y<=800)) || ((x+50>=1000 && x+50<=1020) && (y>=760 && y<=800))  ){
		//exit(1);
		initwindow(1500,800,"space Invasion II");
	
	readimagefile("failed.jpg",633,100,1000,600);
		delay(5000);
		exit(1);
	}
	if(((x+50>=1170 && x+50<=1190) && (y+50>=760 && y+50<=800)) || ((x>=1170 && x<=1190) && (y+50>=760 && y+50<=800)) || ((x>=1170 && x<=1190) && (y>=760 && y<=800)) || ((x+50>=1170 && x+50<=1190) && (y>=760 && y<=800)) ){
		//exit(1);
		initwindow(1500,800,"space Invasion II");
	
	readimagefile("failed.jpg",633,100,1000,600);
		delay(5000);
		exit(1);
	}
	if(((x+50>=1090 && x+50<=1110) && (y+50>=760 && y+50<=800)) || ((x>=1090 && x<=1110) && (y+50>=760 && y+50<=800)) || ((x>=1090 && x<=1110) && (y>=760 && y<=800))  || ((x+50>=1090 && x+50<=1110) && (y>=760 && y<=800))  ){
		//exit(1);
		initwindow(1500,800,"space Invasion II");
	
	readimagefile("failed.jpg",633,100,1000,600);
		delay(5000);
		exit(1);
	}

	if(((x+50>=1000 && x+50<=1020) && (y+50>=0 && y+50<=40)) || ((x>=1000 && x<=1020) && (y>=0 && y<=40))  || ((x+50>=1000 && x+50<=1020) && (y>=0 && y<=40)) || ((x>=1000 && x<=1020) && (y+50>=0 && y+50<=40)) ){
		//exit(1);
		initwindow(1500,800,"space Invasion II");
	
	readimagefile("failed.jpg",633,100,1000,600);
		delay(5000);
		exit(1);
	}
	if(((x+50>=1170 && x+50<=1190) && (y+50>=0 && y+50<=40)) || ((x>=1170 && x<=1190) && (y>=0 && y<=40)) ||  ((x+50>=1170 && x+50<=1190) && (y>=0 && y<=40)) || ((x>=1170 && x<=1190) && (y+50>=0 && y+50<=40)) ){
		//exit(1);
		initwindow(1500,800,"space Invasion II");
	
	readimagefile("failed.jpg",633,100,1000,600);
		delay(5000);
		exit(1);
	}
	if(((x+50>=1090 && x+50<=1110) && (y+50>=0 && y+50<=40)) || ((x>=1090 && x<=1110) && (y>=0 && y<=40)) || ((x+50>=1090 && x+50<=1110) && (y>=0 && y<=40))  || ((x>=1090 && x<=1110) && (y+50>=0 && y+50<=40)) ){
		//exit(1);
		initwindow(1500,800,"space Invasion II");
	
	readimagefile("failed.jpg",633,100,1000,600);
		delay(5000);
		exit(1);
	}

	break;
	
	
	case 27:
		exit(1);
		break;
	default:
 putimage(x,y,image3,COPY_PUT);
	}




	
	//bar 1//
	setcolor(8);
	rectangle(0,0,30,600);
	setfillstyle(SOLID_FILL,8);
	floodfill(20,200,8);
	
	//bar 2//
	setcolor(8);
	rectangle(0,0,650,30);
	setfillstyle(SOLID_FILL,8);
	floodfill(200,15,8);
	
	//bar 3//
	setcolor(8);
	rectangle(650,0,680,800);
	setfillstyle(SOLID_FILL,8);
	floodfill(675,500,8);

	//bar 4//
	setcolor(8);
	rectangle(0,770,650,800);
	setfillstyle(SOLID_FILL,8);
	floodfill(200,790,8);
	
	//bar 5//
	setcolor(8);
	rectangle(950,0,980,550);
	setfillstyle(SOLID_FILL,8);
	floodfill(960,200,8);
	
	//bar 6//
	setcolor(8);
	rectangle(1250,300,1280,800);
	setfillstyle(SOLID_FILL,8);
	floodfill(1260,500,8);
	
	//bar 7//
	setcolor(8);
	rectangle(1280,430,1500,460);
	setfillstyle(SOLID_FILL,8);
	floodfill(1300,450,8);

	//bar 8// as it is
	setcolor(8);
	rectangle(0,350,200,380);
	setfillstyle(SOLID_FILL,8);
	floodfill(100,375,8);
	
	//bar 9// as it is
	setcolor(8);
	rectangle(180,200,200,350);
	setfillstyle(SOLID_FILL,8);
	floodfill(190,300,8);
	

	setcolor(8);
	rectangle(682,0,948,30);
	setfillstyle(SOLID_FILL,0);
	floodfill(800,10,8);

	//power bar 10//
	setcolor(5);
	rectangle(rect3,1,947,29);
	setfillstyle(SOLID_FILL,5);
	floodfill(946,10,5);
     ch='=';

	
	page=1-page;
}
}
	getch();
}




 



void drawShip(char ch, int *a1, int *b1, int inc,int *rect,int *x1,int *y1 ) {
    
		int i,h,j=0;
		int c;
		int collX,collY,sq;
		int bullets[14]={*a1+50,*b1,*a1+50,*b1,*a1+50,*b1,*a1+50,*b1,*a1+50,*b1,*a1+50,*b1,*a1+50,*b1};
		
	
		c=20+rand()%60;
		
		switch(ch)
	{
	case  keyUp:
		*b1-=inc;
		if(*b1<400){
			*b1+=inc;
		}
		
		readimagefile("c.bmp",*a1,*b1,*a1+100,*b1+100);
		break;
	case keyDown:
		*b1+=inc;
		if(*b1>700){
			*b1-=inc;
		}
		
		readimagefile("c.bmp",*a1,*b1,*a1+100,*b1+100);
		break;
	case keyLeft:
		*a1-=inc;
		if(*a1<0){
			*a1+=inc;
		}
		
		readimagefile("c.bmp",*a1,*b1,*a1+100,*b1+100);
		break;
	case keyRight:
		*a1+=inc;
		if(*a1>1196){
			*a1-=inc;
		}
		
		readimagefile("c.bmp",*a1,*b1,*a1+100,*b1+100);
		break;
	case spacebar:
		
		for( j=0;j<14;j+=2){
			setfillstyle(1,YELLOW);
			fillellipse(bullets[j],bullets[j+1],5,5);
		

			for( h=0;h<14;h+=2){
			bullets[h+1] -= 150-c;
			
			if(*y1<= bullets[h+3] && *y1+100>= bullets[h+3] && *x1<=bullets[h+2] && *x1+100>= bullets[h+2]){
				bullets[h+3]=*b1;
				bullets[h+2]=*a1+50;
			}

	if(*y1<= bullets[h+1] && *y1+100>= bullets[h+1] && *x1<=bullets[h] && *x1+100>= bullets[h]){
		//bar start
	
	setcolor(0);
	
	rectangle(1360,20,1440,380);
	setfillstyle(SOLID_FILL,0);
	floodfill(1390,379,0);
	//bar end

	if(*rect<=379){
		*rect+=1;
	setcolor(4);
	rectangle(1360,*rect,1440,380);
	setfillstyle(SOLID_FILL,RED);
	floodfill(1390,379,RED);
     }

	else{
	

		//cleardevice();
		initwindow(1500,800,"space Invasion");
	
	readimagefile("mision.jpg",100,0,1200,800);
		delay(10000);
		//Case=5;
		//break;
		exit(1);
	}
	
			}
			
		
			if(bullets[j+1]<0){
				for( i = 0; i < 14; i+=2){
					bullets[i] =* a1+50;
					bullets[i +1] = *b1;
				}
			}
			}
	/*	if(*rect>379){
			Case=5;
			break;
		}*/
			}
			readimagefile("c.bmp",*a1,*b1,*a1+100,*b1+100);
		
		break;
	case keyEsc:
		exit(1);
		break;
	default:
		
		readimagefile("c.bmp",*a1,*b1,*a1+100,*b1+100);
	}
}










/*
if(GetAsyncKeyState(VK_LBUTTON)){
				//fillellipse(cord.x-2,cord.y-26,3,3);
				printf("x-- %d,y-- %d\n",points.x-2,points.y-26);
			}
*/

