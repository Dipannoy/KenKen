/*
	author: S. M. Shahriar Nirjon
	last modified: August 8, 2008
*/
# include "iGraphics.h"
# include "gl.h"
# include <conio.h>


int ball_x, ball_y;
int dx, dy;
int homescreen=1;
int mainmenu=0;
int level1,level2,level3,level4;
int start=0;
int l1[6]={'1','2','3','3','2','1'};
int i;
int keyboard=0;
int l1b1,l1b2,l1b3,l1b4,l1b5,l1b6,l1b7,l1b8,l1b9;
int l2b1,l2b2,l2b3,l2b4,l2b5,l2b6,l2b7,l2b8,l2b9,l2b10,l2b11,l2b12,l2b13,l2b14,l2b15,l2b16;
int l3b1,l3b2,l3b3,l3b4,l3b5,l3b6,l3b7,l3b8,l3b9,l3b10,l3b11,l3b12,l3b13,l3b14,l3b15,l3b16,l3b17,l3b18,l3b19,l3b20,l3b21,l3b22,l3b23,l3b24,l3b25;
int t;
int kb1=0;
int level;



void print(int r,int x,int y){
	if(r==1) iText(x,y,"1",GLUT_BITMAP_TIMES_ROMAN_24);
	if(r==2) iText(x,y,"2",GLUT_BITMAP_TIMES_ROMAN_24);
	if(r==3) iText(x,y,"3",GLUT_BITMAP_TIMES_ROMAN_24);
	if(r==4) iText(x,y,"4",GLUT_BITMAP_TIMES_ROMAN_24);
	if(r==5) iText(x,y,"5",GLUT_BITMAP_TIMES_ROMAN_24);
	if(r==6) iText(x,y,"6",GLUT_BITMAP_TIMES_ROMAN_24);
	if(r==7) iText(x,y,"7",GLUT_BITMAP_TIMES_ROMAN_24);
	if(r==8) iText(x,y,"8",GLUT_BITMAP_TIMES_ROMAN_24);
	if(r==9) iText(x,y,"9",GLUT_BITMAP_TIMES_ROMAN_24);
}

/*
	function iDraw() is called again and again by the system.
*/
//void iShowBMP(int x,int y,char filename[]);

void iDraw()

{
	//place your drawing codes here

	iClear();



    //iFilledCircle(399, 399, 7);
	if(homescreen)
	{
	iSetColor(255,255,255);
	iFilledRectangle(0,0,1550,700);

	iShowBMP(250,400,"main_logo2.bmp");
	iShowBMP(500,95,"kenken-af.bmp");



	}
	if(mainmenu)
	{
	iSetColor(255,255,255);
	iFilledRectangle(0,0,1550,700);
	/*iFilledRectangle(500,480,600,70);
	iSetColor(255,0,0);
	iFilledRectangle(500,410,600,70);
	iSetColor(100,100,0);
	iFilledRectangle(500,340,600,70);
	iSetColor(0,0,255);
	iText(700, 500, "START",GLUT_BITMAP_TIMES_ROMAN_24);
	iSetColor(0,0,255);
	iText(700, 430,"HIGH SCORE",GLUT_BITMAP_TIMES_ROMAN_24);
	iSetColor(0,0,255);
	iText(700, 380, "HELP",GLUT_BITMAP_TIMES_ROMAN_24*/
		iShowBMP(600,500,"dip.bmp");
		iShowBMP(600,402,"dip2.bmp");
		iShowBMP(600,304,"dip3.bmp");
		iShowBMP(600,206,"dip4.bmp");
		iShowBMP(200,204,"dip5.bmp");
		iShowBMP(1050,304,"download.bmp");
		iShowBMP(400,600,"LIN.bmp");


}
	if(level)
	{	iSetColor(0,0,0);
	iFilledRectangle(0,0,1550,700);
	iShowBMP(1000,500,"L1.bmp");
	iShowBMP(1000,402,"L2.bmp");
	iShowBMP(1000,304,"L3.bmp");
	iShowBMP(1000,206,"L4.bmp");
	iShowBMP(50,206,"num3.bmp");
	}



	if(level1)
	{


	/*iSetColor(0,255,0);
	iFilledRectangle(0,0,1550,700);
	*/

	iSetColor(255,255,0);
	iFilledRectangle(450,170,450,450);
	iSetColor(0,0,0);
	iFilledRectangle(460,180,420,10);
	iSetColor(0,0,0);
	iFilledRectangle(460,180,10,420);
	iSetColor(0,0,0);
	iFilledRectangle(460,600,420,10);
	iSetColor(0,0,0);
	iFilledRectangle(460+420,180,10,430);
	iSetColor(0,0,0);
	iFilledRectangle(470,327,410,10);

	iSetColor(0,0,0);
	iFilledRectangle(597,473,293,10);

	iSetColor(0,0,0);
	iFilledRectangle(591,331,10,273);



	iSetColor(0,0,0);
	iFilledRectangle(743,190,10,145);
	/*iSetColor(255,165,0);
	iFilledRectangle(750,470,150,150);
	iSetColor(0,0,0);*/
	iSetColor(0,0,0);
	iText(816, 252,"3",GLUT_BITMAP_TIMES_ROMAN_24);
	iSetColor(0,0,0);
	iText(475, 305,"3+",GLUT_BITMAP_TIMES_ROMAN_24);

	iSetColor(0,0,0);
	iText(475,580,"6*",GLUT_BITMAP_TIMES_ROMAN_24);

	iSetColor(0,0,0);
	iText(850,580,"1-",GLUT_BITMAP_TIMES_ROMAN_24);

	iSetColor(0,0,0);
	iText(605, 450,"4+",GLUT_BITMAP_TIMES_ROMAN_24);

	iSetColor(0,0,0);
	iLine(470,478,880,478);
	iSetColor(0,0,0);
	iLine(597,190,597,600);
	iSetColor(0,0,0);
	iLine(747,190,747,600);

	keyboard=1;
	if(l1b1)
	{
		print(l1b1,525,245);;}

	if(l1b2)
	{
		print(l1b2,675,245);
	}
	/*if(l1b3)
	{
		print(l1b3,825,245);}*/

	if(l1b4)
	{
		print(l1b4,525,395);}

	if(l1b5)
	{
		print(l1b5,675,395);}

	if(l1b6)
	{
		print(l1b6,825,395);}

	if(l1b7)
	{
		print(l1b7,525,545);}

	if(l1b8)
	{
		print(l1b8,675,545);}

	if(l1b9)
	{
		print(l1b9,825,545);}
	if(l1b1==1 && l1b2==2 &&  l1b4==2 && l1b5==3 && l1b6==1 && l1b7==3 && l1b8==1 && l1b9==2)
	{iShowBMP(400,50,"last.bmp");}

	}
	if(level2)
	{iSetColor(210,105,30);
	iFilledRectangle(450,170,484,484);
	iSetColor(0,0,0);
	iFilledRectangle(452,172,474,6);
	iSetColor(0,0,0);
	iFilledRectangle(452,172,6,474);
	iSetColor(0,0,0);
	iFilledRectangle(926,172,6,474);
	iSetColor(0,0,0);
	iFilledRectangle(452,646,480,6);

	iSetColor(0,0,0);
	iFilledRectangle(452,527,237,6);

	iSetColor(0,0,0);
	iFilledRectangle(689,527,237,6);
	/*iSetColor(0,0,0);
	iFilledRectangle(690,648,6,119);*/



	iSetColor(0,0,0);
	iFilledRectangle(689,172,6,474);
		iSetColor(0,0,0);
	iFilledRectangle(452,409,124,6);
		iSetColor(0,0,0);
	iFilledRectangle(570,290,6,120);
		iSetColor(0,0,0);
	iFilledRectangle(452,290,237,6);
		iSetColor(0,0,0);
	iFilledRectangle(689,290,118,6);
		iSetColor(0,0,0);
	iFilledRectangle(807,290,6,119);
		iSetColor(0,0,0);
	iFilledRectangle(807,409,119,6);
	iSetColor(0,0,0);
	iLine(573,172,573,646);
	iLine(811,172,811,646);
	iLine(452,172+120,452+474,172+120);
		iLine(452,172+240,452+474,172+240);
	//iLine(1060,170,1060,370);
		iSetColor(0,0,0);
	iText(462,270,"3+",GLUT_BITMAP_HELVETICA_18);
	iSetColor(0,0,0);
	iText(511, 345,"1",GLUT_BITMAP_TIMES_ROMAN_24);

	iSetColor(0,0,0);
	iText(462,510,"10+",GLUT_BITMAP_HELVETICA_18);
	iSetColor(0,0,0);
	iText(462,630,"8*",GLUT_BITMAP_HELVETICA_18);
	iSetColor(0,0,0);
	iText(701,510,"4*",GLUT_BITMAP_HELVETICA_18);
	iSetColor(0,0,0);
	iText(701,630,"4+",GLUT_BITMAP_HELVETICA_18);
	iSetColor(0,0,0);
	iText(817,391,"11+",GLUT_BITMAP_HELVETICA_18);
	keyboard=1;
	if(l2b1)
	{
		print(l2b1,511,236);}

	if(l2b2)
	{
		print(l2b2,620,236);
	}
	/*if(l1b3)
	{
		print(l1b3,825,245);}*/

	if(l2b3)
	{
		print(l2b3,750,236);}

	/*if(l2b4)
	{
		print(l2b4,860,236);}*/
	if(l2b5)
	{
		print(l2b5,511,345);}

	if(l2b6)
	{
		print(l2b6,620,345);
	}
	/*if(l1b3)
	{
		print(l1b3,825,245);}*/

	if(l2b7)
	{
		print(l2b7,750,345);}

	if(l2b8)
	{
		print(l2b8,860,345);}
	if(l2b9)
	{
		print(l2b9,511,468);}

	if(l2b10)
	{
		print(l2b10,620,468);
	}
	/*if(l1b3)
	{
		print(l1b3,825,245);}*/

	if(l2b11)
	{
		print(l2b11,750,468);}

	if(l2b12)
	{
		print(l2b12,860,468);}
	if(l2b13)
	{
		print(l2b13,511,586);}

	if(l2b14)
	{
		print(l2b14,620,586);
	}
	/*if(l1b3)
	{
		print(l1b3,825,245);}*/

	if(l2b15)
	{
		print(l2b15,750,586);}

	if(l2b16)
	{
		print(l2b16,860,586);}

	/*if(l1b6)
	{
		print(l1b6,825,395);}

	if(l1b7)
	{
		print(l1b7,525,545);}

	if(l1b8)
	{
		print(l1b8,675,545);}

	if(l1b9)
	{
		print(l1b9,825,545);}*/
	
	if(l2b1==2 && l2b2==1 &&  l2b3==4 &&   l2b5==1 && l2b6==3 && l2b7==2 && l2b8==4 && l2b9==3 && l2b10==4 &&  l2b11==1 && l2b12==2 && l2b13==4 && l2b14==2 && l2b15==3 && l2b16==1)
	{iShowBMP(400,50,"last.bmp");}



	

	}
	if(level3)
	{
	iSetColor(255,215,0);
	iFilledRectangle(400,170,500,500);
	iSetColor(0,0,0);
	iFilledRectangle(402,172,495,4);
	iSetColor(0,0,0);
	iFilledRectangle(402,172,4,495);
	iSetColor(0,0,0);
	iFilledRectangle(402,665,495,4);
	iSetColor(0,0,0);
	iFilledRectangle(895,172,4,495);

	iSetColor(0,0,0);
	iFilledRectangle(704,176,4,489);

	iSetColor(0,0,0);
	iFilledRectangle(504,567,391,4);
	iSetColor(0,0,0);
	iFilledRectangle(406,372,196,4);
	iSetColor(0,0,0);
	iFilledRectangle(406,473,196,4);
	iSetColor(0,0,0);
	iFilledRectangle(602,372,4,196);
	iSetColor(0,0,0);
	iFilledRectangle(703,176+98,195,4);
	iSetColor(0,0,0);
	iFilledRectangle(602,176,4,98);
	iSetColor(0,0,0);
	iFilledRectangle(505,274,101,4);
	iSetColor(0,0,0);
	iFilledRectangle(505,274,4,101);
	iSetColor(0,0,0);
	iFilledRectangle(797,372,98,4);
	iSetColor(0,0,0);
	iFilledRectangle(797,372,4,98);
	iSetColor(0,0,0);
	iFilledRectangle(699+4,372+98,98,4);
	iSetColor(0,0,0);
	iFilledRectangle(602,372,101,4);
	iSetColor(0,0,0);
	iFilledRectangle(504,567,4,98);
	iText(406,355,"10+",GLUT_BITMAP_HELVETICA_18);
	iText(406,454,"1-",GLUT_BITMAP_HELVETICA_18);
	iText(408,650,"6*",GLUT_BITMAP_HELVETICA_18);
	iText(510,650,"5+",GLUT_BITMAP_HELVETICA_18);
	iText(710,650,"20*",GLUT_BITMAP_HELVETICA_18);
	iText(608,553,"4-",GLUT_BITMAP_HELVETICA_18);
	iText(710,548,"40*",GLUT_BITMAP_HELVETICA_18);
	iText(710,449,"5+",GLUT_BITMAP_HELVETICA_18);
	iText(710,258,"1-",GLUT_BITMAP_HELVETICA_18);
	iText(510,355,"28*",GLUT_BITMAP_HELVETICA_18);
	iLine(505,174,505,669);
	iLine(602,174,602,669);
	iLine(798,174,798,669);
	iLine(402,275,897,275);
	iLine(402,374,897,374);
	iLine(402,473,897,473);
	iLine(402,570,897,570);
	keyboard=1;
	if(l3b1)
	{
		print(l3b1,450,220);}

	if(l3b2)
	{
		print(l3b2,545,220);
	}
	if(l3b3)
	{
		print(l3b3,650,220);}

	if(l3b4)
	{
		print(l3b4,750,220);}

	if(l3b5)
	{
		print(l3b5,840,220);}
	if(l3b6)
	{
		print(l3b6,450,320);}

	if(l3b7)
	{
		print(l3b7,545,320);
	}
	if(l3b8)
	{
		print(l3b8,650,320);}

	if(l3b9)
	{
		print(l3b9,750,320);}

	if(l3b10)
	{
		print(l2b8,840,320);}
	if(l3b11)
	{
		print(l3b11,450,420);}

	if(l3b12)
	{
		print(l3b12,545,420);
	}
	if(l3b13)
	{
		print(l3b13,650,420);}

	if(l3b14)
	{
		print(l3b14,750,420);}

	if(l3b15)
	{
		print(l3b15,840,420);}
	if(l3b16)
	{
		print(l3b16,450,520);}

	if(l3b17)
	{
		print(l3b17,545,520);
	}
	if(l3b18)
	{
		print(l3b18,650,520);

	if(l3b19)
	{
		print(l2b15,750,520);}

	if(l3b20)
	{
		print(l3b15,840,520);}
	if(l3b21)
	{
		print(l3b21,450,620);}

	if(l3b22)
	{
		print(l3b22,545,620);
	}
	if(l3b23)
	{
		print(l3b18,650,620);

	if(l3b24)
	{
		print(l3b24,750,620);}

	if(l3b25)
	{
		print(l3b25,840,620);}

	/*if(l1b6)
	{
		print(l1b6,825,395);}

	if(l1b7)
	{
		print(l1b7,525,545);}

	if(l1b8)
	{
		print(l1b8,675,545);}

	if(l1b9)
	{
		print(l1b9,825,545);}*/
	
	if(l2b1==2 && l2b2==1 &&  l2b3==4 &&   l2b5==1 && l2b6==3 && l2b7==2 && l2b8==4 && l2b9==3 && l2b10==4 &&  l2b11==1 && l2b12==2 && l2b13==4 && l2b14==2 && l2b15==3 && l2b16==1)
	{iShowBMP(400,50,"last.bmp");}








	/*iSetColor(0,0,0);
	iFilledRectangle(689,172,6,474);
		iSetColor(0,0,0);
	iFilledRectangle(452,409,124,6);
		iSetColor(0,0,0);
	iFilledRectangle(570,290,6,120);
		iSetColor(0,0,0);
	iFilledRectangle(452,290,237,6);
		iSetColor(0,0,0);
	iFilledRectangle(689,290,118,6);
		iSetColor(0,0,0);
	iFilledRectangle(807,290,6,119);
		iSetColor(0,0,0);
	iFilledRectangle(807,409,119,6);*/
	}

	/*if(kb1)
	{char t[80]="6\0";}
	if(l1b1)
	{
		iText(525,245,t,GLUT_BITMAP_TIMES_ROMAN_24);}

	if(l1b2)
	{
		iText(675,245,t,GLUT_BITMAP_TIMES_ROMAN_24);}

	if(l1b3)
	{
		iText(825,245,t,GLUT_BITMAP_TIMES_ROMAN_24);}

	if(l1b4)
	{
		iText(525,395,t,GLUT_BITMAP_TIMES_ROMAN_24);}

	if(l1b5)
	{
		iText(675,395,t,GLUT_BITMAP_TIMES_ROMAN_24);}

	if(l1b6)
	{
		iText(825,395,t,GLUT_BITMAP_TIMES_ROMAN_24);}

	if(l1b7)
	{
		iText(525,545,t,GLUT_BITMAP_TIMES_ROMAN_24);}

	if(l1b8)
	{
		iText(675,545,t,GLUT_BITMAP_TIMES_ROMAN_24);}

	if(l1b9)
	{
		iText(825,545,t,GLUT_BITMAP_TIMES_ROMAN_24);}
	/*if(kb1)
	{char t[80]="6\0";}*/
	//void mainmenu()

	






		if(keyboard)
	{
	iSetColor(0,255,255);
	iFilledRectangle(950,170,550,200);
	iSetColor(0,0,0);
	iLine(950,270,1060,270);
    iSetColor(0,0,0);
	iLine(1060,270,1170,270);
	iSetColor(0,0,0);
	iLine(1170,270,1280,270);
	iSetColor(0,0,0);
	iLine(1280,270,1390,270);
	iSetColor(0,0,0);
	iLine(1390,270,1400,270);
	iSetColor(0,0,0);
	iLine(1400,270,1500,270);
	iSetColor(0,0,0);
	iLine(1060,170,1060,370);
	iSetColor(0,0,0);
	iLine(1170,170,1170,370);
	iSetColor(0,0,0);
	iLine(1280,170,1280,370);
	iSetColor(0,0,0);
	iLine(1390,170,1390,370);
	iSetColor(64,64,64);
	iSetColor(0,0,0);
	iText(1005, 220,"6",GLUT_BITMAP_TIMES_ROMAN_24);
	iSetColor(0,0,0);
	iText(1115, 220,"7",GLUT_BITMAP_TIMES_ROMAN_24);
	iSetColor(0,0,0);
	iText(1225, 220,"8",GLUT_BITMAP_TIMES_ROMAN_24);
	iSetColor(0,0,0);
	char str[80]= "9\0";
	iText(1335, 220,str,GLUT_BITMAP_TIMES_ROMAN_24);
	iSetColor(0,0,0);
	iText(1445, 220,"0",GLUT_BITMAP_TIMES_ROMAN_24);
	iSetColor(0,0,0);
	iText(1005, 320,"1",GLUT_BITMAP_TIMES_ROMAN_24);
	iSetColor(0,0,0);
	iText(1115, 320,"2",GLUT_BITMAP_TIMES_ROMAN_24);
	iSetColor(0,0,0);
	iText(1225, 320,"3",GLUT_BITMAP_TIMES_ROMAN_24);
	iSetColor(0,0,0);
	iText(1335, 320,"4",GLUT_BITMAP_TIMES_ROMAN_24);
	iSetColor(0,0,0);
	iText(1445, 320,"5",GLUT_BITMAP_TIMES_ROMAN_24);


	}

}


/*
	function iMouseMove() is called when the user presses and drags the mouse.
	(mx, my) is the position where the mouse pointer is.
*/
void iMouseMove(int mx, int my)
{

}

/*
	function iMouse() is called when the user presses/releases the mouse.
	(mx, my) is the position where the mouse pointer is.
*/
void iMouse(int button, int state, int mx, int my)
{	
	if(button == GLUT_LEFT_BUTTON && state == GLUT_DOWN)
	{
	printf("%d %d\n",level,level3);
		//place your codes here
	//if(level1==0 && mx>500 && mx<1100 && my>410 &&   my<480 )
	//{level3=1;
	//mainmenu=0;}
	//printf("%d %d\n",mx,my);
	if(homescreen==0 && mainmenu==1){
		if(mx>528 && mx<785 && my>508 && my<596 )
		{ mainmenu=0;
		level=1;}
		/*if(mx>528 && mx<785 && my>410 && my<496 )
		{ mainmenu==0;
		highscore=1;}
		if(mx>528 && mx<785 && my>313 && my<395 )
		{ mainmenu=0;
		help=1;}*/
		if(mx>528 && mx<785 && my>215 && my<296 )
		{ exit(0);}
	}
	if( mainmenu==0 && level==1){
		if(mx>929 && mx<1107 && my>513 && my<598 )
		{level=0;
		level1=1;}
		else if(mx>929 && mx<1107 && my>415 && my<498 )
		{level=0;
		level2=1;}
		else if(mx>929 && mx<1107 && my>316 && my<400 )
		{level=0;
		level3=1;}
		else if(mx>929 && mx<1107 && my>218 && my<302 )
		{level=0;
		level4=1;}
	}



	if(level==0 && level1==1){
		if(mx>825 && mx<922 && my>170 && my<270 )
		{t=6;}
		if(mx>922 && mx<1020 && my>170 && my<270 )
		{t=7;}
		if(mx>1020 && mx<1113 && my>170 && my<270 )
		{t=8;}
		if(mx>1113 && mx<1209 && my>170 && my<270 )
		{t=9;}
		if(mx>825 && mx<922 && my>270 && my<370 )
		{t=1;}
		if(mx>922 && mx<1020 && my>270 && my<370 )
		{t=2;}

		if(mx>1020 && mx<1113 && my>270 && my<370 )
		{t=3;}
		if(mx>1113 && mx<1209 && my>270 && my<370 )
		{t=4;}

		if(mx>1209 && mx<1306 && my>270 && my<370 )
		{t=5;}

		if(mx>390 && mx<520 && my>170 && my<320 )
		{l1b1=t;}
		if(mx>520 && mx<650 && my>170 && my<320)
		{l1b2=t;}
		if(mx>650 && mx<780 && my>170 && my<320)
		{l1b3=t;}
		if(mx>390 && mx<520 && my>320 && my<470 )
		{l1b4=t;}
		if(mx>520 && mx<650 && my>320 && my<470 )
		{l1b5=t;}
		if(mx>650 && mx<780 && my>320 && my<470 )
		{l1b6=t;}
		if(mx>390 && mx<520 && my>470 && my<620)
		{l1b7=t;}
		if(mx>520 && mx<650 && my>470 && my<620)
		{l1b8=t;}
		if(mx>650 && mx<780 && my>470 && my<620)
		{l1b9=t;}
	}
		//mx=0,my=0;

	else if(level==0 && level2==1){
		printf("%d %d",mx,my);
		if(mx>825 && mx<922 && my>170 && my<270 )
		{t=6;}
		if(mx>922 && mx<1020 && my>170 && my<270 )
		{t=7;}
		if(mx>1020 && mx<1113 && my>170 && my<270 )
		{t=8;}
		if(mx>1113 && mx<1209 && my>170 && my<270 )
		{t=9;}
		if(mx>825 && mx<922 && my>270 && my<370 )
		{t=1;}
		if(mx>922 && mx<1020 && my>270 && my<370 )
		{t=2;}

		if(mx>1020 && mx<1113 && my>270 && my<370 )
		{t=3;}
		if(mx>1113 && mx<1209 && my>270 && my<370 )
		{t=4;}

		if(mx>1209 && mx<1306 && my>270 && my<370 )
		{t=5;}
		//printf("%d %d\n",mx,my);
		if(mx>403 && mx<505 && my>183 && my<289 )
		{l2b1=t;}
		if(mx>505 && mx<612 && my>183 && my<289)
		{l2b2=t;}
		if(mx>612 && mx<714 && my>183 && my<289)
		{l2b3=t;}
	    if(mx>714 && mx<810 && my>183 && my<289 )
		{l2b4=t;}
		if(mx>403 && mx<505 && my>289 && my<410 )
		{l2b5=t;}
		if(mx>505 && mx<612 && my>289 && my<410 )
		{l2b6=t;}
		if(mx>612 && mx<714 && my>289 && my<410)
		{l2b7=t;}
		if(mx>714 && mx<810 && my>289 && my<410)
		{l2b8=t;}
		if(mx>403 && mx<505 && my>410 && my<526)
		{l2b9=t;}
		if(mx>505 && mx<612 && my>410 && my<526)
		{l2b10=t;}
		if(mx>612 && mx<714 && my>410 && my<526)
		{l2b11=t;}
		if(mx>714 && mx<810 && my>410 && my<526)
		{l2b12=t;}
		if(mx>403 && mx<505 && my>526 && my<646)
		{l2b13=t;}
		if(mx>505 && mx<612 && my>526 && my<646)
		{l2b14=t;}
		if(mx>612 && mx<714 && my>526 && my<646)
		{l2b15=t;}
		if(mx>714 && mx<810 && my>526 && my<646)
		{l2b16=t;}
	}
		//mx=0,my=0;
	else if(level==0 && level3==1){
		printf("%d %d",mx,my);
		if(mx>825 && mx<922 && my>170 && my<270 )
		{t=6;}
		if(mx>922 && mx<1020 && my>170 && my<270 )
		{t=7;}
		if(mx>1020 && mx<1113 && my>170 && my<270 )
		{t=8;}
		if(mx>1113 && mx<1209 && my>170 && my<270 )
		{t=9;}
		if(mx>825 && mx<922 && my>270 && my<370 )
		{t=1;}
		if(mx>922 && mx<1020 && my>270 && my<370 )
		{t=2;}

		if(mx>1020 && mx<1113 && my>270 && my<370 )
		{t=3;}
		if(mx>1113 && mx<1209 && my>270 && my<370 )
		{t=4;}

		if(mx>1209 && mx<1306 && my>270 && my<370 )
		{t=5;}
		//printf("%d %d\n",mx,my);
		if(mx>359 && mx<446 && my>179 && my<274 )
		{l3b1=t;}
		if(mx>446 && mx<529 && my>179 && my<274)
		{l3b2=t;}
		if(mx>529 && mx<623 && my>179 && my<274)
		{l3b3=t;}
		if(mx>623 && mx<703 && my>179 && my<274 )
		{l3b4=t;}
		if(mx>703 && mx<783 && my>179 && my<274 )
		{l3b5=t;}
		if(mx>359 && mx<446 && my>274 && my<372 )
		{l3b6=t;}
		if(mx>446 && mx<529 && my>274 && my<372)
		{l3b7=t;}
		if(mx>529 && mx<623 && my>274 && my<372)
		{l3b8=t;}
		if(mx>623 && mx<703 && my>274 && my<372 )
		{l3b9=t;}
		if(mx>703 && mx<783 && my>274 && my<372 )
		{l3b10=t;}
		if(mx>359 && mx<446 && my>372 && my<474 )
		{l3b11=t;}
		if(mx>446 && mx<529 && my>372 && my<474)
		{l3b12=t;}
		if(mx>529 && mx<623 && my>372 && my<474)
		{l3b13=t;}
		if(mx>623 && mx<703 && my>372 && my<474 )
		{l3b14=t;}
		if(mx>703 && mx<783 && my>372 && my<474 )
		{l3b15=t;}
		if(mx>359 && mx<446 && my>474 && my<570 )
		{l3b16=t;}
		if(mx>446 && mx<529 && my>474 && my<570)
		{l3b17=t;}
		if(mx>529 && mx<623 && my>474 && my<570)
		{l3b18=t;}
		if(mx>623 && mx<703 && my>474 && my<570 )
		{l3b19=t;}
		if(mx>703 && mx<783 && my>474 && my<570 )
		{l3b20=t;}
		if(mx>359 && mx<446 && my>570 && my<665 )
		{l3b21=t;}
		if(mx>446 && mx<529 && my>570 && my<665)
		{l3b22=t;}
		if(mx>529 && mx<623 && my>570 && my<665)
		{l3b23=t;}
		if(mx>623 && mx<703 && my>570 && my<665 )
		{l3b24=t;}
		if(mx>703 && mx<783 && my>570 && my<665 )
		{l3b25=t;}
		/*if(mx>505 && mx<612 && my>289 && my<410 )
		{l2b6=t;}
		if(mx>612 && mx<714 && my>289 && my<410)
		{l2b7=t;}
		if(mx>714 && mx<810 && my>289 && my<410)
		{l2b8=t;}
		if(mx>403 && mx<505 && my>410 && my<526)
		{l2b9=t;}
		if(mx>505 && mx<612 && my>410 && my<526)
		{l2b10=t;}
		if(mx>612 && mx<714 && my>410 && my<526)
		{l2b11=t;}
		if(mx>714 && mx<810 && my>410 && my<526)
		{l2b12=t;}
		if(mx>403 && mx<505 && my>526 && my<646)
		{l2b13=t;}
		if(mx>505 && mx<612 && my>526 && my<646)
		{l2b14=t;}
		if(mx>612 && mx<714 && my>526 && my<646)
		{l2b15=t;}
		if(mx>714 && mx<810 && my>526 && my<646)
		{l2b16=t;}*/
	}
		mx=0,my=0;
		



	

}










	if(button == GLUT_RIGHT_BUTTON && state == GLUT_DOWN)
	{
		//place your codes here
	}
}

/*
	function iKeyboard() is called whenever the user hits a key in keyboard.
	key- holds the ASCII value of the key pressed.
*/


	void iKeyboard(unsigned char key)
	{

		if(key == 'b')
	{
		//level3=1;
		//mainmenu=0;
		//printf("%d %d\n",mx,my);

	}
	if(key == 'e')
	{
		homescreen=0;
		mainmenu=1;
	}

	}


/*
	function iSpecialKeyboard() is called whenver user hits special keys like-
	function keys, home, end, pg up, pg down, arraows etc. you have to use
	appropriate constants to detect them. A list is:
	GLUT_KEY_F1, GLUT_KEY_F2, GLUT_KEY_F3, GLUT_KEY_F4, GLUT_KEY_F5, GLUT_KEY_F6,
	GLUT_KEY_F7, GLUT_KEY_F8, GLUT_KEY_F9, GLUT_KEY_F10, GLUT_KEY_F11, GLUT_KEY_F12,
	GLUT_KEY_LEFT, GLUT_KEY_UP, GLUT_KEY_RIGHT, GLUT_KEY_DOWN, GLUT_KEY_PAGE UP,
	GLUT_KEY_PAGE DOWN, GLUT_KEY_HOME, GLUT_KEY_END, GLUT_KEY_INSERT
*/
void iSpecialKeyboard(unsigned char key)
{

	if(key == GLUT_KEY_END)
	{
		exit(0);
	}
	//place your codes for other keys here
}
void ballChange(){
	ball_x += dx;
	ball_y += dy;

	if(ball_x > 400 || ball_x < 0)dx = -dx;
	if(ball_y > 400 || ball_y < 0)dy = -dy;
}


int main()
{

	//place your own initialization codes here.



	iInitialize(1550,700, "KENKEN");
	iSetColor(215,25,28);
	
	iSetTimer(1000,iDraw);





	return 0;
}
