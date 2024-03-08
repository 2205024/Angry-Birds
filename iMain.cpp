# include "head.h"




/*
	function iDraw()s is called again and again by the system.

	*/



void iDraw() {
	//place your drawing codes here

	iClear();

	if(sc==0 || sc==1001)
	{
		iShowBMP(0, 0, wp[1]);
		//ager ta niche bame kona theke shuru hoto ar x 100 kore kore y 70 kore kore barto
		if(sc!=1001) {
		
		iSetColor(179, 136, 235); //lavendar
		iSetColor(247, 174, 248); //pink
		iSetColor(253, 197, 245); //lightpink
		iSetColor(255, 255, 255); //white
		iSetColor(253, 247, 216); //naples yellow light

		// iSetColor(247, 174, 248); //pink
		// iFilledRectangle(cp1-400+30, cp2-250+20, 740, 560);

		// iSetColor(253, 197, 245); //lightpink
		// iFilledRectangle(cp1-400+60, cp2-250+40, 680, 520);

		iSetColor(179, 136, 235); //lavendar
		iFilledRectangle(cp1-400+90, cp2-250+60, 620, 430);

		iSetColor(253, 247, 216); //naples yellow light
		iFilledRectangle(cp1-400+120, cp2-250+80, 560, 390);

		iSetColor(179, 136, 235); //lavendar
		iFilledRectangle(cp1-400+150, cp2-250+100, 500, 350);

		iSetColor(253, 247, 216); //naples yellow light
		iFilledRectangle(cp1-400+180, cp2-250+120, 440, 310);

		// iSetColor(250, 198, 199); //cream
		// iFilledRectangle(cp1-400+210, cp2-250+140, 380, 320);

		
		iSetColor(128, 147, 241); //blue
		iFilledRectangle(cp1-40, cp2+65, 80, 30);
		iSetColor(255, 255, 255);
		iText(cp1-40+5, cp2+65+10, "PLAY GAME");

		iSetColor(128, 147, 241); //blue
		iFilledRectangle(cp1-15-80, cp2+10, 80, 30);
		iSetColor(255, 255, 255);
		iText(cp1-15-80+6, cp2+10+10, "EXIT GAME");

		iSetColor(128, 147, 241); //blue
		iFilledRectangle(cp1+15, cp2+10, 80, 30);
		iSetColor(255, 255, 255);
		iText(cp1+15+15, cp2+10+10, "INSTRUC"); 
		
		iSetColor(128, 147, 241); //blue
		iFilledRectangle(cp1-15-80, cp2-45, 80, 30);
		iSetColor(255, 255, 255);
		iText(cp1-15-80+7, cp2-45+10, "PLAYLIST");
		
		iSetColor(128, 147, 241); //blue
		iFilledRectangle(cp1+15, cp2-45, 80, 30);
		iSetColor(255, 255, 255);
		iText(cp1+15+12, cp2-45+10, "CREDITS"); }

		// if(sc==0 && sc!=1001) {
		// iSetColor(128, 147, 241); //blue
		// iFilledRectangle(960-40, 540-15, 80, 30);
		// iSetColor(255, 255, 255);
		// iText(960-40+5, 540-15+10, "PLAY GAME");

		// iSetColor(128, 147, 241); //blue
		// iFilledRectangle(960-40, 540-15-60, 80, 30);
		// iSetColor(255, 255, 255);
		// iText(960-40+13, 540-15+10-60, "PAI-PAI🤫");

		// iSetColor(128, 147, 241); //blue
		// iFilledRectangle(960-40, 540-15-120, 80, 30);
		// iSetColor(255, 255, 255);
		// iText(960-40+13, 540-15+10-60, "SENSEI"); }

		if(sc==1001) { //sensei instruction page
		iSetColor(249, 42, 130); //rose
		iSetColor(237, 123, 132); //light coral
		iSetColor(245, 219, 203); //champagne pink

		iSetColor(237, 123, 132); //light coral
		iFilledRectangle(cp1-300, cp2-250, 600, 600);
		iSetColor(245, 219, 203); //champagne pink
		iFilledRectangle(cp1-300+15, cp2-250+15, 570, 570);
		iSetColor(237, 123, 132); //light coral
		iFilledRectangle(cp1-300+30, cp2-250+30, 540, 540);
		iSetColor(245, 219, 203); //champagne pink
		iFilledRectangle(cp1-300+45, cp2-250+45, 510, 510);
		iSetColor(249, 42, 130); //rose
		iFilledRectangle(cp1-300+450, cp2-250+45+20, 100, 20);
		iSetColor(255, 255, 255);
		iText(cp1-300+450+5, cp2-250+45+20+6, "MAIN MENU");
		iSetColor(249, 42, 130); //rose
		iText(cp1-300+45+20, cp2-250+45+510-30, "drag over the bird with mouse to aim", GLUT_BITMAP_HELVETICA_18);
		iText(cp1-300+45+20, cp2-250+45+510-60, "Release mouse to shoot", GLUT_BITMAP_HELVETICA_18);

		if(sc==1002) { //sensei instruction page
		iSetColor(249, 42, 130); //rose
		iSetColor(237, 123, 132); //light coral
		iSetColor(245, 219, 203); //champagne pink

		iSetColor(237, 123, 132); //light coral
		iFilledRectangle(cp1-300, cp2-250, 600, 600);
		iSetColor(245, 219, 203); //champagne pink
		iFilledRectangle(cp1-300+15, cp2-250+15, 570, 570);
		iSetColor(237, 123, 132); //light coral
		iFilledRectangle(cp1-300+30, cp2-250+30, 540, 540);
		iSetColor(245, 219, 203); //champagne pink
		iFilledRectangle(cp1-300+45, cp2-250+45, 510, 510);
		iSetColor(249, 42, 130); //rose
		iFilledRectangle(cp1-300+450, cp2-250+45+20, 100, 20);
		iSetColor(255, 255, 255);
		iText(cp1-300+450+5, cp2-250+45+20+6, "MAIN MENU");
		iSetColor(249, 42, 130); //rose
		//iText(cp1-300+45+20, cp2-250+45+510-30, "drag over the bird with mouse to aim", GLUT_BITMAP_HELVETICA_18);
		//iText(cp1-300+45+20, cp2-250+45+510-60, "Release mouse to shoot", GLUT_BITMAP_HELVETICA_18);
		}
		if(sc==1003) { //sensei instruction page
		iSetColor(249, 42, 130); //rose
		iSetColor(237, 123, 132); //light coral
		iSetColor(245, 219, 203); //champagne pink

		iSetColor(237, 123, 132); //light coral
		iFilledRectangle(cp1-300, cp2-250, 600, 600);
		iSetColor(245, 219, 203); //champagne pink
		iFilledRectangle(cp1-300+15, cp2-250+15, 570, 570);
		iSetColor(237, 123, 132); //light coral
		iFilledRectangle(cp1-300+30, cp2-250+30, 540, 540);
		iSetColor(245, 219, 203); //champagne pink
		iFilledRectangle(cp1-300+45, cp2-250+45, 510, 510);
		iSetColor(249, 42, 130); //rose
		iFilledRectangle(cp1-300+450, cp2-250+45+20, 100, 20);
		iSetColor(255, 255, 255);
		iText(cp1-300+450+5, cp2-250+45+20+6, "MAIN MENU");
		iSetColor(249, 42, 130); //rose
		//iText(cp1-300+45+20, cp2-250+45+510-30, "drag over the bird with mouse to aim", GLUT_BITMAP_HELVETICA_18);
		//iText(cp1-300+45+20, cp2-250+45+510-60, "Release mouse to shoot", GLUT_BITMAP_HELVETICA_18);
		}


		
		
		
		
		
		}




	}
	









	if(sc==1 || sc==101 || sc==102 || sc==103)
	{
		draw_main();
		iSetColor(134, 234, 245);
		iFilledRectangle(1380, grh, 240, 30);
		draw_empire(nc[0], nd[0], 0);
		draw_empire(nc[1], nd[1], 1);
		draw_empire(nc[2], nd[2], 2);
		draw_empire(nc[3], nd[3], 3);
		// for(int gh=0; gh<8; gh++) {
		// draw_pig(ne[gh][0], ne[gh][1]); }
		// draw_pig(nc[0]+62, nd[0]+365+45+q[0][7]+r);
		// draw_pig(nc[0]+62, nd[0]+55+q[0][2]+r);
		// draw_pig(nc[1]+7, nd[1]+165+q[1][3]+r);
		// draw_pig(nc[1]+127, nd[1]+165+q[1][3]+r);
		// draw_pig(nc[1]+150, nd[1]+r);
		// draw_pig(nc[2]+62, nd[2]+165+q[2][3]+r);
		// draw_pig(nc[2]+62, nd[0]+365+45+q[2][7]+r);
		pig_arr();
		for(int gh=0; gh<7; gh++) {
		draw_pig(ne[gh][0], ne[gh][1]); }

		// nc = 1200, nd = grh, draw_empire();
		// nc = 1400, nd = grh+30, draw_empire();
		// nc = 1700, nd = grh, draw_empire();

		if(sc==101) ingame_menu();
		if(sc==102) winsc();
		if(sc==103) losesc();
		
	}

	

}





/*
	function iMouseMove() is called when the user presses and drags the mouse.
	(mx, my) is the position where the mouse pointer is.
	
	*/


void iMouseMove(int mx, int my)
{
	if(sc==1)
	{
		if (mx<birdIniPosX-1 && my<birdIniPosy-1
		    && hitbox_perm==1 && shuru_korte_bolchi_toke==1
		    && move_bird==0)
		{
			//printf("pakhi tantechi\n");
			sling_line_perm = 1;
			projectile_line_perm = 1;
			double ssdx = birdIniPosX-mx, ssdy = birdIniPosy-my;
			ang = atan((birdIniPosy-my)/(birdIniPosX-mx));
			dissq = ssdx*ssdx + ssdy*ssdy;
			if(dissq < max_dis_fromsling * max_dis_fromsling)
			{
				x=mx;
				y=my;
			}
			else
			{
				x=birdIniPosX-max_dis_fromsling*cos(ang);
				y=birdIniPosy-max_dis_fromsling*sin(ang);
			}
			shootperm = 1;
			//printf("%d\n", shootperm);
		}
		else
		{
			sling_line_perm = 0;
			projectile_line_perm = 0;
			shootperm = 0;
			if(move_bird==0)
			{
				x=birdIniPosX;
				y=birdIniPosy;
			}
		}
	}
}

/*
	function iMouse() is called when the user presses/releases the mouse.
	(mx, my) is the position where the mouse pointer is.
	*/
void iMouse(int button, int state, int mx, int my) {
	if (button == GLUT_LEFT_BUTTON && state == GLUT_DOWN) {


		if(sc==0)
		{
			//960-40, 540-15, 80, 30
			//cp1-40, cp2+65, 80, 30
			if(mx>cp1-40 && mx<cp1-40+80 && my>cp2+65 && my<cp2+65+30)
			{ //shuru korlam
				sc=1;
				menu_open_ache_gadhar_baccha = 0;
				move_bird = 0;
				pogo = 0;
			}

			//960-40, 540-15-60, 80, 30
			//cp1-15-80, cp2+10, 80, 30
			if(mx>cp1-15-80 && mx<cp1-15-80+80 && my>cp2+10 && my<cp2+10+30)
			{
				exit(0);
			}

			//960-40, 540-15-120, 80, 30
			//cp1+15, cp2+10, 80, 30
			if(mx>cp1+15 && mx<cp1+15+80 && my>cp2+10 && my<cp2+10+30)
			{
				sc = 1001;
			}

			//cp1-15-80, cp2-45, 80, 30 playlist
			if(mx>cp1-15-80 && mx<cp1-15-80+80 && my>cp2-45 && my<cp2-45+30)
			{
				sc = 1002;
			}


			//cp1+15, cp2-45, 80, 30 credits
			if(mx>cp1+15 && mx<cp1+15+80 && my>cp2-45 && my<cp2-45+30)
			{
				sc = 1003;
			}
		}

		if(sc==1002)
		{
			if(mx>0 && mx<1920 && my>0 && my<1080) sc=0;
		}
		if(sc==1003)
		{
			if(mx>0 && mx<1920 && my>0 && my<1080) sc=0;
		}


		if(sc==1001)
		{
			//cp1-300+450, cp2-250+45+20, 100, 20
			if(mx>cp1-300+450 && mx<cp1-300+450+100 && my>cp2-250+45+20 && my<cp2-250+45+20+20)
			{
				sc = 0;
			}
		}


//x1

		if(sc==1 ||  sc==102 || sc==103)
		{

			printf("%d %d hehe mouse\n", mx, my);

			//1740, 920, 130, 30
			if(mx>1740 && mx<1740+130 && my>920 && my<920+30
			   /*&& stable[1]==1*/)
			{
				// x = xs1[1], y = ys1[1], t=0;
				// stable[1] = 0;
				// move_bird = 2; //2 for his silly little ascend
				// iResumeTimer(t1);
				uy = uy - 2*g*t;

				birdMovePosx = x, birdMovePosy = y;
				t = 0, ux *= 1.7, uy *= 1.7;
			}

			if(mx<birdIniPosX+r && mx>birdIniPosX-r 
			&& my<birdIniPosy+r && my>birdIniPosy-r && shuru_korte_bolchi_toke==1)
			{
				hitbox_perm = 1;
			}
			else 
			{
				hitbox_perm = 0;
			}

			//1720, 1010, 170, 50
			if(mx>1720 && mx<1720+170 && my>1010 && my<1010+50)
			{ //opnes menu
				//iPauseTimer(t1);
				//printf("menu open korlam\n");
				menu_open_ache_gadhar_baccha=1;
				sc=101;
			}
			else
			{
				if(byp==2)
				{
				uy = uy - 2*g*t;
				birdMovePosx = x, birdMovePosy = y;
				t = 0, ux *= 1.7, uy *= 1.7;
				}
				if(move_bird==1 && byp==3)
				{
					lpk[0] = 1, lpk[1] = 1;
					// double uyt = (uy-2*g*t) > 0 ? uy-2*g*t : 2*g*t-uy;
					// double uxt = ux;
					// double tht = atan(-uxt/uyt);
					// lp[0][0] = 15*cos(tht), lp[0][1] = 15*sin(tht);
					// lp[1][0] = -15*cos(tht), lp[1][1] = -15*sin(tht);
					lp[0][0] = 3, lp[0][1] = 50;
					lp[1][0] = 6, lp[1][1] = 100;
				}


			}


		}


		if(sc==101)
		{
			//cp1-40, cp2+30, 80, 30
			if(mx>cp1-40 && mx<cp1-40+80 && my>cp2+30 && my<cp2+30+30)
			{ //raaaasium
			    //printf("resume korlam\n");
				sc=1;
				menu_open_ache_gadhar_baccha = 0;
				//printf("%d fff %d g-g kire vai ashole \n", shootperm, menu_open_ache_gadhar_baccha);
			}

			//cp1-15-100, cp2-30, 100, 30
			if(mx>cp1-15-100 && mx<cp1-15-100+100 && my>cp2-30 && my<cp2-30+30)
			{ //bashay jabo
				
				restore();
				sc=0;
			}

			//cp1+15, cp2-30, 100, 30
			if(mx>cp1+15 && mx<cp1+15+100 && my>cp2-30 && my<cp2-30+30)
			{ //stats for nerds
				nerdstat = !nerdstat;
			}


		}





	}

	if (button == GLUT_LEFT_BUTTON && state == GLUT_UP) {

		if(sc==1) 
		{
			//printf("%d fff %d g-g\n", shootperm, menu_open_ache_gadhar_baccha);
			if(shootperm==1)
			{
				slingshoot();
			}
		}
	}

	if (button == GLUT_RIGHT_BUTTON && state == GLUT_DOWN) {
		//place your codes here
		if(sc==1)
		{
		hitbox_perm = 0;
		restore();
		}
	}
}


void iKeyboard(unsigned char key) {
	if (key == ' ') {
		exit(0);
	}

	if(sc==1)
	{
		if (key == 'f') {
			printf("\n-----%lf-----\n-----%lf-----\n\n", y, x);
		}
		if (key == 'h')
		{
				printf("\n [%d] -%d_ -%d_ -%d_ -%d_ -%d_ \n", pogo, x_pro, y_pro, u_pro, th_pro, t_pro);
		}
		if (key == 's')
		{
		// 	shuru_korte_bolchi_toke = !shuru_korte_bolchi_toke;
		}
		if(key == 'm');
		{
			if(stable[1]!=0) {
			bsc = 1;
			x = xs1[1], y = ys1[1], t=0;
			stable[1] = 0;
			move_bird = 2; //2 for his silly little ascend
			iResumeTimer(t1);
			// for(int gjg=0; gjg<3; gjg++)
			// {
			// 	for(int jgj=0; jgj<8; jgj++)
			// 	{
			// 		printf("%d\n", colper[gjg][jgj]);
			// 		printf("%d\n", q[gjg][jgj]);
			// 	}
			// }
			}
		}
	}


}

void iSpecialKeyboard(unsigned char key) {

	if (key == GLUT_KEY_END) {
		exit(0);
	}
}

// void pura_game(void);
void change(void) {

	aatemp -= 7;
	if(aatemp<=-72) aatemp=0;
	abtemp += 3;
	if(abtemp>3000) abtemp = -900;

	if(move_bird==2)
	{
	silly_little_rise(bsc);
	}

	if(move_bird==1 && menu_open_ache_gadhar_baccha==0)
	{
		
		x = birdMovePosx + ux*t;
		y = birdMovePosy + uy*t-g*t*t;
		t += 0.01;
		//if(x>1450) iPauseTimer(t1);

		
		collision();
		
		
		if ( ( (birdMovePosy + uy*t-g*t*t)<=grh && jumpflag<5)
		||   ( (birdMovePosy + uy*t-g*t*t - r)<=grh && jumpflag<6)
		||   ( (x > 1380 && x < 1380+240) && 
			   (birdMovePosy + uy*t-g*t*t - r)<=grh+30 && jumpflag<6) ) {
			bounce();
		}

		if (jumpflag==6 || x-r>1920) 
		{
			prep_next();
		}

		// if(pogo >= 7) sc = 102;
		
		
	}
	
}





////////////////////////////////////////////////////////////////////////////////////////////////////////////
int main() {
	//printf("\n -%d_ -%d_ -%d_ -%d_ -%d_ \n", x_pro, y_pro, u_pro, th_pro, t_pro);
	t1 = iSetTimer(t2 , change);
	iPauseTimer(t1);
	// t2 = iSetTimer(10, )
	//place your own initialization codes here.
	iInitialize(1920, 1080, "angry birds");

	return 0;
}
/////////////////////////////////////////////////////////////////////////////////////////////////////////////















