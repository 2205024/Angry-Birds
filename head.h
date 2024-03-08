# include "iGraphics.h"

#define cp1 960
#define cp2 540



int sc = 0;
int bsc = 0;

int jumpflag = 0,
	shoot_count = 0;
int shootperm = 0,
	sling_line_perm = 0,
	projectile_line_perm = 0,
	hitbox_perm = 0,
	setu_proflag = 0,
	shuru_korte_bolchi_toke = 1,
	menu_open_ache_gadhar_baccha = 0,
	move_bird = 0;

int stable[6] = {1, 1, 1, 1, 1, 1};

double bded[5][2];


double aatemp = 0, abtemp = 600;
double desmosx = 600, desmosy = 700;
double ab, abp;






double grh = 200, grl = 200, frco=0.4;
double u=1500/1.713, th=3.14/4.1, g=800/3, uc = 1, nx, ny;


	   
double r = 15;
double xs1[6] = {0, 200, 160, 120, 80, 40}, 
	   ys1[6] = {0, grh+r, grh+r, grh+r, grh+r, grh+r},
	   silly_u[6] = {0, 294.4, 325.5, 374.4, 425.5, 467.6},
	   silly_th[6] = {0, 1.222, 1.111, 1, 0.899, 0.777};



double birdIniPosX = 300, birdIniPosy = 300, m_bird = 2;
double x = xs1[1], y = ys1[1], rd = y-r;
double birdMovePosx = birdIniPosX, birdMovePosy = birdIniPosy;
double t=0, t1, t2=1;
double ux = u*cos(th), uy = u*sin(th);

double ang, dissq, dqs, max_dis_fromsling = 60;

double t_pro=0, x_pro, y_pro, th_pro, u_pro = u, dqs_pro;

double srx = 200, sry = 200;
int pogo = 0;




double nc[4] = {1200, 1400, 1700, 1900}, nd[4] = {grh, grh+30, grh, grh};
double ne[7][2]; //= { 
// 	{nc[0]+67, nd[0]+365+45+r},
// 	{nc[0]+67, nd[0]+55+r},
// 	{nc[1]+8, nd[1]+165+r},
// 	{nc[1]+128, nd[1]+165+r},
// 	{nc[1]+67, nd[1]+365+45+r},
// 	{nc[1]+135+25, grh+30+r},
// 	{nc[2]+67, nd[0]+55+r},
// 	{nc[2]+67, nd[2]+165+r}
// };

// double araplx[3]={nc[0]-15, nc[1]-15, nc[2]-15}; //araari plank
// double araply[3]={nd[0]+150, nd[1]+150, nd[2]+150}; 

double q[4][8];
//shobgulo obs er jonne extra constant add kora hoyeche q double array diye
	// and bivinno ghotonar shomoye oi value ta change kora hocche
	// jehetu temon kono shoja dhakkar ghotona rakha hobe na so its safe ig

int colper[4][8];
int pigper[7];
int bin[5] = {3, 2, 3, 1, 2};
int byp = bin[0];

double lp[2][2], lpk[2];

int pointo = 0,
	nerdstat = 0;


char wp[4][30] = { "wp\\cyberpunk_eyes.bmp", "wp\\bird_train_0.bmp",
					"wp\\mainbg.bmp"
					};







void setSlingShootValues(void);
void setSlingCurveValues(void);
void draw_main(void);
void shoot(void);
void restore(void);
void pillarMove(void);
void bounce(void);
void slingshoot(void);
void check_collision(void);
void check_pig(void);
void pura_game(void);
void draw_done_stuff(void);
void draw_main(void);
void ingame_menu(void);
void draw_empire(int nc, int nd, int n);
void draw_pig(double xo, double yo);
void prep_next(void);
void silly_little_rise(int bosc);
void draw_birdie(int bosc);
void winsc(void);




void draw_train(void)
{
	iSetColor(252, 233, 135); //jasmine (train er holud)
	iSetColor(228, 64, 44); //chili red (train er lal)
	iSetColor(100, 87, 117); //chinese violet (janalar uporer color)
	iSetColor(149, 166, 178); //cadet grey (janalar nicher color)
	iSetColor(44, 43, 66); //space cadet (train er bg)
	iSetColor(184, 182, 184); //silver (train er upper part)
	iSetColor(91, 89, 136); //ultraviolet (janalar outline)

	
	iSetColor(44, 43, 66); //space cadet (train er bg)
	iFilledRectangle(ab-10, abp+5, 220, 55);
	iFilledRectangle(ab-8, abp, 280, 65);
	iSetColor(184, 182, 184); //silver (train er upper part)
	iFilledRectangle(ab-2, abp+65, 282, 5);
	//carriers
	iFilledRectangle(ab+15, abp+70, 7, 10);
	iFilledRectangle(ab+30, abp+70, 7, 10);
	iFilledRectangle(ab+130, abp+70, 7, 10);
	iFilledRectangle(ab+145, abp+70, 7, 10);
	iFilledRectangle(ab+240, abp+70, 7, 10);
	iFilledRectangle(ab+255, abp+70, 7, 10);
	iSetColor(100, 87, 117); //chinese violet (janalar uporer color)
	//wire of train
	iFilledRectangle(ab+24, abp+70, 3, 15);
	iFilledRectangle(ab+139, abp+70, 3, 15);
	iFilledRectangle(ab+249, abp+70, 3, 15);
	//upper deco of train
	iFilledRectangle(ab+52, abp+70, 30, 5);
	iFilledRectangle(ab+87, abp+70, 30, 5);
	iFilledRectangle(ab+163, abp+70, 30, 5);
	iFilledRectangle(ab+198, abp+70, 30, 5);
	//lower deco of train
	iFilledRectangle(ab+0, abp-3, 15, 3);
	iFilledRectangle(ab+50, abp-3, 15, 3);
	iFilledRectangle(ab+100, abp-3, 15, 3);
	iFilledRectangle(ab+150, abp-3, 15, 3);
	iFilledRectangle(ab+200, abp-3, 15, 3);
	iFilledRectangle(ab+250, abp-3, 15, 3);
	// iFilledRectangle(ab-7, abp+60, 260, 5);
	iSetColor(252, 233, 135); //jasmine (train er holud)
	iFilledRectangle(ab-5, abp+5, 290, 55);
	iFilledRectangle(ab, abp, 280, 65);
	iSetColor(228, 64, 44); //chili red (train er lal)
	iFilledRectangle(ab-5, abp+10, 290, 8);
	iFilledRectangle(ab-5, abp+50, 290, 6);

	double aw = ab+3, awp = abp+27;
	iSetColor(91, 89, 136); //ultraviolet (janalar outline)
	iFilledRectangle(aw, awp, 15, 18);
	iSetColor(149, 166, 178); //cadet grey (janalar nicher color)
	iFilledRectangle(aw+1, awp+1, 13, 8);
	iSetColor(100, 87, 117); //chinese violet (janalar uporer color)
	iFilledRectangle(aw+1, awp+1+8, 13, 8);
	//dorja
	aw = aw+22, awp = awp-4;
	iSetColor(91, 89, 136); //ultraviolet (janalar outline)
	iFilledRectangle(aw, awp, 12, 22);
	iSetColor(149, 166, 178); //cadet grey (janalar nicher color)
	iFilledRectangle(aw+1, awp+1, 10, 10);
	iSetColor(100, 87, 117); //chinese violet (janalar uporer color)
	iFilledRectangle(aw+1, awp+1+10, 10, 10);
	iSetColor(44, 43, 66); //space cadet (dorjar line)
	iRectangle(aw-2, awp-20, 31, 43);
	// iLine(aw-2+15, awp-20, aw-2+15, awp+24);
	// iLine(aw-2+16, awp-20, aw-2+15, awp+24);
	aw = aw+14, awp = awp;
	iSetColor(91, 89, 136); //ultraviolet (janalar outline)
	iFilledRectangle(aw, awp, 12, 22);
	iSetColor(149, 166, 178); //cadet grey (janalar nicher color)
	iFilledRectangle(aw+1, awp+1, 10, 10);
	iSetColor(100, 87, 117); //chinese violet (janalar uporer color)
	iFilledRectangle(aw+1, awp+1+10, 10, 10);
	

	//6 ta janala
	aw = aw+23, awp = awp+4;
	iSetColor(91, 89, 136); //ultraviolet (janalar outline)
	iFilledRectangle(aw, awp, 24, 18);
	iSetColor(149, 166, 178); //cadet grey (janalar nicher color)
	iFilledRectangle(aw+1, awp+1, 22, 8);
	iSetColor(100, 87, 117); //chinese violet (janalar uporer color)
	iFilledRectangle(aw+1, awp+1+8, 22, 8);
	aw = aw+26, awp = awp;
	iSetColor(91, 89, 136); //ultraviolet (janalar outline)
	iFilledRectangle(aw, awp, 24, 18);
	iSetColor(149, 166, 178); //cadet grey (janalar nicher color)
	iFilledRectangle(aw+1, awp+1, 22, 8);
	iSetColor(100, 87, 117); //chinese violet (janalar uporer color)
	iFilledRectangle(aw+1, awp+1+8, 22, 8);
	aw = aw+26, awp = awp;
	iSetColor(91, 89, 136); //ultraviolet (janalar outline)
	iFilledRectangle(aw, awp, 24, 18);
	iSetColor(149, 166, 178); //cadet grey (janalar nicher color)
	iFilledRectangle(aw+1, awp+1, 22, 8);
	iSetColor(100, 87, 117); //chinese violet (janalar uporer color)
	iFilledRectangle(aw+1, awp+1+8, 22, 8);
	aw = aw+26, awp = awp;
	iSetColor(91, 89, 136); //ultraviolet (janalar outline)
	iFilledRectangle(aw, awp, 24, 18);
	iSetColor(149, 166, 178); //cadet grey (janalar nicher color)
	iFilledRectangle(aw+1, awp+1, 22, 8);
	iSetColor(100, 87, 117); //chinese violet (janalar uporer color)
	iFilledRectangle(aw+1, awp+1+8, 22, 8);
	aw = aw+26, awp = awp;
	iSetColor(91, 89, 136); //ultraviolet (janalar outline)
	iFilledRectangle(aw, awp, 24, 18);
	iSetColor(149, 166, 178); //cadet grey (janalar nicher color)
	iFilledRectangle(aw+1, awp+1, 22, 8);
	iSetColor(100, 87, 117); //chinese violet (janalar uporer color)
	iFilledRectangle(aw+1, awp+1+8, 22, 8);
	aw = aw+26, awp = awp;
	iSetColor(91, 89, 136); //ultraviolet (janalar outline)
	iFilledRectangle(aw, awp, 24, 18);
	iSetColor(149, 166, 178); //cadet grey (janalar nicher color)
	iFilledRectangle(aw+1, awp+1, 22, 8);
	iSetColor(100, 87, 117); //chinese violet (janalar uporer color)
	iFilledRectangle(aw+1, awp+1+8, 22, 8);
	//dorja
	aw = aw+36, awp = awp-4;
	iSetColor(91, 89, 136); //ultraviolet (janalar outline)
	iFilledRectangle(aw, awp, 12, 22);
	iSetColor(149, 166, 178); //cadet grey (janalar nicher color)
	iFilledRectangle(aw+1, awp+1, 10, 10);
	iSetColor(100, 87, 117); //chinese violet (janalar uporer color)
	iFilledRectangle(aw+1, awp+1+10, 10, 10);
	iSetColor(44, 43, 66); //space cadet (dorjar line)
	iRectangle(aw-2, awp-20, 31, 43);
	aw = aw+14, awp = awp;
	iSetColor(91, 89, 136); //ultraviolet (janalar outline)
	iFilledRectangle(aw, awp, 12, 22);
	iSetColor(149, 166, 178); //cadet grey (janalar nicher color)
	iFilledRectangle(aw+1, awp+1, 10, 10);
	iSetColor(100, 87, 117); //chinese violet (janalar uporer color)
	iFilledRectangle(aw+1, awp+1+10, 10, 10);
	//shamner janala
	aw = aw+20, awp = awp+4;
	iSetColor(91, 89, 136); //ultraviolet (janalar outline)
	iFilledRectangle(aw, awp, 15, 18);
	iSetColor(149, 166, 178); //cadet grey (janalar nicher color)
	iFilledRectangle(aw+1, awp+1, 13, 8);
	iSetColor(100, 87, 117); //chinese violet (janalar uporer color)
	iFilledRectangle(aw+1, awp+1+8, 13, 8);
}

void draw_sky(void)
{
	for(double dg=0; dg<20; dg++)
	{   // diffs = 21, 22, 17; use 20 steps ig {200}
		iSetColor(21-dg, 96+dg, 189+dg); //denim blue to dell blue
		iFilledRectangle(0, 1070-dg*10, 1920, 10);
		// iSetColor(21, 96, 189); //denim blue #1560bd
		// iFilledRectangle(0, 800, 1920, 280);
		// iSetColor(0, 118, 206); //#0076CE dell blue
		// iFilledRectangle(0, 600, 1920, 200);
	}
	for(double dg=0; dg<33; dg++)
	{   // diffs = 108, 62, 32; use 33 steps ig {320} 560-880
		iSetColor(0+3.27*dg, 118+1.88*dg, 206+dg); //dell blue to argentinian blue
		iFilledRectangle(0, 870.3-dg*9.7, 1920, 9.7);
		// iSetColor(0, 118, 206); //#0076CE dell blue
		// iFilledRectangle(0, 600, 1920, 200);
		// iSetColor(108, 180, 238); //#6CB4EE argentinian blue
		// iFilledRectangle(0, 400, 1920, 200);
	}
	for(double dg=0; dg<32; dg++)
	{   // diffs = 65, 36, 8; use 32 steps ig {360} 200-560
		iSetColor(108+dg*2.03, 180+dg*1.13, 238-dg*0.25); //argentinian blue to light blue
		iFilledRectangle(0, 548.75-dg*11.25, 1920, 11.25);
		// iSetColor(108, 180, 238); //#6CB4EE argentinian blue
		// iFilledRectangle(0, 400, 1920, 200);
		// iSetColor(173, 216, 230); //#ADD8E6 light blue
		// iFilledRectangle(0, 200, 1920, 200);
	}
	for(double dg=0; dg<25; dg++)
	{   // diffs = 52, 19, 8; use 25 steps ig {200} 0-200
		iSetColor(173+dg*2.08, 216+dg*0.76, 230+dg*0.32); // light blue to marian blue
		iFilledRectangle(0, 192-dg*8, 1920, 8);
		// iSetColor(173, 216, 230); //#ADD8E6 light blue
		// iFilledRectangle(0, 200, 1920, 200);
		// iSetColor(225, 235, 238); //#E1EBEE marian blue (lightest)
		// iFilledRectangle(0, 0, 1920, 200);
	}


	// iSetColor(21, 96, 189); //denim blue #1560bd
	// iFilledRectangle(0, 800, 1920, 280);
	// iSetColor(0, 118, 206); //#0076CE dell blue
	// iFilledRectangle(0, 600, 1920, 200);
	// iSetColor(108, 180, 238); //#6CB4EE argentinian blue
	// iFilledRectangle(0, 400, 1920, 200);
	// iSetColor(173, 216, 230); //#ADD8E6 light blue
	// iFilledRectangle(0, 200, 1920, 200);
	// iSetColor(225, 235, 238); //#E1EBEE marian blue (lightest)
	// iFilledRectangle(0, 0, 1920, 200);
}

void draw_ladder(void)
{
	double la = grl;
	iSetColor(120, 41, 37); //image maroon
	double lax[4] = {la-40, la-35, la-75, la-80};
	double lay[4] = {grh-40, grh-40, 0, 0};
	iFilledPolygon(lax, lay, 4);

	iSetColor(217, 134, 130); //image lighet maroon
	double laxx[4] = {la+40, la+35, la-5, la};
	double layy[4] = {grh-40, grh-40, 0, 0};
	iFilledPolygon(laxx, layy, 4);

	iSetColor(217, 134, 130); //image lighet maroon
	double laxxx[4] = {la-37, la-32, la-72, la-77};
	double layyy[4] = {grh-40, grh-40, 0, 0};
	iFilledPolygon(laxxx, layyy, 4);

	iSetColor(120, 41, 37); //image maroon
	double laxxxx[4] = {la+43, la+38, la-2, la+3};
	double layyyy[4] = {grh-40, grh-40, 0, 0};
	iFilledPolygon(laxxxx, layyyy, 4);

	// iSetColor(120, 41, 37); //image maroon
	// 	double lsx[4] = {la-37, la+33, la+32.5, la-37.5};
	// 	double lsy[4] = {grh-52, grh-52, grh-54, grh-54};
	// 	iFilledPolygon(lsx, lsy, 4);

    // iSetColor(217, 134, 130); //image lighet maroon
	// 	double lsxx[4] = {la-37.5, la+32.5, la+32, la-38};
	// 	double lsyy[4] = {grh-54, grh-54, grh-56, grh-56};
	// 	iFilledPolygon(lsxx, lsyy, 4);


	for(int dg=0; dg<10; dg++)
	{
		iSetColor(120, 41, 37); //image maroon
		double lsx[4] = {la-37-dg*4 , la+33-dg*4 , la+32.5-dg*4 , la-37.5-dg*4 };
		double lsy[4] = {grh-52-dg*16 , grh-52-dg*16 , grh-54-dg*16 , grh-54-dg*16 };
		iFilledPolygon(lsx, lsy, 4);

    	iSetColor(217, 134, 130); //image lighet maroon
		double lsxx[4] = {la-37.5-dg*4 , la+32.5-dg*4 , la+32-dg*4 , la-38-dg*4 };
		double lsyy[4] = {grh-54-dg*16 , grh-54-dg*16 , grh-56-dg*16 , grh-56-dg*16 };
		iFilledPolygon(lsxx, lsyy, 4);
	}
}


void draw_bg(void)
{
	iSetColor(21, 96, 189); //denim blue #1560bd
	iSetColor(0, 118, 206); //#0076CE dell blue
	iSetColor(108, 180, 238); //#6CB4EE argentinian blue
	iSetColor(173, 216, 230); //#ADD8E6 light blue
	iSetColor(225, 235, 238); //#E1EBEE marian blue (lightest)

	draw_sky();

	iSetColor(178, 13, 48); //maroon
	iSetColor(120, 41, 37); //image maroon
	iSetColor(217, 134, 130); //image lighet maroon
	iSetColor(250, 212, 192); //apricot
	iSetColor(202, 89, 83); //fanmach maroon


	// iSetColor(120, 41, 37); //image maroon
	// iFilledRectangle(0, grh-20, 1920, 20);
	// iSetColor(217, 134, 130); //image lighet maroon
	// iFilledRectangle(0, grh-40, 1920, 35);

	for(double dg=0; dg<20; dg++)
	{   // diffs = 97, 93, 93; use 20 steps ig {200} 160-200
		iSetColor(120+dg*4.85, 41+dg*4.65, 37+dg*4.65); // image maroon to image light maroon
		iFilledRectangle(0, 198-dg*2, 1920, 2);
	}
	
	iSetColor(202, 89, 83); //fanmach maroon
	double fanmachx[6] = {1500, 1525, 1595, 1620, 1616, 1504};
	double fanmachy[6] = {160, 192, 192, 160, 152, 152};
	iFilledPolygon(fanmachx, fanmachy, 6);

	draw_ladder();

	

	
	// iSetColor(193, 208, 217); //columbia blue (bamer dandir color)
	// iFilledRectangle(aa, aap-4, 8, 36);
	// iSetColor(104, 116, 152); //glaucos (for the borders
	// iRectangle(aa, aap-4, 8, 36);
	// iFilledRectangle(aa+6, aap-4, 2, 36);

	// iSetColor(193, 208, 217); //columbia blue (bamer dandir color)
	// iFilledRectangle(aa+8, aap, 34, 28);

	// iSetColor(174, 189, 196); //french gray (plate er majhe)
	// iFilledRectangle(aa+8, aap+4, 14, 20);
	// iFilledRectangle(aa+8+14+4, aap+4, 14, 20);

	// iSetColor(139, 156, 165); //cadet gray (arekta border
	// iRectangle(aa+8, aap, 34, 28);
	// iRectangle(aa+8, aap+4, 14, 20);
	// iRectangle(aa+8+14+4, aap+4, 14, 20);

	ab = abtemp, abp = 720;
	draw_train();
	ab = ab + 300, abp = abp;
	draw_train();
	ab = ab + 300, abp = abp;
	draw_train();


	


	iSetColor(174, 189, 196); //french gray (plate er majhe)
	iSetColor(104, 116, 152); //glaucos (for the borders
	iSetColor(139, 156, 165); //cadet gray (arekta border
	iSetColor(193, 208, 217); //columbia blue (bamer dandir color)

	
	double aa = aatemp, aap = 800;
	for(int apa=0; apa<60; apa++, aa+=36)
	{
		iSetColor(193, 208, 217); //columbia blue (bamer dandir color)
		iFilledRectangle(aa, aap-4, 8, 36);
		iSetColor(104, 116, 152); //glaucos (for the borders
		iRectangle(aa, aap-4, 8, 36);
		iFilledRectangle(aa+6, aap-4, 2, 36);

		iSetColor(193, 208, 217); //columbia blue (bamer dandir color)
		iFilledRectangle(aa+8, aap, 34, 28);

		iSetColor(174, 189, 196); //french gray (plate er majhe)
		iFilledRectangle(aa+8, aap+4, 14, 20);
		iFilledRectangle(aa+8+14+4, aap+4, 14, 20);

		iSetColor(139, 156, 165); //cadet gray (arekta border
		iRectangle(aa+8, aap, 34, 28);
		iRectangle(aa+8, aap+4, 14, 20);
		iRectangle(aa+8+14+4, aap+4, 14, 20);

	}
	
	


	
}

void ingame_menu(void)
{
	// iPauseTimer(t1);
	iSetColor(254, 251, 236); //lightyellow
	iSetColor(255, 194, 180); //pink
	iSetColor(248, 225, 108); //yellow
	iSetColor(251, 143, 103); //orangish red

	iSetColor(255, 194, 180); //pink
	iFilledRectangle(600, 300, 720, 480);
	iSetColor(254, 251, 236); //lightyellow
	iFilledRectangle(630, 320, 660, 440);
	iSetColor(255, 194, 180); //pink
	iFilledRectangle(660, 340, 600, 400);
	iSetColor(254, 251, 236); //lightyellow
	iFilledRectangle(690, 360, 540, 360);
	iSetColor(255, 194, 180); //pink
	iFilledRectangle(720, 380, 480, 320);
	iSetColor(254, 251, 236); //lightyellow
	iFilledRectangle(750, 400, 420, 280);

	iSetColor(248, 225, 108); //yellow
	iFilledRectangle(cp1-40, cp2+30, 80, 30);
	iSetColor(255, 255, 255);
	iText(cp1-40+15, cp2+30+11, "RESUME");

	iSetColor(248, 225, 108); //yellow
	iFilledRectangle(cp1-15-100, cp2-30, 100, 30);
	iSetColor(255, 255, 255);
	iText(cp1-15-100+6, cp2-30+10, "MAIN MENU");

	iSetColor(248, 225, 108); //yellow
	iFilledRectangle(cp1+15, cp2-30, 100, 30);
	iSetColor(255, 255, 255);
	iText(cp1+15+6, cp2-30+10, "NERD STATS");

	iSetColor(251, 143, 103); //orangish red
	iText(750+220, 400+10, "STAND PROUD © 2024");
}


void draw_empire(int nc, int nd, int n)
{
	iSetColor(255, 196, 12); //mikado
	iSetColor(255, 164, 0); //school
	iSetColor(255, 166, 43); //mangoe
	iSetColor(93, 169, 233); //argentinian blue


	iSetColor(255, 196, 12); //mikado
	iFilledRectangle(nc, nd+q[n][0], 15, 150);
	iFilledRectangle(nc+120, nd+q[n][1], 15, 150);  //nicher duita lomba pa
	iFilledRectangle(nc-15, nd+150+q[n][3], 165, 15);  //araari boro wood
	iFilledRectangle(nc+30, nd+165+q[n][4], 15, 170);
	iFilledRectangle(nc+90, nd+165+q[n][5], 15, 170);  //uporer duita lomba pa
	iFilledRectangle(nc+30, nd+335+q[n][6], 75, 30);  //uporer cap wood

	iSetColor(93, 169, 233); //argentinian blue
	iFilledRectangle(nc+25, nd+q[n][2], 85, 55); // nicher borof
	iFilledRectangle(nc+45, nd+365+q[n][7], 45, 45); // uporer borof
//shobgulo obs er jonne extra constant add kora hoyeche q double array diye
	// and bivinno ghotonar shomoye oi value ta change kora hocche
	// jehetu temon kono shoja dhakkar ghotona rakha hobe na so its safe ig

}

void draw_pig(double xo, double yo)
{
	iSetColor(249, 42, 130); //rose
	iFilledCircle(xo, yo, r);
	iSetColor(255, 255, 255);
	iFilledCircle(xo-7, yo+5, 1);
	iFilledCircle(xo+7, yo+5, 1);
	iFilledCircle(xo, yo-1, 1);
}

/*
void draw_empire(int nc, int nd)
{
	iSetColor(255, 196, 12); //mikado
	iSetColor(255, 164, 0); //school
	iSetColor(255, 166, 43); //mangoe
	iSetColor(93, 169, 233); //argentinian blue


	iSetColor(255, 196, 12); //mikado
	iFilledRectangle(nc, nd, 15, 150);
	iFilledRectangle(nc+120, nd, 15, 150);  //nicher duita lomba pa
	iFilledRectangle(nc-15, nd+150, 165, 15);  //araari boro wood
	iFilledRectangle(nc+30, nd+165, 15, 170);
	iFilledRectangle(nc+90, nd+165, 15, 170);  //uporer duita lomba pa
	iFilledRectangle(nc+30, nd+335, 75, 30);  //uporer cap wood

	iSetColor(93, 169, 233); //argentinian blue
	iFilledRectangle(nc+25, nd, 85, 55); // nicher borof
	iFilledRectangle(nc+45, nd+365, 45, 45); // uporer borof



}*/


void draw_main(void)
{


	
	draw_done_stuff();

    draw_birdie(1);
	draw_birdie(2);
	draw_birdie(3);
	draw_birdie(4);
	draw_birdie(5);

	

	// bashay jabo
	iSetColor(250, 212, 192); //apricot
	iFilledRectangle(1720, 1010, 170, 50);
	iSetColor(176, 158, 153); //cinerous
	iFilledRectangle(1720+12, 1010+7, 146, 36);
	iSetColor(254, 233, 225); //misty rose
	iFilledRectangle(1720+14, 1010+9, 142, 32);
	iSetColor(0, 147, 241); //blue
	iFilledCircle(1740+15, 1020+15, 9);
	iSetColor(255, 255, 255); //white
	iFilledCircle(1740+15, 1020+15, 7);
	iSetColor(0, 147, 241); //blue
	iFilledCircle(1740+15, 1020+15, 5);
	iSetColor(176, 158, 153); //cinerous
	iText(1740+33, 1020+10, "MAIN MENU");

	// iSetColor(0, 147, 241); //blue
	// iFilledRectangle(1740, 920, 130, 30); // the sling rise

	iSetColor(254, 233, 225); //misty rose
	iSetColor(250, 212, 192); //apricot
	iSetColor(176, 158, 153); //cinerous

	iSetColor(250, 212, 192); //apricot
	iFilledRectangle(cp1-125-10, cp2+430-15, 270, 70);
	iSetColor(176, 158, 153); //cinerous
	iFilledRectangle(cp1-125, cp2+430, 250, 40);
	// iSetColor(250, 212, 192); //apricot
	// iFilledRectangle(cp1-125+2, cp2+430+2, 246, 36);
	iSetColor(254, 233, 225); //misty rose
	iFilledRectangle(cp1-125+5, cp2+430+5, 240, 30);
	iSetColor(176, 158, 153); //cinerous
	char points[20];
	sprintf(points, "POINTS <owo> :   %d", pointo);
	iText(cp1-125+5+5, cp2+430+10, points, GLUT_BITMAP_TIMES_ROMAN_24);




}





void draw_birdie(int bosc)
{
	if(stable[bosc]==1 && bsc<=bosc)
	{
		if(bin[bosc-1]==1) {
		iSetColor(228, 64, 44);
		iFilledCircle(xs1[bosc], ys1[bosc], r);
		iSetColor(229, 233, 236);
		iFilledCircle(xs1[bosc]-5, ys1[bosc]+5, r-13);
		iFilledCircle(xs1[bosc]+5, ys1[bosc]+5, r-13);
		double xi1[3] = {xs1[bosc]+10, xs1[bosc]+12, xs1[bosc]+20};
		double yi1[3] = {ys1[bosc]-4, ys1[bosc]+4, ys1[bosc]};
		iFilledPolygon(xi1, yi1, 3); }

		if(bin[bosc-1]==2) {
		iSetColor(252, 233, 135); //digitalyellow
		iSetColor(252, 233, 135);
		iFilledCircle(xs1[bosc], ys1[bosc], r);
		iSetColor(229, 233, 236);
		iFilledCircle(xs1[bosc]-5, ys1[bosc]+5, r-13);
		iFilledCircle(xs1[bosc]+5, ys1[bosc]+5, r-13);
		double xi1[3] = {xs1[bosc]+10, xs1[bosc]+12, xs1[bosc]+20};
		double yi1[3] = {ys1[bosc]-4, ys1[bosc]+4, ys1[bosc]};
		iFilledPolygon(xi1, yi1, 3); }

		if(bin[bosc-1]==3) {
		iSetColor(107, 186, 236); //dodger blue
		iSetColor(107, 186, 236);
		iFilledCircle(xs1[bosc], ys1[bosc], r);
		iSetColor(229, 233, 236);
		iFilledCircle(xs1[bosc]-5, ys1[bosc]+5, r-13);
		iFilledCircle(xs1[bosc]+5, ys1[bosc]+5, r-13);
		double xi1[3] = {xs1[bosc]+10, xs1[bosc]+12, xs1[bosc]+20};
		double yi1[3] = {ys1[bosc]-4, ys1[bosc]+4, ys1[bosc]};
		iFilledPolygon(xi1, yi1, 3); }
	}



	else if(stable[bosc]==0 && bsc==bosc)
	{
		if(bin[bosc-1]==1) {
		iSetColor(228, 64, 44);
		iFilledCircle(x, y, r);
		iSetColor(229, 233, 236);
		iFilledCircle(x-5, y+5, r-13);
		iFilledCircle(x+5, y+5, r-13);
		double xi[3] = {x+10, x+12, x+20};
		double yi[3] = {y-4, y+4, y};
		iFilledPolygon(xi, yi, 3); }

		if(bin[bosc-1]==2) {
		iSetColor(252, 233, 135); //digitalyellow
		iSetColor(252, 233, 135);
		iFilledCircle(x, y, r);
		iSetColor(229, 233, 236);
		iFilledCircle(x-5, y+5, r-13);
		iFilledCircle(x+5, y+5, r-13);
		double xi[3] = {x+10, x+12, x+20};
		double yi[3] = {y-4, y+4, y};
		iFilledPolygon(xi, yi, 3); }

		if(bin[bosc-1]==3) {
		iSetColor(107, 186, 236); //dodger blue

			iSetColor(107, 186, 236);
			iFilledCircle(x, y, r);
			iSetColor(229, 233, 236);
			iFilledCircle(x-5, y+5, r-13);
			iFilledCircle(x+5, y+5, r-13);
			double xi[3] = {x+10, x+12, x+20};
			double yi[3] = {y-4, y+4, y};
			iFilledPolygon(xi, yi, 3);

			if(lpk[0]==1)
			{
				iSetColor(107, 186, 236);
			iFilledCircle(x+lp[0][0], y+lp[0][1], r);
			iSetColor(229, 233, 236);
			iFilledCircle(x+lp[0][0]-5, y+lp[0][1]+5, r-13);
			iFilledCircle(x+lp[0][0]+5, y+lp[0][1]+5, r-13);
			double xi[3] = {x+lp[0][0]+10, x+lp[0][0]+12, x+lp[0][0]+20};
			double yi[3] = {y+lp[0][1]-4, y+lp[0][1]+4, y+lp[0][1]}; 
			iFilledPolygon(xi, yi, 3);
			if(y+lp[0][1]-r <= grh) lpk[0] = 0;
			}

			if(lpk[1]==1)
			{
				iSetColor(107, 186, 236);
			iFilledCircle(x+lp[1][0], y+lp[1][1], r);
			iSetColor(229, 233, 236);
			iFilledCircle(x+lp[1][0]-5, y+lp[1][1]+5, r-13);
			iFilledCircle(x+lp[1][0]+5, y+lp[1][1]+5, r-13);
			double xi[3] = {x+lp[1][0]+10, x+lp[1][0]+12, x+lp[1][0]+20};
			double yi[3] = {y+lp[1][1]-4, y+lp[1][1]+4, y+lp[1][1]};
			iFilledPolygon(xi, yi, 3);
			}



		 }
	}



	else if(stable[bosc]==0 && bsc>bosc)
	{
		if(bin[bosc-1]==1) {
		iSetColor(228, 64, 44);
		iFilledCircle(bded[bosc-1][0], bded[bosc-1][1], r);
		iSetColor(229, 233, 236);
		iFilledCircle(bded[bosc-1][0]-5, bded[bosc-1][1]+5, r-13);
		iFilledCircle(bded[bosc-1][0]+5, bded[bosc-1][1]+5, r-13);
		double xdi[3] = {bded[bosc-1][0]+10, bded[bosc-1][0]+12, bded[bosc-1][0]+20};
		double ydi[3] = {bded[bosc-1][1]-4, bded[bosc-1][1]+4, bded[bosc-1][1]};
		iFilledPolygon(xdi, ydi, 3); }

		if(bin[bosc-1]==2) {
		iSetColor(252, 233, 135); //digitalyellow
		iSetColor(252, 233, 135);
		iFilledCircle(bded[bosc-1][0], bded[bosc-1][1], r);
		iSetColor(229, 233, 236);
		iFilledCircle(bded[bosc-1][0]-5, bded[bosc-1][1]+5, r-13);
		iFilledCircle(bded[bosc-1][0]+5, bded[bosc-1][1]+5, r-13);
		double xdi[3] = {bded[bosc-1][0]+10, bded[bosc-1][0]+12, bded[bosc-1][0]+20};
		double ydi[3] = {bded[bosc-1][1]-4, bded[bosc-1][1]+4, bded[bosc-1][1]};
		iFilledPolygon(xdi, ydi, 3); }

		if(bin[bosc-1]==3) {
		iSetColor(107, 186, 236); //dodger blue
		iSetColor(107, 186, 236);;
		iFilledCircle(bded[bosc-1][0], bded[bosc-1][1], r);
		iSetColor(229, 233, 236);
		iFilledCircle(bded[bosc-1][0]-5, bded[bosc-1][1]+5, r-13);
		iFilledCircle(bded[bosc-1][0]+5, bded[bosc-1][1]+5, r-13);
		double xdi[3] = {bded[bosc-1][0]+10, bded[bosc-1][0]+12, bded[bosc-1][0]+20};
		double ydi[3] = {bded[bosc-1][1]-4, bded[bosc-1][1]+4, bded[bosc-1][1]};
		iFilledPolygon(xdi, ydi, 3); }
	}
}



void prep_next(void)
{
	iPauseTimer(t1);
	bded[bsc-1][0] = x;
	bded[bsc-1][1] = y;
	bsc++;
	byp = bin[bsc-1];
	stable[bsc] = 0;
	x = xs1[bsc], y = ys1[bsc], t = 0;
	birdMovePosx = birdIniPosX, birdMovePosy = birdIniPosy;
	move_bird = 2;
	//u = 0;
	if(bsc<6) iResumeTimer(t1);
	if(bsc==6 && pogo < 7) sc = 103;
}

void silly_little_rise(int bosc)
{
	//printf("\n %lf\n %lf\n %lf\n %lf\n", xs1[bosc], ys1[bosc], silly_u[bosc], silly_th[bosc]);
	x = xs1[bosc] + silly_u[bosc]*cos(silly_th[bosc])*t;
	y = ys1[bosc] + silly_u[bosc]*sin(silly_th[bosc])*t-175*t*t;
	t+=0.02;
	if(x>=300)
	{
		
		x=300, y=300;
		
		move_bird = 0;
		t = 0;
		shuru_korte_bolchi_toke = 1;
		//iResumeTimer(t1);
	}

}

void winsc(void)
{
	iSetColor(254, 251, 236); //lightyellow
	iSetColor(255, 194, 180); //pink
	iSetColor(248, 225, 108); //yellow
	iSetColor(251, 143, 103); //orangish red

	iSetColor(255, 194, 180); //pink
	iFilledRectangle(600, 300, 720, 480);
	iSetColor(254, 251, 236); //lightyellow
	iFilledRectangle(630, 320, 660, 440);
	iSetColor(255, 194, 180); //pink
	iFilledRectangle(660, 340, 600, 400);
	iSetColor(254, 251, 236); //lightyellow
	iFilledRectangle(690, 360, 540, 360);
	iSetColor(255, 194, 180); //pink
	iFilledRectangle(720, 380, 480, 320);
	iSetColor(254, 251, 236); //lightyellow
	iFilledRectangle(750, 400, 420, 280);

	iSetColor(248, 225, 108); //yellow
	iFilledRectangle(cp1-40, cp2-15, 80, 30);

	iSetColor(255, 255, 255);
	iText(cp1-40+5, cp2-15+5, "YOU WIN", GLUT_BITMAP_9_BY_15);

	// iSetColor(248, 225, 108); //yellow
	// iFilledRectangle(cp1-15-100, cp2-30, 100, 30);
	// iSetColor(255, 255, 255);
	// iText(cp1-15-100+6, cp2-30+10, "MAIN MENU");

	// iSetColor(248, 225, 108); //yellow
	// iFilledRectangle(cp1+15, cp2-30, 100, 30);
	// iSetColor(255, 255, 255);
	// iText(cp1+15+6, cp2-30+10, "NERD STATS");

	// iSetColor(251, 143, 103); //orangish red
	// iText(750+220, 400+10, "STAND PROUD © 2024");

}

void losesc(void)
{
	iSetColor(254, 251, 236); //lightyellow
	iSetColor(255, 194, 180); //pink
	iSetColor(248, 225, 108); //yellow
	iSetColor(251, 143, 103); //orangish red

	iSetColor(255, 194, 180); //pink
	iFilledRectangle(600, 300, 720, 480);
	iSetColor(254, 251, 236); //lightyellow
	iFilledRectangle(630, 320, 660, 440);
	iSetColor(255, 194, 180); //pink
	iFilledRectangle(660, 340, 600, 400);
	iSetColor(254, 251, 236); //lightyellow
	iFilledRectangle(690, 360, 540, 360);
	iSetColor(255, 194, 180); //pink
	iFilledRectangle(720, 380, 480, 320);
	iSetColor(254, 251, 236); //lightyellow
	iFilledRectangle(750, 400, 420, 280);

	iSetColor(248, 225, 108); //yellow
	iFilledRectangle(cp1-40, cp2-15, 80, 30);
	iSetColor(255, 255, 255);
	iText(cp1-40+5, cp2-15+5, "YOU LOSE", GLUT_BITMAP_9_BY_15);

	// iSetColor(248, 225, 108); //yellow
	// iFilledRectangle(cp1-15-100, cp2-30, 100, 30);
	// iSetColor(255, 255, 255);
	// iText(cp1-15-100+6, cp2-30+10, "MAIN MENU");

	// iSetColor(248, 225, 108); //yellow
	// iFilledRectangle(cp1+15, cp2-30, 100, 30);
	// iSetColor(255, 255, 255);
	// iText(cp1+15+6, cp2-30+10, "NERD STATS");

	// iSetColor(251, 143, 103); //orangish red
	// iText(750+220, 400+10, "STAND PROUD © 2024");
}

void draw_done_stuff(void)
{
	//bg
	// iSetColor(230, 184, 156);
	// iFilledRectangle(0, 0, 1920, 1080);
	// //iShowBMP(0, 0, wp[2]);
	
	// //ground
	// iSetColor(178, 13, 48);
	// iFilledRectangle(0, 0, 1920, grh);

	// //half sky
	// iSetColor(229, 233, 236);
	// iFilledRectangle(0, grh, 1920, 600);

	// //second half sky
	// iSetColor(234, 253, 248);
	// iFilledRectangle(0, 800, 1920, 280);
	draw_bg();

    //statbox
	if(nerdstat==1) {
	iSetColor(178, 13, 48);
	iFilledRectangle(40, 850, 200, 180); }

	

	// //lower left rectanlge
	// iSetColor(118, 231, 205);
	// iFilledRectangle(10, 30, 20, 20);
	// //ground / horizontal line
	// iSetColor(120, 89, 100);
	// iLine(150, grl, 1920, grl);
	// //limiting box at laftmost ground line
	// iFilledRectangle(150, grl, 30, 70);
	//birdstand
	iSetColor(44, 43, 66); //space cadet (train er bg)
	iFilledRectangle(285, 200, 30, 80);
	// //vertical limiting line
	// iSetColor(245, 235, 245);
	// iLine(srx, 200, srx, 800);


	//stats
	if(nerdstat==1) {
	iSetColor(255, 255, 255);
	char val[40];
	sprintf(val, "value of s : %d", shuru_korte_bolchi_toke);
	iText(60, 850+20, val);
	char shoot_count_val[40];
	sprintf(shoot_count_val, "Shooted : %d  times", shoot_count);
	iText(60, 850+40, shoot_count_val);
	char val_x[40];
	int xe = (int)x;
	sprintf(val_x, "current x : %d", xe-xe%30);
	iText(60, 850+60, val_x);
	char val_y[40];
	int ye = (int)y;
	sprintf(val_y, "current y : %d", ye-ye%30);
	iText(60, 850+80, val_y);
	char val_ux[40];
	int uxe = (int)ux;
	sprintf(val_ux, "current ux : %d", uxe-uxe%5);
	iText(60, 850+100, val_ux);
	char val_uy[40];
	int uye = (int)uy;
	uye = uye - 2*g*t;
	sprintf(val_uy, "current uy : %d", uye-uye%5);
	iText(60, 850+120, val_uy);
	char jumpval[40];
	sprintf(jumpval, "jumpflag : %d", jumpflag);
	iText(60, 850+140, jumpval); 
	char pogo[40];
	sprintf(pogo, "pogo : ", pogo);
	iText(60, 850+160, pogo); 
	
	
	}

	if(bsc==0) {
	iSetColor(178, 28, 32);
	char start_game_text[50];
	sprintf(start_game_text, "Press any key to start game");
	iText(cp1-80, cp2+150, start_game_text, GLUT_BITMAP_TIMES_ROMAN_24); }

	

	//graph
	/*iLine(srx+5, 200, srx+5, 1080);
	iLine(srx+10, 200, srx+10, 1080);
	iLine(srx+20, 200, srx+20, 1080);
	iLine(srx+30, 200, srx+30, 1080);
	iLine(srx+40, 200, srx+40, 1080);
	iLine(srx+50, 200, srx+50, 1080);
	iLine(srx+25, 200, srx+25, 1080);
	iLine(srx+45, 200, srx+45, 1080);
	iLine(srx+35, 200, srx+35, 1080);
	iLine(srx+15, 200, srx+15, 1080);
	iLine(srx, sry+5, 300, sry+5);
	iLine(srx, sry+15, 300, sry+15);
	iLine(srx, sry+25, 300, sry+25);
	iLine(srx, sry+35, 300, sry+35);
	iLine(srx, sry+45, 300, sry+45);
	iLine(srx, sry+10, 300, sry+10);
	iLine(srx, sry+20, 300, sry+20);
	iLine(srx, sry+30, 300, sry+30);
	iLine(srx, sry+40, 300, sry+40);
	iLine(srx, sry+50, 300, sry+50);*/


	//U are my special
	iSetColor(20, 200, 0);
	iText(960, 540, "U are my special!", GLUT_BITMAP_8_BY_13);

	//strip
	if(sling_line_perm==1) 
	{
		iLine(birdIniPosX-7, birdIniPosy, x, y);
		iLine(birdIniPosX+7, birdIniPosy, x, y); 
	}


	//projectile path
	if(projectile_line_perm==1) 
	{
		setSlingCurveValues();
		y_pro = grh + 1;
		t_pro = 0;
		while(y_pro>grh) {
		x_pro = birdIniPosX + u_pro*cos(th_pro)*t_pro;
		y_pro = birdIniPosy + u_pro*sin(th_pro)*t_pro-g*t_pro*t_pro;
		iPoint(x_pro, y_pro, 1);
		t_pro += 0.02; }
	}



}

void begkoma(double uxc, double uyc);

void lpnichborof_col(int n)
{
	if(colper[n][2]==0)
	{
	if(x+lp[0][0]+r > nc[n]+25 && y+lp[0][1] < nd[n]+55+q[n][2] && y+lp[0][1] > nd[n]+q[n][2] && x+lp[0][0]+r < nc[n]+25+50)
	{
		q[n][2]=2000;
		colper[n][2]=1;
		pointo++;

		begkoma(0.7, 0.7);

		while( 
			(  (nd[n]+150+q[n][2])*(!colper[n][2]) > nd[n] )*(!colper[n][2])
			||
			colper[n][3]*  //////////////////////////////////////////
			(  ( (nd[n]+165+q[n][4])*(!colper[n][4]) > nd[n] )     //

			|| ( (nd[n]+165+q[n][5])*(!colper[n][5]) > nd[n] )     //

			|| colper[n][4]*colper[n][5]* ( /////////////////////  //
			   ( (nd[n]+335+q[n][6])*(!colper[n][6]) > nd[n] ) //  //
															   //  //
			|| colper[n][6]* (								   //  //
			     (nd[n]+365+q[n][7])*(!colper[n][7]) > nd[n] ) )   )   ) 
		{
			for(int i=3; i<8; i++) { if(colper[n][i]==0) { q[n][i] -= 5; } }
		}
	}
	else if(x+lp[0][0] > nc[n]+25 && x+lp[0][0] < nc[n]+25+85 && y+lp[0][1]-r < nd[n]+q[n][2]+55 && y+lp[0][1] > nd[n]+q[n][2]+55)
	{
		q[n][2]=2000;
		colper[n][2]=1;
		pointo++;

		begkoma(0.7, 0.7);

		while( 
			(  (nd[n]+150+q[n][2])*(!colper[n][2]) > nd[n] )*(!colper[n][2])
			||
			colper[n][3]*  //////////////////////////////////////////
			(  ( (nd[n]+165+q[n][4])*(!colper[n][4]) > nd[n] )     //

			|| ( (nd[n]+165+q[n][5])*(!colper[n][5]) > nd[n] )     //

			|| colper[n][4]*colper[n][5]* ( /////////////////////  //
			   ( (nd[n]+335+q[n][6])*(!colper[n][6]) > nd[n] ) //  //
															   //  //
			|| colper[n][6]* (								   //  //
			     (nd[n]+365+q[n][7])*(!colper[n][7]) > nd[n] ) )   )   ) 
		{
			for(int i=3; i<8; i++) { if(colper[n][i]==0) { q[n][i] -= 5; } }
		}

	}
	}

}

void lpupcap_col(int n)
{
	if(colper[n][6]==0)
	{
	if(x+lp[0][0]+r > nc[n]+30 && y+lp[0][1] < nd[n]+335+30+q[n][6] && y+lp[0][1] > nd[n]+335+q[n][6] && x+lp[0][0]+r < nc[n]+30+25)
	{
		q[n][6]=2000;
		colper[n][6]=1;
		pointo++;

		begkoma(0.75, 0.75);
		
		while( (nd[n]+365+q[n][7])*(!colper[n][7]) > nd[n]+(165+q[n][3])*(!colper[n][3])+55*(colper[n][3])*(!colper[n][2]) ) 
		{
			for(int i=7; i<8; i++) { if(colper[n][i]==0) { q[n][i] -= 5; } }
		}

			//pore likhbo
			// araari col theke ante hobe most prolly+lp[0][1] conditions gula
			// uporer borof niche pore jabe, jotodur pora shomvob
	}
	else if(x+lp[0][0] > nc[n]+30 && x+lp[0][0] < nc[n]+30+75 && y+lp[0][1]-r < nd[n]+335+q[n][6]+30 && y+lp[0][1] > nd[n]+335+q[n][6]+30)
	{
		
		q[n][6]=2000;
		colper[n][6]=1;
		pointo++;

		begkoma(0.75, 0.75);
		
		while( (nd[n]+365+q[n][7])*(!colper[n][7]) > nd[n]+(165+q[n][3])*(!colper[n][3])+55*(colper[n][3])*(!colper[n][2]) ) 
		{
			for(int i=7; i<8; i++) { if(colper[n][i]==0) { q[n][i] -= 5; } }
		}

			//pore likhbo
			// araari col theke ante hobe most prolly+lp[0][1] conditions gula
			// uporer borof niche pore jabe, jotodur pora shomvob

	}
	}
}

void lpupborof_col(int n)
{
	if(colper[n][7]==0)
	{
	if(x+lp[0][0]+r > nc[n]+45 && y+lp[0][1] < nd[n]+365+45+q[n][7] && y+lp[0][1] > nd[n]+365+q[n][7] && x+lp[0][0]+r < nc[n]+45+50)
	{
		q[n][7]=2000;
		colper[n][7]=1;
		pointo++;
		begkoma(0.75, 0.75);
	}
	else if(x+lp[0][0] > nc[n]+45 && x+lp[0][0] < nc[n]+45+45 && y+lp[0][1]-r < nd[n]+365+q[n][7]+45 && y+lp[0][1] > nd[n]+365+q[n][7]+45)
	{
		q[n][7]=2000;
		colper[n][7]=1;
		pointo++;
		begkoma(0.75, 0.75);
	}
	}
}

void lpupda_col(int n)
{
	if(colper[n][5]==0)
	{
	if(x+lp[0][0]+r > nc[n]+90 && y+lp[0][1] < nd[n]+165+170+q[n][5] && y+lp[0][1] > nd[n]+165+q[n][5] && x+lp[0][0]+r < nc[n]+90+25)
	{
		q[n][5] = 2000;
		colper[n][5]=1;
		pointo++;

		begkoma(0.8, 0.8);

		if(q[n][4]==2000)
		{

			while( ((nd[n]+335+q[n][6])*(!colper[n][6]) > (nd[n]+165+q[n][3])*(!colper[n][3]) + (colper[n][3])*( nd[n]+55*(!colper[n][2]) ) )
			  ||	colper[n][6]*
				   ((nd[n]+365+q[n][7])*(!colper[n][7]) > (nd[n]+165+q[n][3])*(!colper[n][3]) + (colper[n][3])*( nd[n]+55*(!colper[n][2]) ) ) ) 
			{
				for(int i=6; i<8; i++) { if(colper[n][i]==0) { q[n][i] -= 5; } }
			}
		}
	}
	}

}

void lpupba_col(int n)
{
	if(colper[n][4]==0)
	{
	if(x+lp[0][0]+r > nc[n]+30 && y+lp[0][1] < nd[n]+165+170+q[n][4] && y+lp[0][1] > nd[n]+165+q[n][4] && x+lp[0][0]+r < nc[n]+30+25)
	{
		q[n][4] = 2000;
		colper[n][4]=1;
		pointo++;

		begkoma(0.8, 0.8);

		if(q[n][5]==2000)
		{
			while( ((nd[n]+335+q[n][6])*(!colper[n][6]) > (nd[n]+165+q[n][3])*(!colper[n][3]) + (colper[n][3])*( nd[n]+55*(!colper[n][2]) ) )
			  ||	colper[n][6]*
				   ((nd[n]+365+q[n][7])*(!colper[n][7]) > (nd[n]+165+q[n][3])*(!colper[n][3]) + (colper[n][3])*( nd[n]+55*(!colper[n][2]) ) ) ) 
			{
				for(int i=6; i<8; i++) { if(colper[n][i]==0) { q[n][i] -= 5; } }
			}
		}
	}
	}

}

void lpnichda_col(int n)
{
	if(colper[n][1]==0)
	{
	if(x+lp[0][0]+r > nc[n]+120 && y+lp[0][1] < nd[n]+150+q[n][1] && y+lp[0][1] > nd[n]+q[n][1] && x+lp[0][0]+r < nc[n]+120+25)
	{
		q[n][1] = 2000;
		colper[n][1]=1;
		pointo++;

		begkoma(0.8, 0.8);

		if(q[n][0]==2000)
		{
			if(colper[n][3]==0)
			{
			while(nd[n]+150+q[n][3]>nd[n]+55*(!colper[n][2])) 
			{
				for(int i=3; i<8; i++) { if(colper[n][i]==0) { q[n][i] -= 5; } }
			}
			}
		}
	}
	}
}

void lpnichba_col(int n)
{
	if(colper[n][0]==0)
	{
	if(x+lp[0][0]+r > nc[n] && y+lp[0][1] < nd[n]+150+q[n][0] && y+lp[0][1] > nd[n]+q[n][0] && x+lp[0][0]+r < nc[n]+25)
	{
		q[n][0] = 2000;
		colper[n][0]=1;
		pointo++;

		begkoma(0.8, 0.8);

		if(q[n][1]==2000)
		{
			if(colper[n][3]==0)
			{
			while(nd[n]+150+q[n][3]>nd[n]+55*(!colper[n][2])) 
			{
				for(int i=3; i<8; i++) { if(colper[n][i]==0) { q[n][i] -= 5; } }
			}
			}
		}
	}
	}
}

void lparaari_col(int n)
{
	if(colper[n][3]==0) 
	{
	if(x+lp[0][0]+r >= nc[n]-15 && y+lp[0][1] <= nd[n]+150+15+q[n][3] && y+lp[0][1] >= nd[n]+150+q[n][3] && x+lp[0][0]+r < nc[n]-15+50) 
	{
		colper[n][3]=1;
		q[n][3]=2000;
		pointo++;

		begkoma(0.8, 0.8);

		while( ( (nd[n]+165+q[n][4])*(!colper[n][4]) > nd[n]+55*(!colper[n][2]) )

			|| ( (nd[n]+165+q[n][5])*(!colper[n][5]) > nd[n]+55*(!colper[n][2]) )

			|| colper[n][4]*colper[n][5]* ( //////////////////////////////////////////
			   ( (nd[n]+335+q[n][6])*(!colper[n][6]) > nd[n]+55*(!colper[n][2]) )   //
																					//
			|| colper[n][6]* (														//
			   ( (nd[n]+365+q[n][7])*(!colper[n][7]) > nd[n]+55*(!colper[n][2]) ) ) ) ) 
		{
			for(int i=4; i<8; i++) { if(colper[n][i]==0) { q[n][i] -= 5; } }
		}
	}
	else if(x+lp[0][0] > nc[n]-15 && x+lp[0][0] < nc[n]-15+165 && y+lp[0][1]-r < nd[n]+q[n][3]+150 && y+lp[0][1] > nd[n]+q[n][3]+150)
	{
		colper[n][3]=1;
		q[n][3]=2000;
		pointo++;

		begkoma(0.8, 0.8);

		while( ( (nd[n]+165+q[n][4])*(!colper[n][4]) > nd[n]+55*(!colper[n][2]) )

			|| ( (nd[n]+165+q[n][5])*(!colper[n][5]) > nd[n]+55*(!colper[n][2]) )

			|| colper[n][4]*colper[n][5]* ( //////////////////////////////////////////
			   ( (nd[n]+335+q[n][6])*(!colper[n][6]) > nd[n]+55*(!colper[n][2]) )   //
																					//
			|| colper[n][6]* (														//
			   ( (nd[n]+365+q[n][7])*(!colper[n][7]) > nd[n]+55*(!colper[n][2]) ) ) ) ) 
		{
			for(int i=4; i<8; i++) { if(colper[n][i]==0) { q[n][i] -= 5; } }
		}
	}
	}
}

void plnichborof_col(int n)
{
	if(colper[n][2]==0)
	{
	if(x+lp[1][0]+r > nc[n]+25 && y+lp[1][1] < nd[n]+55+q[n][2] && y+lp[1][1] > nd[n]+q[n][2] && x+lp[1][0]+r < nc[n]+25+50)
	{
		q[n][2]=2000;
		colper[n][2]=1;
		pointo++;

		begkoma(0.7, 0.7);

		while( 
			(  (nd[n]+150+q[n][2])*(!colper[n][2]) > nd[n] )*(!colper[n][2])
			||
			colper[n][3]*  //////////////////////////////////////////
			(  ( (nd[n]+165+q[n][4])*(!colper[n][4]) > nd[n] )     //

			|| ( (nd[n]+165+q[n][5])*(!colper[n][5]) > nd[n] )     //

			|| colper[n][4]*colper[n][5]* ( /////////////////////  //
			   ( (nd[n]+335+q[n][6])*(!colper[n][6]) > nd[n] ) //  //
															   //  //
			|| colper[n][6]* (								   //  //
			     (nd[n]+365+q[n][7])*(!colper[n][7]) > nd[n] ) )   )   ) 
		{
			for(int i=3; i<8; i++) { if(colper[n][i]==0) { q[n][i] -= 5; } }
		}
	}
	else if(x+lp[1][0] > nc[n]+25 && x+lp[1][0] < nc[n]+25+85 && y+lp[1][1]-r < nd[n]+q[n][2]+55 && y+lp[1][1] > nd[n]+q[n][2]+55)
	{
		q[n][2]=2000;
		colper[n][2]=1;
		pointo++;

		begkoma(0.7, 0.7);

		while( 
			(  (nd[n]+150+q[n][2])*(!colper[n][2]) > nd[n] )*(!colper[n][2])
			||
			colper[n][3]*  //////////////////////////////////////////
			(  ( (nd[n]+165+q[n][4])*(!colper[n][4]) > nd[n] )     //

			|| ( (nd[n]+165+q[n][5])*(!colper[n][5]) > nd[n] )     //

			|| colper[n][4]*colper[n][5]* ( /////////////////////  //
			   ( (nd[n]+335+q[n][6])*(!colper[n][6]) > nd[n] ) //  //
															   //  //
			|| colper[n][6]* (								   //  //
			     (nd[n]+365+q[n][7])*(!colper[n][7]) > nd[n] ) )   )   ) 
		{
			for(int i=3; i<8; i++) { if(colper[n][i]==0) { q[n][i] -= 5; } }
		}

	}
	}

}

void plupcap_col(int n)
{
	if(colper[n][6]==0)
	{
	if(x+lp[1][0]+r > nc[n]+30 && y+lp[1][1] < nd[n]+335+30+q[n][6] && y+lp[1][1] > nd[n]+335+q[n][6] && x+lp[1][0]+r < nc[n]+30+25)
	{
		q[n][6]=2000;
		colper[n][6]=1;
		pointo++;

		begkoma(0.75, 0.75);
		
		while( (nd[n]+365+q[n][7])*(!colper[n][7]) > nd[n]+(165+q[n][3])*(!colper[n][3])+55*(colper[n][3])*(!colper[n][2]) ) 
		{
			for(int i=7; i<8; i++) { if(colper[n][i]==0) { q[n][i] -= 5; } }
		}

			//pore likhbo
			// araari col theke ante hobe most prolly+lp[1][1] conditions gula
			// uporer borof niche pore jabe, jotodur pora shomvob
	}
	else if(x+lp[1][0] > nc[n]+30 && x+lp[1][0] < nc[n]+30+75 && y+lp[1][1]-r < nd[n]+335+q[n][6]+30 && y+lp[1][1] > nd[n]+335+q[n][6]+30)
	{
		
		q[n][6]=2000;
		colper[n][6]=1;
		pointo++;

		begkoma(0.75, 0.75);
		
		while( (nd[n]+365+q[n][7])*(!colper[n][7]) > nd[n]+(165+q[n][3])*(!colper[n][3])+55*(colper[n][3])*(!colper[n][2]) ) 
		{
			for(int i=7; i<8; i++) { if(colper[n][i]==0) { q[n][i] -= 5; } }
		}

			//pore likhbo
			// araari col theke ante hobe most prolly+lp[1][1] conditions gula
			// uporer borof niche pore jabe, jotodur pora shomvob

	}
	}
}

void plupborof_col(int n)
{
	if(colper[n][7]==0)
	{
	if(x+lp[1][0]+r > nc[n]+45 && y+lp[1][1] < nd[n]+365+45+q[n][7] && y+lp[1][1] > nd[n]+365+q[n][7] && x+lp[1][0]+r < nc[n]+45+50)
	{
		q[n][7]=2000;
		colper[n][7]=1;
		pointo++;
		begkoma(0.75, 0.75);
	}
	else if(x+lp[1][0] > nc[n]+45 && x+lp[1][0] < nc[n]+45+45 && y+lp[1][1]-r < nd[n]+365+q[n][7]+45 && y+lp[1][1] > nd[n]+365+q[n][7]+45)
	{
		q[n][7]=2000;
		colper[n][7]=1;
		pointo++;
		begkoma(0.75, 0.75);
	}
	}
}

void plupda_col(int n)
{
	if(colper[n][5]==0)
	{
	if(x+lp[1][0]+r > nc[n]+90 && y+lp[1][1] < nd[n]+165+170+q[n][5] && y+lp[1][1] > nd[n]+165+q[n][5] && x+lp[1][0]+r < nc[n]+90+25)
	{
		q[n][5] = 2000;
		colper[n][5]=1;
		pointo++;

		begkoma(0.8, 0.8);

		if(q[n][4]==2000)
		{

			while( ((nd[n]+335+q[n][6])*(!colper[n][6]) > (nd[n]+165+q[n][3])*(!colper[n][3]) + (colper[n][3])*( nd[n]+55*(!colper[n][2]) ) )
			  ||	colper[n][6]*
				   ((nd[n]+365+q[n][7])*(!colper[n][7]) > (nd[n]+165+q[n][3])*(!colper[n][3]) + (colper[n][3])*( nd[n]+55*(!colper[n][2]) ) ) ) 
			{
				for(int i=6; i<8; i++) { if(colper[n][i]==0) { q[n][i] -= 5; } }
			}
		}
	}
	}

}

void plupba_col(int n)
{
	if(colper[n][4]==0)
	{
	if(x+lp[1][0]+r > nc[n]+30 && y+lp[1][1] < nd[n]+165+170+q[n][4] && y+lp[1][1] > nd[n]+165+q[n][4] && x+lp[1][0]+r < nc[n]+30+25)
	{
		q[n][4] = 2000;
		colper[n][4]=1;
		pointo++;

		begkoma(0.8, 0.8);

		if(q[n][5]==2000)
		{
			while( ((nd[n]+335+q[n][6])*(!colper[n][6]) > (nd[n]+165+q[n][3])*(!colper[n][3]) + (colper[n][3])*( nd[n]+55*(!colper[n][2]) ) )
			  ||	colper[n][6]*
				   ((nd[n]+365+q[n][7])*(!colper[n][7]) > (nd[n]+165+q[n][3])*(!colper[n][3]) + (colper[n][3])*( nd[n]+55*(!colper[n][2]) ) ) ) 
			{
				for(int i=6; i<8; i++) { if(colper[n][i]==0) { q[n][i] -= 5; } }
			}
		}
	}
	}

}

void plnichda_col(int n)
{
	if(colper[n][1]==0)
	{
	if(x+lp[1][0]+r > nc[n]+120 && y+lp[1][1] < nd[n]+150+q[n][1] && y+lp[1][1] > nd[n]+q[n][1] && x+lp[1][0]+r < nc[n]+120+25)
	{
		q[n][1] = 2000;
		colper[n][1]=1;
		pointo++;

		begkoma(0.8, 0.8);

		if(q[n][0]==2000)
		{
			if(colper[n][3]==0)
			{
			while(nd[n]+150+q[n][3]>nd[n]+55*(!colper[n][2])) 
			{
				for(int i=3; i<8; i++) { if(colper[n][i]==0) { q[n][i] -= 5; } }
			}
			}
		}
	}
	}
}

void plnichba_col(int n)
{
	if(colper[n][0]==0)
	{
	if(x+lp[1][0]+r > nc[n] && y+lp[1][1] < nd[n]+150+q[n][0] && y+lp[1][1] > nd[n]+q[n][0] && x+lp[1][0]+r < nc[n]+25)
	{
		q[n][0] = 2000;
		colper[n][0]=1;
		pointo++;

		begkoma(0.8, 0.8);

		if(q[n][1]==2000)
		{
			if(colper[n][3]==0)
			{
			while(nd[n]+150+q[n][3]>nd[n]+55*(!colper[n][2])) 
			{
				for(int i=3; i<8; i++) { if(colper[n][i]==0) { q[n][i] -= 5; } }
			}
			}
		}
	}
	}
}

void plaraari_col(int n)
{
	if(colper[n][3]==0) 
	{
	if(x+lp[1][0]+r >= nc[n]-15 && y+lp[1][1] <= nd[n]+150+15+q[n][3] && y+lp[1][1] >= nd[n]+150+q[n][3] && x+lp[1][0]+r < nc[n]-15+50) 
	{
		colper[n][3]=1;
		q[n][3]=2000;
		pointo++;

		begkoma(0.8, 0.8);

		while( ( (nd[n]+165+q[n][4])*(!colper[n][4]) > nd[n]+55*(!colper[n][2]) )

			|| ( (nd[n]+165+q[n][5])*(!colper[n][5]) > nd[n]+55*(!colper[n][2]) )

			|| colper[n][4]*colper[n][5]* ( //////////////////////////////////////////
			   ( (nd[n]+335+q[n][6])*(!colper[n][6]) > nd[n]+55*(!colper[n][2]) )   //
																					//
			|| colper[n][6]* (														//
			   ( (nd[n]+365+q[n][7])*(!colper[n][7]) > nd[n]+55*(!colper[n][2]) ) ) ) ) 
		{
			for(int i=4; i<8; i++) { if(colper[n][i]==0) { q[n][i] -= 5; } }
		}
	}
	else if(x+lp[1][0] > nc[n]-15 && x+lp[1][0] < nc[n]-15+165 && y+lp[1][1]-r < nd[n]+q[n][3]+150 && y+lp[1][1] > nd[n]+q[n][3]+150)
	{
		colper[n][3]=1;
		q[n][3]=2000;
		pointo++;

		begkoma(0.8, 0.8);

		while( ( (nd[n]+165+q[n][4])*(!colper[n][4]) > nd[n]+55*(!colper[n][2]) )

			|| ( (nd[n]+165+q[n][5])*(!colper[n][5]) > nd[n]+55*(!colper[n][2]) )

			|| colper[n][4]*colper[n][5]* ( //////////////////////////////////////////
			   ( (nd[n]+335+q[n][6])*(!colper[n][6]) > nd[n]+55*(!colper[n][2]) )   //
																					//
			|| colper[n][6]* (														//
			   ( (nd[n]+365+q[n][7])*(!colper[n][7]) > nd[n]+55*(!colper[n][2]) ) ) ) ) 
		{
			for(int i=4; i<8; i++) { if(colper[n][i]==0) { q[n][i] -= 5; } }
		}
	}
	}
}






// double araplx[3]={nc[0]-15, nc[1]-15, nc[2]-15}; //araari plank
// double araply[3]={nd[0]+150, nd[1]+150, nd[2]+150};
void nichborof_col(int n);
void araari_col(int n);
void nichba_col(int n);
void nichda_col(int n);
void upda_col(int n);
void upba_col(int n);
void upcap_col(int n);
void upborof_col(int n);
void begkoma(double uxc, double uyc);
void pig_arr(void);
void pig_col(double kx, double ky, int n);
void permobs(void);
void collision(void)
{
	//shobgulo obs er jonne extra constant add kora hoyeche q double array diye
	// and bivinno ghotonar shomoye oi value ta change kora hocche
	// jehetu temon kono shoja dhakkar ghotona rakha hobe na so its safe ig
	int nn;
	for(nn = 0; nn<3; nn++)
	{
		nichborof_col(nn);
		araari_col(nn);
		nichba_col(nn);
		nichda_col(nn);
		upba_col(nn);
		upda_col(nn);
		upcap_col(nn);
		upborof_col(nn);
	}

	for(int gh=0; gh<7; gh++) {
	pig_col(ne[gh][0], ne[gh][1], gh); }
	permobs();

	if(lpk[0]==1)
	{
		int nn;
		for(nn = 0; nn<3; nn++)
		{
			lpnichborof_col(nn);
			lparaari_col(nn);
			lpnichba_col(nn);
			lpnichda_col(nn);
			lpupba_col(nn);
			lpupda_col(nn);
			lpupcap_col(nn);
			lpupborof_col(nn);
		}

		for(int gh=0; gh<7; gh++) {
		pig_col(ne[gh][0]+lp[0][0], ne[gh][1]+lp[0][1], gh); }
	}

	if(lpk[1]==1)
	{
		int nn;
		for(nn = 0; nn<3; nn++)
		{
			plnichborof_col(nn);
			plaraari_col(nn);
			plnichba_col(nn);
			plnichda_col(nn);
			plupba_col(nn);
			plupda_col(nn);
			plupcap_col(nn);
			plupborof_col(nn);
		}

		for(int gh=0; gh<7; gh++) {
		pig_col(ne[gh][0]+lp[1][0], ne[gh][1]+lp[1][1], gh); }
	}

	
}

void pig_col(double kx, double ky, int n)
{
	if( (kx-x)*(kx-x) + (y-ky)*(y-ky) <= r*r )
	{
		pigper[n] = 1;
		pogo = pogo + 1;
		//ne[n][1] = 2000 ;
		begkoma(0.8, 0.8);
		pointo+=5;
		if(pointo>=35) sc = 102;
	}
}


void pig_arr(void)
{
	ne[0][0] = nc[0]+62, ne[0][1] = 2000*pigper[0] + nd[0]+365+45+q[0][7]+r;
	ne[1][0] = nc[0]+62, ne[1][1] = 2000*pigper[1] + nd[0]+55+q[0][2]+r;
	ne[2][0] = nc[1]+7, ne[2][1] = 2000*pigper[2] + nd[1]+165+q[1][3]+r;
	ne[3][0] = nc[1]+127, ne[3][1] = 2000*pigper[3] + nd[1]+165+q[1][3]+r;
	ne[4][0] = nc[1]+150, ne[4][1] = 2000*pigper[4] + nd[1]+r;
	ne[5][0] = nc[2]+62, ne[5][1] = 2000*pigper[5] + nd[2]+165+q[2][3]+r;
	ne[6][0] = nc[2]+62, ne[6][1] = 2000*pigper[6] + nd[0]+365+45+q[2][7]+r;
	// ne[0][0] = nc[0]+62, ne[0][1] = nd[0]+365+45+q[0][7]+r;
	// ne[1][0] = nc[0]+62, ne[1][1] = nd[0]+55+q[0][2]+r;
	// ne[2][0] = nc[1]+7, ne[2][1] = nd[1]+165+q[1][3]+r;
	// ne[3][0] = nc[1]+127, ne[3][1] = nd[1]+165+q[1][3]+r;
	// ne[4][0] = nc[1]+150, ne[4][1] = nd[1]+r;
	// ne[5][0] = nc[2]+62, ne[5][1] = nd[2]+165+q[2][3]+r;
	// ne[6][0] = nc[2]+62, ne[6][1] = nd[0]+365+45+q[2][7]+r;
}

void permobs(void)
{	double dosoq = (x-1380)*(x-1380) + (y-200-30)*(y-200-30);
	if(x+r >= 1380 && dosoq <= r*r)
	{
		x-=3;
		begkoma(-1, 1);
	}
}

void begkoma(double uxc, double uyc)
{
	uy = uy - 2*g*t;
	birdMovePosx = x, birdMovePosy = y;
	t = 0, ux *= uxc, uy *= uyc;
}

void nichborof_col(int n)
{
	if(colper[n][2]==0)
	{
	if(x+r > nc[n]+25 && y < nd[n]+55+q[n][2] && y > nd[n]+q[n][2] && x+r < nc[n]+25+50)
	{
		q[n][2]=2000;
		colper[n][2]=1;
		pointo++;

		begkoma(0.7, 0.7);

		while( 
			(  (nd[n]+150+q[n][2])*(!colper[n][2]) > nd[n] )*(!colper[n][2])
			||
			colper[n][3]*  //////////////////////////////////////////
			(  ( (nd[n]+165+q[n][4])*(!colper[n][4]) > nd[n] )     //

			|| ( (nd[n]+165+q[n][5])*(!colper[n][5]) > nd[n] )     //

			|| colper[n][4]*colper[n][5]* ( /////////////////////  //
			   ( (nd[n]+335+q[n][6])*(!colper[n][6]) > nd[n] ) //  //
															   //  //
			|| colper[n][6]* (								   //  //
			     (nd[n]+365+q[n][7])*(!colper[n][7]) > nd[n] ) )   )   ) 
		{
			for(int i=3; i<8; i++) { if(colper[n][i]==0) { q[n][i] -= 5; } }
		}
	}
	else if(x > nc[n]+25 && x < nc[n]+25+85 && y-r < nd[n]+q[n][2]+55 && y > nd[n]+q[n][2]+55)
	{
		q[n][2]=2000;
		colper[n][2]=1;
		pointo++;

		begkoma(0.7, 0.7);

		while( 
			(  (nd[n]+150+q[n][2])*(!colper[n][2]) > nd[n] )*(!colper[n][2])
			||
			colper[n][3]*  //////////////////////////////////////////
			(  ( (nd[n]+165+q[n][4])*(!colper[n][4]) > nd[n] )     //

			|| ( (nd[n]+165+q[n][5])*(!colper[n][5]) > nd[n] )     //

			|| colper[n][4]*colper[n][5]* ( /////////////////////  //
			   ( (nd[n]+335+q[n][6])*(!colper[n][6]) > nd[n] ) //  //
															   //  //
			|| colper[n][6]* (								   //  //
			     (nd[n]+365+q[n][7])*(!colper[n][7]) > nd[n] ) )   )   ) 
		{
			for(int i=3; i<8; i++) { if(colper[n][i]==0) { q[n][i] -= 5; } }
		}

	}
	}

}

void upcap_col(int n)
{
	if(colper[n][6]==0)
	{
	if(x+r > nc[n]+30 && y < nd[n]+335+30+q[n][6] && y > nd[n]+335+q[n][6] && x+r < nc[n]+30+25)
	{
		q[n][6]=2000;
		colper[n][6]=1;
		pointo++;

		begkoma(0.75, 0.75);
		
		while( (nd[n]+365+q[n][7])*(!colper[n][7]) > nd[n]+(165+q[n][3])*(!colper[n][3])+55*(colper[n][3])*(!colper[n][2]) ) 
		{
			for(int i=7; i<8; i++) { if(colper[n][i]==0) { q[n][i] -= 5; } }
		}

			//pore likhbo
			// araari col theke ante hobe most prolly conditions gula
			// uporer borof niche pore jabe, jotodur pora shomvob
	}
	else if(x > nc[n]+30 && x < nc[n]+30+75 && y-r < nd[n]+335+q[n][6]+30 && y > nd[n]+335+q[n][6]+30)
	{
		
		q[n][6]=2000;
		colper[n][6]=1;
		pointo++;

		begkoma(0.75, 0.75);
		
		while( (nd[n]+365+q[n][7])*(!colper[n][7]) > nd[n]+(165+q[n][3])*(!colper[n][3])+55*(colper[n][3])*(!colper[n][2]) ) 
		{
			for(int i=7; i<8; i++) { if(colper[n][i]==0) { q[n][i] -= 5; } }
		}

			//pore likhbo
			// araari col theke ante hobe most prolly conditions gula
			// uporer borof niche pore jabe, jotodur pora shomvob

	}
	}
}

void upborof_col(int n)
{
	if(colper[n][7]==0)
	{
	if(x+r > nc[n]+45 && y < nd[n]+365+45+q[n][7] && y > nd[n]+365+q[n][7] && x+r < nc[n]+45+50)
	{
		q[n][7]=2000;
		colper[n][7]=1;
		pointo++;
		begkoma(0.75, 0.75);
	}
	else if(x > nc[n]+45 && x < nc[n]+45+45 && y-r < nd[n]+365+q[n][7]+45 && y > nd[n]+365+q[n][7]+45)
	{
		q[n][7]=2000;
		colper[n][7]=1;
		pointo++;
		begkoma(0.75, 0.75);
	}
	}
}

void upda_col(int n)
{
	if(colper[n][5]==0)
	{
	if(x+r > nc[n]+90 && y < nd[n]+165+170+q[n][5] && y > nd[n]+165+q[n][5] && x+r < nc[n]+90+25)
	{
		q[n][5] = 2000;
		colper[n][5]=1;
		pointo++;

		begkoma(0.8, 0.8);

		if(q[n][4]==2000)
		{

			while( ((nd[n]+335+q[n][6])*(!colper[n][6]) > (nd[n]+165+q[n][3])*(!colper[n][3]) + (colper[n][3])*( nd[n]+55*(!colper[n][2]) ) )
			  ||	colper[n][6]*
				   ((nd[n]+365+q[n][7])*(!colper[n][7]) > (nd[n]+165+q[n][3])*(!colper[n][3]) + (colper[n][3])*( nd[n]+55*(!colper[n][2]) ) ) ) 
			{
				for(int i=6; i<8; i++) { if(colper[n][i]==0) { q[n][i] -= 5; } }
			}
		}
	}
	}

}

void upba_col(int n)
{
	if(colper[n][4]==0)
	{
	if(x+r > nc[n]+30 && y < nd[n]+165+170+q[n][4] && y > nd[n]+165+q[n][4] && x+r < nc[n]+30+25)
	{
		q[n][4] = 2000;
		colper[n][4]=1;
		pointo++;

		begkoma(0.8, 0.8);

		if(q[n][5]==2000)
		{
			while( ((nd[n]+335+q[n][6])*(!colper[n][6]) > (nd[n]+165+q[n][3])*(!colper[n][3]) + (colper[n][3])*( nd[n]+55*(!colper[n][2]) ) )
			  ||	colper[n][6]*
				   ((nd[n]+365+q[n][7])*(!colper[n][7]) > (nd[n]+165+q[n][3])*(!colper[n][3]) + (colper[n][3])*( nd[n]+55*(!colper[n][2]) ) ) ) 
			{
				for(int i=6; i<8; i++) { if(colper[n][i]==0) { q[n][i] -= 5; } }
			}
		}
	}
	}

}

void nichda_col(int n)
{
	if(colper[n][1]==0)
	{
	if(x+r > nc[n]+120 && y < nd[n]+150+q[n][1] && y > nd[n]+q[n][1] && x+r < nc[n]+120+25)
	{
		q[n][1] = 2000;
		colper[n][1]=1;
		pointo++;

		begkoma(0.8, 0.8);

		if(q[n][0]==2000)
		{
			if(colper[n][3]==0)
			{
			while(nd[n]+150+q[n][3]>nd[n]+55*(!colper[n][2])) 
			{
				for(int i=3; i<8; i++) { if(colper[n][i]==0) { q[n][i] -= 5; } }
			}
			}
		}
	}
	}
}

void nichba_col(int n)
{
	if(colper[n][0]==0)
	{
	if(x+r > nc[n] && y < nd[n]+150+q[n][0] && y > nd[n]+q[n][0] && x+r < nc[n]+25)
	{
		q[n][0] = 2000;
		colper[n][0]=1;
		pointo++;

		begkoma(0.8, 0.8);

		if(q[n][1]==2000)
		{
			if(colper[n][3]==0)
			{
			while(nd[n]+150+q[n][3]>nd[n]+55*(!colper[n][2])) 
			{
				for(int i=3; i<8; i++) { if(colper[n][i]==0) { q[n][i] -= 5; } }
			}
			}
		}
	}
	}
}

void araari_col(int n)
{
	if(colper[n][3]==0) 
	{
	if(x+r >= nc[n]-15 && y <= nd[n]+150+15+q[n][3] && y >= nd[n]+150+q[n][3] && x+r < nc[n]-15+50) 
	{
		colper[n][3]=1;
		q[n][3]=2000;
		pointo++;

		begkoma(0.8, 0.8);

		while( ( (nd[n]+165+q[n][4])*(!colper[n][4]) > nd[n]+55*(!colper[n][2]) )

			|| ( (nd[n]+165+q[n][5])*(!colper[n][5]) > nd[n]+55*(!colper[n][2]) )

			|| colper[n][4]*colper[n][5]* ( //////////////////////////////////////////
			   ( (nd[n]+335+q[n][6])*(!colper[n][6]) > nd[n]+55*(!colper[n][2]) )   //
																					//
			|| colper[n][6]* (														//
			   ( (nd[n]+365+q[n][7])*(!colper[n][7]) > nd[n]+55*(!colper[n][2]) ) ) ) ) 
		{
			for(int i=4; i<8; i++) { if(colper[n][i]==0) { q[n][i] -= 5; } }
		}
	}
	else if(x > nc[n]-15 && x < nc[n]-15+165 && y-r < nd[n]+q[n][3]+150 && y > nd[n]+q[n][3]+150)
	{
		colper[n][3]=1;
		q[n][3]=2000;
		pointo++;

		begkoma(0.8, 0.8);

		while( ( (nd[n]+165+q[n][4])*(!colper[n][4]) > nd[n]+55*(!colper[n][2]) )

			|| ( (nd[n]+165+q[n][5])*(!colper[n][5]) > nd[n]+55*(!colper[n][2]) )

			|| colper[n][4]*colper[n][5]* ( //////////////////////////////////////////
			   ( (nd[n]+335+q[n][6])*(!colper[n][6]) > nd[n]+55*(!colper[n][2]) )   //
																					//
			|| colper[n][6]* (														//
			   ( (nd[n]+365+q[n][7])*(!colper[n][7]) > nd[n]+55*(!colper[n][2]) ) ) ) ) 
		{
			for(int i=4; i<8; i++) { if(colper[n][i]==0) { q[n][i] -= 5; } }
		}
	}
	}
}









void restore(void)
{

	iPauseTimer(t1);

	stable[1] = 1;
	x = xs1[1];
	y = ys1[1];
	t = 0;


	shootperm = 0,
	sling_line_perm = 0,
	projectile_line_perm = 0,
	hitbox_perm = 0,
	setu_proflag = 0,
	shuru_korte_bolchi_toke = 1,
	menu_open_ache_gadhar_baccha = 0,
	move_bird = 0,
	bsc = 0;
	for(int i=0; i<6; i++) stable[i] = 1;

	u=1500/1.713;
	th=3.14/4.1;
	birdMovePosx = birdIniPosX;
	birdMovePosy = birdIniPosy;
	jumpflag = 0;
	ang = th;

	dissq = 0;
	setu_proflag = 0;
	sling_line_perm = 0;
	th_pro = 0;
	dqs_pro = 0;
	r = 15;

	//changes were done
	
}









void bounce(void)
{
	printf("\n-----%lf-----\n\n", y);
	
	double uxc = ux > 0 ? 1 : -1;

	uy = uy - 2*g*t;
	u = sqrt(ux*ux+uy*uy);
	u *= 0.64;

	ux = uxc*u*cos(th);
	uy = u*sin(th);
	birdMovePosx = x;
	birdMovePosy = y;
	t = 0;
	jumpflag++;
	lpk[0]=0, lpk[1]=0;
	//iResumeTimer(t1);
}


void slingshoot(void)
{
	//printf("slingshoot e dhuukche");
	sling_line_perm = 0;
	projectile_line_perm = 0;
	shuru_korte_bolchi_toke = 0;
	shoot_count++;
	shootperm = 0;
	hitbox_perm = 0;
	move_bird = 1;
	jumpflag=0;
	iPauseTimer(t1);
	setSlingShootValues();
	iResumeTimer(t1);
	//printf("resumetimer %d", menu_open_ache_gadhar_baccha);
}

void setSlingShootValues(void)
{
	th = ang;
	double dqs = sqrt(dissq)>max_dis_fromsling ? max_dis_fromsling : sqrt(dissq);
	u = 17.13*dqs;
	ux = u * cos(th);
	uy = u * sin(th);
}

void setSlingCurveValues(void)
{
	th_pro = ang;
	dqs_pro = sqrt(dissq)>max_dis_fromsling? max_dis_fromsling : sqrt(dissq);
	u_pro = 17.13*dqs_pro;
	// if(jumpflag==0) u_pro = 17.13*dqs_pro;
	// else if(jumpflag > setu_proflag)
	// {
	// 	setu_proflag = jumpflag;
	// 	u_pro *= 0.64;
	// } 
}



void shoot(void)
{
	iPauseTimer(t1);
	u = 1500/1.713;
	double h = (ny-grh)/(nx-birdIniPosX);
	th = atan(h);
	uc = (ny-grh)/500;
	u = u*uc;
	iResumeTimer(t1);
	//changes were done
}

































////////////////////////////////////////////////////////////////////////////////////////////////////////////


////////////////////////////////////////////////////////////////////////////////////////////////////////////

