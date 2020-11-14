#include<graphics.h>
#include<conio.h>
#include<malloc.h>
#include<stdlib.h>
#include<dos.h>
#include<iostream.h>
int k=1, i, user=0, dice=0, x1=50, y1=410, x2=70, y2=410, dir1=0,
dir2=0,gd=DETECT,gm,
ch;
int cnt1=1, cnt2=1;
void *obj1, *obj2, *o1, *o2, *dot, *back, *turn, *ready;
unsigned int size;
int display()
{
	setcolor(RED);
	settextstyle(GOTHIC_FONT,HORIZ_DIR,6);
	outtextxy(10,50,"SNAKES AND LADDER");
	setcolor(3);
	setlinestyle(DASHED_LINE,10,2);
	line(10,110,630,110);
	for(i=40;i<=600;i+=40){
	line(i,110,i-5,130);
	line(i+5,110,i,130);
	}
	line(600,110,595,130);
	setcolor(3);
	setlinestyle(DASHED_LINE,10,2);
	line(10,130,630,130);
	setcolor(14);
	settextstyle(1,HORIZ_DIR,1);
	outtextxy(195,230,"1) Player VS Computer (press 1)");
	outtextxy(195,280, "2) Player 1 VS Player 2 (press 2)");
	setlinestyle(SOLID_LINE,0,1);
	setcolor(8);
	arc(130,220,150,180,40);//130,220-->centre of arc-->150,180-->start,end,40-->radius
	arc(130,220,180,253,40);
	arc(105,328,273,80,70);
	arc(143,220,150,180,40);
	arc(143,215,180,230,40);
	arc(112,328,265,50,75);
	arc(80,354,45,72,115);
	line(102,400,104,402);
	line(102,400,107,399);
	line(95,200,110,185);
	line(110,185,109,200);
	line(110,185,111,182);
	circle(104,198,1);
	setfillstyle(SLASH_FILL,13);
	floodfill(103,199,8);
	arc(604,354,108,135,115);
	arc(573,328,130,275,75);
	arc(580,328,100,267,70);
	arc(543,220,0,30,40);
	arc(556,220,0,30,40);
	arc(556,220,287,0,40);
	arc(543,215,310,0,40);
	line(580,185,578,200);
	line(579,185,591,200);
	line(582,400,580,402);
	line(582,400,578,398);
	circle(584,198,1);
	setfillstyle(SLASH_FILL,2);
	floodfill(583,199,8);
	ch=getch();
	//return ch;
	closegraph();
	initgraph(&gd,&gm,"..\\bgi");

	if(ch==49)
	{
		return 1;
	}
	else if(ch==50)
	{
		return 2;
	}
	else
	{
		exit(0);
	}
}


void ladder1()
{
	int m,n;
	for(m=0;m<=250;m+=250)
	for(n=0;n<=m;n+=250)
	{
		setcolor(DARKGRAY);
		line(53+m,57+n,55+m,55+n);
		line(53+m,57+n,133+m,137+n);
		line(55+m,55+n,135+m,135+n);
		line(133+m,137+n,135+m,135+n);
		setfillstyle(SOLID_FILL, 3);
		floodfill(55+m,58+n,DARKGRAY);
		line(68+m,42+n,70+m,40+n);
		line(68+m,42+n,148+m,122+n);
		line(70+m,40+n,150+m,120+n);
		line(148+m,122+n,150+m,120+n);
		floodfill(70+m,43+n,DARKGRAY);
		line(65+m,65+n,78+m,52+n);
		line(68+m,68+n,81+m,55+n);
		floodfill(79+m,54+n,DARKGRAY);
		line(75+m,75+n,88+m,62+n);
		line(78+m,78+n,91+m,65+n);
		floodfill(89+m,64+n,DARKGRAY);
		line(85+m,85+n,98+m,72+n);
		line(88+m,88+n,101+m,75+n);
		floodfill(99+m,74+n,DARKGRAY);
		line(95+m,95+n,108+m,82+n);
		line(98+m,98+n,111+m,85+n);
		floodfill(109+m,84+n,DARKGRAY);
		line(105+m,105+n,118+m,92+n);
		line(108+m,108+n,121+m,95+n);
		floodfill(119+m,94+n,DARKGRAY);
		line(115+m,115+n,128+m,102+n);
		line(118+m,118+n,131+m,105+n);
		floodfill(129+m,104+n,DARKGRAY);
		line(125+m,125+n,138+m,112+n);
		line(128+m,128+n,141+m,115+n);
		floodfill(139+m,114+n,DARKGRAY);
	}
}

void ladder2()
{
	int p,q=0;
	for(p=0;p<=180;p+=155)
	{
		setfillstyle(SOLID_FILL,5);
		line(100+p,330-q,140+p,290-q);
		line(100+p,330-q,102+p,332-q);
		line(102+p,332-q,142+p,292-q);
		line(142+p,292-q,140+p,290-q);
		floodfill(141+p,292-q,8);
		line(115+p,345-q,155+p,305-q);
		line(115+p,345-q,117+p,347-q);
		line(117+p,347-q,157+p,307-q);
		line(157+p,307-q,155+p,305-q);
		floodfill(155+p,307-q,8);
		line(112+p,322-q,125+p,335-q);
		line(114+p,320-q,127+p,333-q);
		floodfill(125+p,334-q,8);
		line(122+p,312-q,135+p,325-q);
		line(124+p,310-q,137+p,323-q);
		floodfill(135+p,324-q,8);
		line(132+p,302-q,145+p,315-q);
		line(134+p,300-q,147+p,313-q);
		floodfill(145+p,314-q,8);
		q+=95;
	}
}

void snake1()
{
	int x,y=0,h=4;
	for(x=0;x<=200;x+=125)
	{
		arc(120+x,110+y,10,85,60);
		arc(258+x,85+y,190,240,80);
		arc(112+x,118+y,10,80,60);
		arc(250+x,93+y,190,290,80);
		arc(275+x,100+y,250,270,70);
		line(250+x,170+y,250+x,165+y);
		line(250+x,165+y,230+x,160+y);
		line(230+x,160+y,218+x,155+y);
		line(130+x,50+y,115+x,47+y);
		line(121+x,59+y,106+x,52+y);
		line(106+x,52+y,114+x,48+y);
		circle(114+x,52+y,1);
		setfillstyle(SLASH_FILL,h);
		floodfill(116+x,52+y,8);
		y+=230;    h+=8;
	}
}

void snake2()
{
	arc(130,220,150,180,40);
	arc(130,220,180,253,40);
	arc(105,328,273,80,70);
	arc(143,220,150,180,40);
	arc(143,215,180,230,40);
	arc(112,328,265,50,75);
	arc(80,354,45,72,115);
	line(102,400,104,402);
	line(102,400,107,399);
	line(95,200,110,185);
	line(110,185,109,200);
	line(110,185,111,182);
	circle(104,198,1);
	setfillstyle(SLASH_FILL,1);
	floodfill(103,199,8);
}

void snake3()
{
	arc(255,118,320,0,170);
	arc(265,118,305,0,170);
	line(384,229,361,260);
	line(425,120,429,105);
	line(428,105,435,120);
	line(428,105,429,100);
	circle(430,115,1);
	setfillstyle(SLASH_FILL,10);
	floodfill(430,117,8);
}

void numbering()
{
	setcolor(14);
	outtextxy(50,393,"1    2         4    5    6    7    8         10");
	outtextxy(50,353,"20   19   18        16   15   1    13        11");
	outtextxy(50,313,"21   22             25   26             29   30");
	outtextxy(50,273,"40   39   38   37   36   35   34   33   32   31");
	outtextxy(50,233,"41        43   44   45        47   48        50");
	outtextxy(50,193,"60        58   57   56   55        53   52     ");
	outtextxy(50,153,"61   62   63   64        66   67   68   69     ");
	outtextxy(50,113,"80   79             76   75   74   73        71");
	outtextxy(50,73, "81        83   84   85   86   87        89   90");
	outtextxy(50,33, "100  99   98   97   96   95   94   93   92   91");
	setcolor(11);
	outtextxy(465,30,"Made By : ");
	outtextxy(465,45,"Chirag, Aksh");
	outtextxy(465,60,"Ritika, Lavi");
	setcolor(14);
	outtextxy(465,75,"The Classic Game of");
	settextstyle(TRIPLEX_FONT, HORIZ_DIR, 2);
	setcolor(LIGHTRED);
	outtextxy(470,85,"Snake & Ladder");
	setcolor(WHITE);
	settextstyle(DEFAULT_FONT, HORIZ_DIR, 1);
}

void status()
{
	setcolor(YELLOW);
	setlinestyle(INTERLEAVE_FILL, 1, 1);
	rectangle(480, 110, 600, 230);//Around white dice Yellow Box
	outtextxy(480, 260, "Turn...");
	rectangle(480, 275, 600, 300);//Around Turn Yellow Box
}

void welcome()
{
	for (int i=0; i<2; i++)
	{
		sound(200);
		delay(500);
		nosound();
		sound(400);
		delay(500);
		nosound();
		sound(600);
		delay(500);
		nosound();
		sound(500);
		delay(500);
		nosound();
	}
}

void dispdice()
{
	switch (dice)
	{
		case 1: putimage(535, 165, dot, COPY_PUT);    break;
		case 2:    putimage(515, 145, dot, COPY_PUT);
			putimage(555, 185, dot, COPY_PUT);    break;
		case 3:    putimage(515, 145, dot, COPY_PUT);
			putimage(535, 165, dot, COPY_PUT);
			putimage(555, 185, dot, COPY_PUT);    break;
		case 4: putimage(515, 145, dot, COPY_PUT);
			putimage(555, 145, dot, COPY_PUT);
			putimage(515, 185, dot, COPY_PUT);
			putimage(555, 185, dot, COPY_PUT);    break;
		case 5: putimage(515, 145, dot, COPY_PUT);
			putimage(555, 145, dot, COPY_PUT);
			putimage(535, 165, dot, COPY_PUT);
			putimage(515, 185, dot, COPY_PUT);
			putimage(555, 185, dot, COPY_PUT);    break;
		case 6: putimage(515, 145, dot, COPY_PUT);
			putimage(515, 165, dot, COPY_PUT);
			putimage(515, 185, dot, COPY_PUT);
			putimage(555, 145, dot, COPY_PUT);
			putimage(555, 165, dot, COPY_PUT);
			putimage(555, 185, dot, COPY_PUT);    break;
	}
}

void getdice()
{
	dice=rand()%6;
	dice++; dispdice();
}

void play()//Player VS Computer
{
	getimage(50, 410, 60, 420, o1);
	getimage(70, 410, 80, 420, o2);
	putimage(50, 410, obj1, COPY_PUT);
	putimage(70, 410, obj2, COPY_PUT);
	while (1)
	{
		if (user==0)//Turn of Player 1
		{
			putimage(487, 282, turn, COPY_PUT);
			setcolor(GREEN);
			outtextxy(480, 285,"    Player ");
			again:            ch=getch();
			if (ch==13) getdice();
			else if (ch==27)    exit(1);
			else goto again;
			setcolor(YELLOW);
			if (cnt1==96 && dice>4)     { delay(1000); user=1;goto invalid1; }
			else if (cnt1==97 && dice>3)     { delay(1000);user=1; goto invalid1; }
			else if (cnt1==98 && dice>2)    { delay(1000); user=1;goto invalid1; }
			else if (cnt1==99 && dice>1)    { delay(1000);user=1; goto invalid1; }
			for (i=1; i<=dice; i++, cnt1++)
			{
				sound(1000);
				delay(15);
				nosound();
				putimage(x1, y1, o1, COPY_PUT);
				if (dir1==0)//1-->10,21-->30,41-->50 etc.(move from left to right)
				{
//                    size=imagesize(x1, y1, x1+10, y1+10);
//                    o1=malloc(size);
					getimage(x1, y1, x1+10, y1+10, o1);
					x1+=40;
					if (x1>410)    x1-=40, y1-=40, dir1=1;
//                    size=imagesize(x1, y1, x1+10, y1+10);
//                    o1=malloc(size);
					getimage(x1, y1, x1+10, y1+10, o1);
					putimage(x1, y1, obj1, COPY_PUT);
					delay(1000);    goto ch1;
				}
				else//11-->20,31-->40,51-->60 etc.(move from right to left)
				{
					size=imagesize(x1, y1, x1+10, y1+10);
//                    o1=malloc(size);
					getimage(x1, y1, x1+10, y1+10, o1);
					x1-=40;
					if (x1<50)    x1+=40, y1-=40, dir1=0;
//                    size=imagesize(x1, y1, x1+10, y1+10);
//                    o1=malloc(size);
					getimage(x1, y1, x1+10, y1+10, o1);
					putimage(x1, y1, obj1, COPY_PUT);
					delay(1000);    goto ch1;
				}
			ch1:                if (cnt1==99)    goto over;
			}

			if (cnt1==12 || cnt1==72 || cnt1==78)
			{
				sound(1500);
				delay(200);
				nosound();
				putimage(x1, y1, o1, COPY_PUT);
				x1-=80;    y1-=80;
//                size=imagesize(x1, y1, x1+10, y1+10);
//                o1=malloc(size);
				getimage(x1, y1, x1+10, y1+10, o1);
				putimage(x1, y1, obj1, COPY_PUT);
				if (cnt1==12)        cnt1=34;
				else if (cnt1==72)      cnt1=94;
				else if (cnt1==78)    { cnt1=100; goto over; }
			}
			else if (cnt1==22 || cnt1==46)
			{
				sound(1500);
				delay(200);
				nosound();
				putimage(x1, y1, o1, COPY_PUT);
				x1+=40;    y1-=40;
//                size=imagesize(x1, y1, x1+10, y1+10);
//                o1=malloc(size);
				getimage(x1, y1, x1+10, y1+10, o1);
				putimage(x1, y1, obj1, COPY_PUT);
				if (cnt1==22)        cnt1=38;
				else if (cnt1==46)    cnt1=54;
				dir1=1;
			}
			else if (cnt1==36 || cnt1==99)
			{
				sound(500);
				delay(500);
				nosound();
				sound(600);
				delay(500);
				nosound();
				putimage(x1, y1, o1, COPY_PUT);
				x1+=160;    y1+=120;
//                size=imagesize(x1, y1, x1+10, y1+10);
//                o1=malloc(size);
				getimage(x1, y1, x1+10, y1+10, o1);
				putimage(x1, y1, obj1, COPY_PUT);
				if (cnt1==36)        cnt1=9;
				else if (cnt1==99)    cnt1=66;
				dir1=0;
			}
			else if (cnt1==62)
			{
				sound(500);
				delay(500);
				nosound();
				sound(600);
				delay(500);
				nosound();
				putimage(x1, y1, o1, COPY_PUT);
				y1+=240;
//                size=imagesize(x1, y1, x1+10, y1+10);
//                o1=malloc(size);
				getimage(x1, y1, x1+10, y1+10, o1);
				putimage(x1, y1, obj1, COPY_PUT);
				cnt1=2;
			}
			else if (cnt1==90)
			{
				sound(500);
				delay(500);
				nosound();
				sound(600);
				delay(500);
				nosound();
				putimage(x1, y1, o1, COPY_PUT);
				x1-=80;    y1+=160;
//                size=imagesize(x1, y1, x1+10, y1+10);
//                o1=malloc(size);
				getimage(x1, y1, x1+10, y1+10, o1);
				putimage(x1, y1, obj1, COPY_PUT);
				cnt1=48;
			}
			if (dice==6) user=0; else user=1;
			invalid1:        putimage(500, 130, back, COPY_PUT);

		}

		else
		{
			delay(300);
			putimage(487, 282, turn, COPY_PUT);
			setcolor(BROWN);
			outtextxy(480, 285, "    Computer");
			setcolor(YELLOW);
		    //	again2:         //   ch=getch();
			if (ch==13) getdice();
			else if (ch==27)    exit(1);
		       //	else goto again2;
			if (cnt2==96 && dice>4)     { delay(1000); user=0;goto invalid2;  }
			else if (cnt2==97 && dice>3)     { delay(1000); user=0;goto invalid2; }
			else if (cnt2==98 && dice>2)    { delay(1000); user=0;goto invalid2; }
			else if (cnt2==99 && dice>1)    { delay(1000); user=0;goto invalid2; }
			for (i=1; i<=dice; i++, cnt2++)
			{
				sound(1000);
				delay(15);
				nosound();
				putimage(x2, y2, o2, COPY_PUT);
				if (dir2==0)
				{
//                    size=imagesize(x2, y2, x2+10, y2+10);
//                    o2=malloc(size);
					getimage(x2, y2, x2+10, y2+10, o2);
					x2+=40;
					if (x2>440)    x2-=40, y2-=40, dir2=1;
//                    size=imagesize(x2, y2, x2+10, y2+10);
//                    o2=malloc(size);
					getimage(x2, y2, x2+10, y2+10, o2);
					putimage(x2, y2, obj2, COPY_PUT);
					delay(1000);    goto ch2;
				}
				else
				{
//                    size=imagesize(x2, y2, x2+10, y2+10);
//                    o2=malloc(size);
					getimage(x2, y2, x2+10, y2+10, o2);
					x2-=40;
					if (x2<50)    x2+=40, y2-=40, dir2=0;
//                    size=imagesize(x2, y2, x2+10, y2+10);
//                    o2=malloc(size);
					getimage(x2, y2, x2+10, y2+10, o2);
					putimage(x2, y2, obj2, COPY_PUT);
					delay(1000);    goto ch2;
				}
				ch2:                if (cnt2==99)    goto over;
			}
			if (cnt2==12 || cnt2==72 || cnt2==78)
			{
				sound(1500);
				delay(200);
				nosound();
				putimage(x2, y2, o2, COPY_PUT);
				x2-=80;    y2-=80;
//                size=imagesize(x2, y2, x2+10, y2+10);
//                o2=malloc(size);
				getimage(x2, y2, x2+10, y2+10, o2);
				putimage(x2, y2, obj2, COPY_PUT);
				if (cnt2==12)        cnt2=34;
				else if (cnt2==72)      cnt2=94;
				else if (cnt2==78)    { cnt2=100; goto over; }
			}
			else if (cnt2==22 || cnt2==46)
			{
				sound(1500);
				delay(200);
				nosound();
				putimage(x2, y2, o2, COPY_PUT);
				x2+=40;    y2-=40;
//                size=imagesize(x2, y2, x2+10, y2+10);
//                o2=malloc(size);
				getimage(x2, y2, x2+10, y2+10, o2);
				putimage(x2, y2, obj2, COPY_PUT);
				if (cnt2==22)        cnt2=38;
				else if (cnt2==46)    cnt2=54;
				dir2=1;
			}
			else if (cnt2==36 || cnt2==99)
			{
				sound(500);
				delay(500);
				nosound();
				sound(600);
				delay(500);
				nosound();
				putimage(x2, y2, o2, COPY_PUT);
				x2+=160;    y2+=120;
 //                size=imagesize(x2, y2, x2+10, y2+10);
 //                o2=malloc(size);
				getimage(x2, y2, x2+10, y2+10, o2);
				putimage(x2, y2, obj2, COPY_PUT);
				if (cnt2==36)        cnt2=9;
				else if (cnt2==99)    cnt2=66;
				dir2=0;
			}
			else if (cnt2==62)
			{
				sound(500);
				delay(500);
				nosound();
				sound(600);
				delay(500);
				nosound();
				putimage(x2, y2, o2, COPY_PUT);
				y2+=240;
//                size=imagesize(x2, y2, x2+10, y2+10);
//                o2=malloc(size);
				getimage(x2, y2, x2+10, y2+10, o2);
				putimage(x2, y2, obj2, COPY_PUT);
				cnt2=2;
			}
			else if (cnt2==90)
			{
				sound(500);
				delay(500);
				nosound();
				sound(600);
				delay(500);
				nosound();
				putimage(x2, y2, o2, COPY_PUT);
				x2-=80;    y2+=160;
//                size=imagesize(x2, y2, x2+10, y2+10);
//                o2=madlloc(size);
				getimage(x2, y2, x2+10, y2+10, o2);
				putimage(x2, y2, obj2, COPY_PUT);
				cnt2=48;
			}
			if (dice==6) user=1; else user=0;
invalid2:        putimage(500, 130, back, COPY_PUT);
			delay(1000);
		}
	}
	over: cout<<"";
}

void play2()//Player 1 VS Player 2
{
	getimage(50, 410, 60, 420, o1);
	getimage(70, 410, 80, 420, o2);
	putimage(50, 410, obj1, COPY_PUT);
	putimage(70, 410, obj2, COPY_PUT);
	while (1)
	{
		if (user==0)
		{
			putimage(487, 282, turn, COPY_PUT);
			setcolor(GREEN);
			outtextxy(480, 285,"    Player 1");
			again:            ch=getch();
			if (ch==13) getdice();
			else if (ch==27)    exit(1);
			else goto again;
			setcolor(YELLOW);
			if (cnt1==96 && dice>4)     { delay(1000); user=1; goto invalid1; }
			else if (cnt1==97 && dice>3)     { delay(1000); user=1; goto invalid1;}
			else if (cnt1==98 && dice>2)    { delay(1000); user=1; goto invalid1; }
			else if (cnt1==99 && dice>1)    { delay(1000); user=1; goto invalid1; }
			for (i=1; i<=dice; i++, cnt1++)
			{
				sound(1000);
				delay(15);
				nosound();
				putimage(x1, y1, o1, COPY_PUT);
				if (dir1==0)
				{
//                    size=imagesize(x1, y1, x1+10, y1+10);
//                    o1=malloc(size);
					getimage(x1, y1, x1+10, y1+10, o1);
					x1+=40;
					if (x1>410)    x1-=40, y1-=40, dir1=1;
//                    size=imagesize(x1, y1, x1+10, y1+10);
//                    o1=malloc(size);
					getimage(x1, y1, x1+10, y1+10, o1);
					putimage(x1, y1, obj1, COPY_PUT);
					delay(1000);    goto ch1;
				}
				else
				{
					size=imagesize(x1, y1, x1+10, y1+10);
//                    o1=malloc(size);
					getimage(x1, y1, x1+10, y1+10, o1);
					x1-=40;
					if (x1<50)    x1+=40, y1-=40, dir1=0;
//                    size=imagesize(x1, y1, x1+10, y1+10);
//                    o1=malloc(size);
					getimage(x1, y1, x1+10, y1+10, o1);
					putimage(x1, y1, obj1, COPY_PUT);
					delay(1000);    goto ch1;
				}
			ch1:                if (cnt1==99)    goto over;
			}

			if (cnt1==12 || cnt1==72 || cnt1==78)
			{
				sound(1500);
				delay(200);
				nosound();
				putimage(x1, y1, o1, COPY_PUT);
				x1-=80;    y1-=80;
//                size=imagesize(x1, y1, x1+10, y1+10);
//                o1=malloc(size);
				getimage(x1, y1, x1+10, y1+10, o1);
				putimage(x1, y1, obj1, COPY_PUT);
				if (cnt1==12)        cnt1=34;
				else if (cnt1==72)      cnt1=94;
				else if (cnt1==78)    { cnt1=100; goto over; }
			}
			else if (cnt1==22 || cnt1==46)
			{
				sound(1500);
				delay(200);
				nosound();
				putimage(x1, y1, o1, COPY_PUT);
				x1+=40;    y1-=40;
//                size=imagesize(x1, y1, x1+10, y1+10);
//                o1=malloc(size);
				getimage(x1, y1, x1+10, y1+10, o1);
				putimage(x1, y1, obj1, COPY_PUT);
				if (cnt1==22)        cnt1=38;
				else if (cnt1==46)    cnt1=54;
				dir1=1;
			}
			else if (cnt1==36 || cnt1==99)
			{
				sound(500);
				delay(500);
				nosound();
				sound(600);
				delay(500);
				nosound();

				putimage(x1, y1, o1, COPY_PUT);
				x1+=160;    y1+=120;
//                size=imagesize(x1, y1, x1+10, y1+10);
//                o1=malloc(size);
				getimage(x1, y1, x1+10, y1+10, o1);
				putimage(x1, y1, obj1, COPY_PUT);
				if (cnt1==36)        cnt1=9;
				else if (cnt1==99)    cnt1=66;
				dir1=0;
			}
			else if (cnt1==62)
			{
				sound(500);
				delay(500);
				nosound();
				sound(600);
				delay(500);
				nosound();
				putimage(x1, y1, o1, COPY_PUT);
				y1+=240;
//                size=imagesize(x1, y1, x1+10, y1+10);
//                o1=malloc(size);
				getimage(x1, y1, x1+10, y1+10, o1);
				putimage(x1, y1, obj1, COPY_PUT);
				cnt1=2;
			}
			else if (cnt1==90)
			{
				sound(500);
				delay(500);
				nosound();
				sound(600);
				delay(500);
				nosound();
				putimage(x1, y1, o1, COPY_PUT);
				x1-=80;    y1+=160;
//                size=imagesize(x1, y1, x1+10, y1+10);
//                o1=malloc(size);
				getimage(x1, y1, x1+10, y1+10, o1);
				putimage(x1, y1, obj1, COPY_PUT);
				cnt1=48;
			}
			if (dice==6) user=0; else user=1;
			invalid1:        putimage(500, 130, back, COPY_PUT);

		}

		else
		{
			delay(300);
			putimage(487, 282, turn, COPY_PUT);
			setcolor(BROWN);
			outtextxy(480, 285, "    Player 2");
			setcolor(YELLOW);
			again2:            ch=getch();
			if (ch==13) getdice();
			else if (ch==27)    exit(1);
			else goto again2;
			if (cnt2==96 && dice>4)     { delay(1000);user=0; goto invalid2;  }
			else if (cnt2==97 && dice>3)     { delay(1000);user=0; goto invalid2; }
			else if (cnt2==98 && dice>2)    { delay(1000);user=0; goto invalid2; }
			else if (cnt2==99 && dice>1)    { delay(1000);user=0; goto invalid2; }
			for (i=1; i<=dice; i++, cnt2++)
			{
				sound(1000);
				delay(15);
				nosound();
				putimage(x2, y2, o2, COPY_PUT);
				if (dir2==0)
				{
//                    size=imagesize(x2, y2, x2+10, y2+10);
//                    o2=malloc(size);
					getimage(x2, y2, x2+10, y2+10, o2);
					x2+=40;
					if (x2>440)    x2-=40, y2-=40, dir2=1;
//                    size=imagesize(x2, y2, x2+10, y2+10);
//                    o2=malloc(size);
					getimage(x2, y2, x2+10, y2+10, o2);
					putimage(x2, y2, obj2, COPY_PUT);
					delay(1000);    goto ch2;
				}
				else
				{
//                    size=imagesize(x2, y2, x2+10, y2+10);
//                    o2=malloc(size);
					getimage(x2, y2, x2+10, y2+10, o2);
					x2-=40;
					if (x2<50)    x2+=40, y2-=40, dir2=0;
//                    size=imagesize(x2, y2, x2+10, y2+10);
//                    o2=malloc(size);
					getimage(x2, y2, x2+10, y2+10, o2);
					putimage(x2, y2, obj2, COPY_PUT);
					delay(1000);    goto ch2;
				}
				ch2:                if (cnt2==99)    goto over;
			}
			if (cnt2==12 || cnt2==72 || cnt2==78)
			{
				sound(1500);
				delay(200);
				nosound();
				putimage(x2, y2, o2, COPY_PUT);
				x2-=80;    y2-=80;
//                size=imagesize(x2, y2, x2+10, y2+10);
//                o2=malloc(size);
				getimage(x2, y2, x2+10, y2+10, o2);
				putimage(x2, y2, obj2, COPY_PUT);
				if (cnt2==12)        cnt2=34;
				else if (cnt2==72)      cnt2=94;
				else if (cnt2==78)    { cnt2=100; goto over; }
			}
			else if (cnt2==22 || cnt2==46)
			{    	sound(1500);
				delay(200);
				nosound();
				putimage(x2, y2, o2, COPY_PUT);
				x2+=40;    y2-=40;
//                size=imagesize(x2, y2, x2+10, y2+10);
//                o2=malloc(size);
				getimage(x2, y2, x2+10, y2+10, o2);
				putimage(x2, y2, obj2, COPY_PUT);
				if (cnt2==22)        cnt2=38;
				else if (cnt2==46)    cnt2=54;
				dir2=1;
			}
			else if (cnt2==36 || cnt2==99)
			{
				sound(500);
				delay(500);
				nosound();
				sound(600);
				delay(500);
				nosound();
				putimage(x2, y2, o2, COPY_PUT);
				x2+=160;    y2+=120;
 //                size=imagesize(x2, y2, x2+10, y2+10);
 //                o2=malloc(size);
				getimage(x2, y2, x2+10, y2+10, o2);
				putimage(x2, y2, obj2, COPY_PUT);
				if (cnt2==36)        cnt2=9;
				else if (cnt2==99)    cnt2=66;
				dir2=0;
			}
			else if (cnt2==62)
			{
				sound(500);
				delay(500);
				nosound();
				sound(600);
				delay(500);
				nosound();
				putimage(x2, y2, o2, COPY_PUT);
				y2+=240;
//                size=imagesize(x2, y2, x2+10, y2+10);
//                o2=malloc(size);
				getimage(x2, y2, x2+10, y2+10, o2);
				putimage(x2, y2, obj2, COPY_PUT);
				cnt2=2;
			}
			else if (cnt2==90)
			{
				sound(500);
				delay(500);
				nosound();
				sound(600);
				delay(500);
				nosound();
				putimage(x2, y2, o2, COPY_PUT);
				x2-=80;    y2+=160;
//                size=imagesize(x2, y2, x2+10, y2+10);
//                o2=madlloc(size);
				getimage(x2, y2, x2+10, y2+10, o2);
				putimage(x2, y2, obj2, COPY_PUT);
				cnt2=48;
			}
			if (dice==6) user=1; else user=0;
invalid2:        putimage(500, 130, back, COPY_PUT);
			delay(1000);
		}
	}
	over: cout<<"";
}



int main()
{

	int gd=DETECT, gm;//gd-store the value of Graphcis Driver,gm=store the value of graphics mode
	initgraph(&gd, &gm, "..\\bgi");//initgraphic-which will help to create graphics window
									//&gd,&gm-hold the value of graphic driver and graphic mode
	randomize();//provide random values
	int x=display();//display the main screen(Player VS Computer,Player1 VS Player2)
	size=imagesize(487, 282, 593, 293);//imagesize(left,top,right,bottom)-->store the size in bytes--->coordinates os Player1,Computer(inside turn box)
	turn=malloc(size);//bitmap points to the area in memory where the bit image is stored
	getimage(487, 282, 593, 293, turn);//getimage copies an image from screen to memory.

	rectangle(100, 100, 110, 110);//Player 1(green box)
	setfillstyle(SOLID_FILL, 2);//set the green color, 1-SOLID FILL and 2 is for green color
	floodfill(102, 102, 15);//set the green color inside white box
	size=imagesize(100, 100, 110, 110);//return the size of green box in bytes
	obj1=malloc(size);//points to the area in memory where the green box ix stored
	getimage(100, 100, 110, 110, obj1);//copies that green box image from screen to memory.
	cleardevice();//clears the earlier prints of green box

	rectangle(100, 100, 110, 110);//Player 2 (BROWN box)
	setfillstyle(SOLID_FILL, BROWN);
	floodfill(102, 102, 15);
	size=imagesize(100, 100, 110, 110);
	obj2=malloc(size);
	getimage(100, 100, 110, 110, obj2);
	cleardevice();

	o1=malloc(size);    o2=malloc(size);//points to the area in memory where the green and red box are stored

	setcolor(WHITE);//Fill white color inside dice
	setfillstyle(SOLID_FILL, 15);
	rectangle(500, 130, 580, 210);
	floodfill(510, 140, 15);

	size=imagesize(500, 130, 580, 210);//Call the white box to put the black dots
	back=malloc(size);
	getimage(500, 130, 580, 210, back);
	setcolor(0);//set the black color inside dots(inside dice)
	setfillstyle(SOLID_FILL, 0);//0-->Black color
	rectangle(535, 150, 545, 175);
	floodfill(540, 170, 0);
	size=imagesize(535, 165, 545, 175);
	dot=malloc(size);
	getimage(535, 165, 545, 175, dot);
	cleardevice();

	setcolor(WHITE);//set the white color inside dice(it will represent an empty dice(without any dots) just before the game starts)
	setfillstyle(SOLID_FILL, 15);
	rectangle(500, 130, 580, 210);
	floodfill(510, 140, 15);

	for(int i=0;i<=360;i+=40)//it fill the colors inside the board
		for(int j=0;j<=360;j+=40)
		{
			setfillstyle(WIDE_DOT_FILL, k);//50,30,90,70-->90,30,130,70-->130,170,210,250,290,330,370-->50,70,90,110
			bar(50+j,30+i,90+j,70+i);//bar draws filled rectangle by accepting left, top, right and bottom position.
			k+=4;																																																																																																											;
		}

	ladder1();//represents the 3 ladder in left direction(78-->100,72-->94,12-->34)
	ladder2();//represents the 2 ladder in right direction(22-->38,46-->54)
	snake1();//represents the 2 snake(99-->66,36-->9) 
	snake2();//represents a snake(62-->2)   
	snake3();//represents a snake(90-->48)
	numbering();//represents the board
	status();//represents 'Turn' and yellow outline
	welcome();//makes the welcome sound
	if(x==1){
	play();//-Main game running inside the play function(Player VS Computer)

	if (cnt1>=99)
	{        
		outtextxy(480, 330, "PLAYER  WINS!");
		sound(200);//makes a sound when Player Wins(Player VS Computer)
		delay(500);
		nosound();
		sound(400);
		delay(500);
		nosound();
		sound(600);
		delay(500);
		nosound();
		sound(500);
		delay(500);
		nosound(); 
	}
	else if (cnt2>=99)
	{
		outtextxy(480, 330, "COMPUTER WINS!");
		sound(200);//makes a sound when Computer Wins(Player VS Computer)
		delay(500);
		nosound();
		sound(400);
		delay(500);
		nosound();
		sound(600);
		delay(500);
		nosound();
		sound(500);
		delay(500);
		nosound();
	}
	}
	
	else if(x==2)
	{
	play2();//Player 1 VS Player 2

	if (cnt1>=99)
	{        
		outtextxy(480, 330, "PLAYER 1 WINS!");
		sound(200);//makes a sound when Player 1 Wins(Player 1 VS Player 2)
		delay(500);
		nosound();
		sound(400);
		delay(500);
		nosound();
		sound(600);
		delay(500);
		nosound();
		sound(500);
		delay(500);
		nosound(); 
	}
	else if (cnt2>=99)
	{     
		outtextxy(480, 330, "PLAYER 2 WINS!");
		sound(200);//makes a sound when Player 2 Wins(Player 1 VS Player 2)
		delay(500);
		nosound();
		sound(400);
		delay(500);
		nosound();
		sound(600);
		delay(500);
		nosound();
		sound(500);
		delay(500);
		nosound();         
	}
	}
	getch();
	return 0;

	}
