/*/*/
//#include "stdafx.h"			//Used for with Visual Studio
#include <iostream>			//Used for cout,cin,cin.get(), cin.ignore() instructions 
#include <iomanip>			//Used to format printing of text (setw,setprecision,fixed)
#include <cmath>			//Mathematical Library Functions
#include <ctime>			//For time functions		//For rand and srand functions
#include <string>			//For string functions (Comparing string)
#include <conio.h>
#include <windows.h>
/**/

using namespace std;
#define KU 72
#define KD 80
#define KL 75
#define KR 77
#define KE 27

int main(void){
/**/
SetConsoleDisplayMode(GetStdHandle(STD_OUTPUT_HANDLE),CONSOLE_FULLSCREEN_MODE,0);
/*/
	HWND console = GetConsoleWindow();
	RECT ConsoleRect;
	GetWindowRect(console, &ConsoleRect); 
 
   MoveWindow(console, ConsoleRect.left, ConsoleRect.top, 1300, 1100, TRUE);
/**/

	 HANDLE hConsole = GetStdHandle(STD_OUTPUT_HANDLE);
	int w=156;
	double H[157]; //might not work here, it was originally int, I beleive with the intent of it collapsing decimals into integer values
	double c01,c02,c03,c04,c05,c06;
	double c11,c12,c13,c14,c15,c16;
		double c22,c23,c24,c25,c26;
			double c33,c34,c35,c36;
				double c44,c45,c46;
					double c55,c56;
						double c66;
	/**
	c06=10;c16=10;c26=9 ;c36=9 ;c46=8 ;c56=8 ;c66=7 ;
	c05=12;c15=12;c25=11;c35=10;c45=9 ;c55=8 ;
	c04=15;c14=15;c24=13;c34=12;c44=11;
	c03=20;c13=19;c23=17;c33=14;
	c02=30;c12=27;c22=21;
	c01=60;c11=42;
	/*/
	c06=10;c16=10;c26=10;c36=10;c46=10;c56=10;c66=10;
	c05=12;c15=12;c25=12;c35=12;c45=12;c55=12;
	c04=15;c14=15;c24=15;c34=15;c44=15;
	c03=19;c13=19;c23=19;c33=19;
	c02=27;c12=27;c22=27;
	c01=42;c11=42;
	/**/
	int d0=15;
	char p=94,k;
	int i=0,a,r,b=1,x=1,y=1,z=y*42+x,U=1,D=1,L=1,R=1,c=1,v,h,T=39;
	const char M[1764]={88,87,88,88,88,88,88,88,88,88,88,88,88,88,88,88,88,88,88,88,88,88,88,88,88,88,88,88,88,88,88,88,88,88,88,88,88,88,88,88,88,88,
						88,32,88,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,88,
						88,32,88,32,88,88,32,88,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,88,
						88,32,32,32,32,88,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,88,
						88,32,88,88,32,88,88,88,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,88,
						88,32,88,32,32,32,32,88,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,88,
						88,32,88,88,88,88,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,88,
						88,32,32,32,32,32,32,88,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,88,
						88,88,32,88,88,32,88,88,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,88,
						88,32,32,88,32,32,88,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,88,
						88,32,88,88,88,88,88,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,88,
						88,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,88,
						88,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,88,
						88,32,32,32,32,32,32,32,32,32,88,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,88,
						88,32,90,90,90,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,88,
						88,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,88,
						88,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,88,
						88,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,88,
						88,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,88,
						88,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,88,
						88,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,88,
						88,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,88,
						88,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,88,
						88,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,88,
						88,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,88,
						88,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,88,
						88,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,88,
						88,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,88,
						88,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,88,
						88,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,88,
						88,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,88,
						88,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,88,
						88,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,88,
						88,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,88,
						88,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,88,
						88,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,88,
						88,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,88,
						88,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,88,
						88,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,88,
						88,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,88,
						88,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,88,32,88,
						88,88,88,88,88,88,88,88,88,88,88,88,88,88,88,88,88,88,88,88,88,88,88,88,88,88,88,88,88,88,88,88,88,88,88,88,88,88,88,88,89,88};

	int L66,L56,L46,L36,L26,L16,C06,R16,R26,R36,R46,R56,R66;
		int L55,L45,L35,L25,L15,C05,R15,R25,R35,R45,R55;
			int L44,L34,L24,L14,C04,R14,R24,R34,R44;
				int L33,L23,L13,C03,R13,R23,R33;
					int L22,L12,C02,R12,R22;
						int L11,C01,R11;
	do{
		while(c==1){
		for(int d=0;d<=w;d++){
		H[d]=0;
		}
			system("cls");
			U=1;
			D=1;
			L=1;
			R=1;
			z=y*42+x;
			/**
			cout<<"#"<<"#"     <<"#"     <<"#"     <<"#"     <<"#"     <<"#"     <<"#"     <<"#"     <<"#"     <<"#"     <<"#"     <<"#"     <<"#"     <<"#"<<endl;
			cout<<"#"<<M[z-258]<<M[z-257]<<M[z-256]<<M[z-255]<<M[z-254]<<M[z-253]<<M[z-252]<<M[z-251]<<M[z-250]<<M[z-249]<<M[z-248]<<M[z-247]<<M[z-246]<<"#"<<endl;
			cout<<"#"<<M[z-216]<<M[z-215]<<M[z-214]<<M[z-213]<<M[z-212]<<M[z-211]<<M[z-210]<<M[z-209]<<M[z-208]<<M[z-207]<<M[z-206]<<M[z-205]<<M[z-204]<<"#"<<endl;
			cout<<"#"<<M[z-174]<<M[z-173]<<M[z-172]<<M[z-171]<<M[z-170]<<M[z-169]<<M[z-168]<<M[z-167]<<M[z-166]<<M[z-165]<<M[z-164]<<M[z-163]<<M[z-162]<<"#"<<endl;
			cout<<"#"<<M[z-132]<<M[z-131]<<M[z-130]<<M[z-129]<<M[z-128]<<M[z-127]<<M[z-126]<<M[z-125]<<M[z-124]<<M[z-123]<<M[z-122]<<M[z-121]<<M[z-120]<<"#"<<endl;
			cout<<"#"<<M[z-90 ]<<M[z-89 ]<<M[z-88 ]<<M[z-87 ]<<M[z-86 ]<<M[z-85 ]<<M[z-84 ]<<M[z-83 ]<<M[z-82 ]<<M[z-81 ]<<M[z-80 ]<<M[z-79 ]<<M[z-78 ]<<"#"<<endl;
			cout<<"#"<<M[z-48 ]<<M[z-47 ]<<M[z-46 ]<<M[z-45 ]<<M[z-44 ]<<M[z-43 ]<<M[z-42 ]<<M[z-41 ]<<M[z-40 ]<<M[z-39 ]<<M[z-38 ]<<M[z-37 ]<<M[z-36 ]<<"#"<<endl;
			cout<<"#"<<M[z-6  ]<<M[z-5  ]<<M[z-4  ]<<M[z-3  ]<<M[z-2  ]<<M[z-1  ]<<p       <<M[z+1  ]<<M[z+2  ]<<M[z+3  ]<<M[z+4  ]<<M[z+5  ]<<M[z+6  ]<<"#"<<endl;
			cout<<"#"<<M[z+36 ]<<M[z+37 ]<<M[z+38 ]<<M[z+39 ]<<M[z+40 ]<<M[z+41 ]<<M[z+42 ]<<M[z+43 ]<<M[z+44 ]<<M[z+45 ]<<M[z+46 ]<<M[z+47 ]<<M[z+48 ]<<"#"<<endl;
			cout<<"#"<<M[z+78 ]<<M[z+79 ]<<M[z+80 ]<<M[z+81 ]<<M[z+82 ]<<M[z+83 ]<<M[z+84 ]<<M[z+85 ]<<M[z+86 ]<<M[z+87 ]<<M[z+88 ]<<M[z+89 ]<<M[z+90 ]<<"#"<<endl;
			cout<<"#"<<M[z+120]<<M[z+121]<<M[z+122]<<M[z+123]<<M[z+124]<<M[z+125]<<M[z+126]<<M[z+127]<<M[z+128]<<M[z+129]<<M[z+130]<<M[z+131]<<M[z+132]<<"#"<<endl;
			cout<<"#"<<M[z+162]<<M[z+163]<<M[z+164]<<M[z+165]<<M[z+166]<<M[z+167]<<M[z+168]<<M[z+169]<<M[z+170]<<M[z+171]<<M[z+172]<<M[z+173]<<M[z+174]<<"#"<<endl;
			cout<<"#"<<M[z+204]<<M[z+205]<<M[z+206]<<M[z+207]<<M[z+208]<<M[z+209]<<M[z+210]<<M[z+211]<<M[z+212]<<M[z+213]<<M[z+214]<<M[z+215]<<M[z+216]<<"#"<<endl;
			cout<<"#"<<M[z+246]<<M[z+247]<<M[z+248]<<M[z+249]<<M[z+250]<<M[z+251]<<M[z+252]<<M[z+253]<<M[z+254]<<M[z+255]<<M[z+256]<<M[z+257]<<M[z+258]<<"#"<<endl;
			cout<<"#"<<"#"     <<"#"     <<"#"     <<"#"     <<"#"     <<"#"     <<"#"     <<"#"     <<"#"     <<"#"     <<"#"     <<"#"     <<"#"     <<"#"<<endl;//*/d0=0;

		if(i==0&&M[z-42]==87){
			SetConsoleTextAttribute(hConsole, 240);
			for(v=0;v<9;v++){for(h=0;h<=156;h++){cout<<" ";}cout<<endl;}
			for(v=0;v<3;v++){for(h=0;h<=156;h++){cout<<" ";}cout<<endl;}
			cout<<"            XX   XX   XXXXX   XXXXXXX             XXX    XXXXXX   XXXXXX    XXXXX   XX   XX           XX  XXX  XXXXXXX  XX   XX   XXXXX                      "<<endl;
			cout<<"            XX   XX  XX   XX  XX                 XX XX   XX   XX  XX   XX  XX   XX  XX   XX           XX XXX   XX       XX   XX  XX   XX                     "<<endl;
			cout<<"            XX   XX  XX       XX                XX   XX  XX   XX  XX   XX  XX   XX  XX X XX           XXXXX    XX       XX   XX  XX                          "<<endl;
			cout<<"            XX   XX   XXXXX   XXXXX             XX   XX  XX  XXX  XX  XXX  XX   XX  XXXXXXX           XXXX     XXXXX     XXXXX    XXXXX                      "<<endl;
			cout<<"            XX   XX       XX  XX                XXXXXXX  XXXX     XXXX     XX   XX  XXXXXXX           XXXXX    XX         XX          XX                     "<<endl;
			cout<<"            XX   XX  XX   XX  XX                XX   XX  XX XXX   XX XXX   XX   XX  XXX XXX           XX XXX   XX         XX     XX   XX                     "<<endl;
			cout<<"             XXXXX    XXXXX   XXXXXXX           XX   XX  XX  XXX  XX  XXX   XXXXX   XX   XX           XX  XXX  XXXXXXX    XX      XXXXX                      "<<endl;
			for(v=0;v<2;v++){for(h=0;h<=156;h++){cout<<" ";}cout<<endl;}
			cout<<"            XXXXXXX   XXXXX            XX   XX   XXXXX   XX   XX  XXXXXXX            XXXXX   XXXXXX            XXXXXXX  XX   XX  XXXXXX   XX   XX            "<<endl;
			cout<<"              XX     XX   XX           XXX XXX  XX   XX  XX   XX  XX                XX   XX  XX   XX             XX     XX   XX  XX   XX  XXX  XX            "<<endl;
			cout<<"              XX     XX   XX           XXXXXXX  XX   XX  XX   XX  XX                XX   XX  XX   XX             XX     XX   XX  XX   XX  XXXX XX            "<<endl;
			cout<<"              XX     XX   XX           XXXXXXX  XX   XX  XXX XXX  XXXXX             XX   XX  XX  XXX             XX     XX   XX  XX  XXX  XXXXXXX            "<<endl;
			cout<<"              XX     XX   XX           XX X XX  XX   XX   XXXXX   XX                XX   XX  XXXX                XX     XX   XX  XXXX     XX XXXX            "<<endl;
			cout<<"              XX     XX   XX           XX   XX  XX   XX    XXX    XX                XX   XX  XX XXX              XX     XX   XX  XX XXX   XX  XXX            "<<endl;
			cout<<"              XX      XXXXX            XX   XX   XXXXX      X     XXXXXXX            XXXXX   XX  XXX             XX      XXXXX   XX  XXX  XX   XX            "<<endl;
			for(v=0;v<4;v++){for(h=0;h<=156;h++){cout<<" ";}cout<<endl;}
			cout<<"            XXXXXX     XXX      XXXX   XX  XXX           XX   XX  XXXXXX             XXXXX   XXXXXX            XXXXXXX  XX   XX  XXXXXX   XX   XX            "<<endl;
			cout<<"            XX   XX   XX XX    XX  XX  XX XXX            XX   XX  XX   XX           XX   XX  XX   XX             XX     XX   XX  XX   XX  XXX  XX            "<<endl;
			cout<<"            XX   XX  XX   XX  XX       XXXXX             XX   XX  XX   XX           XX   XX  XX   XX             XX     XX   XX  XX   XX  XXXX XX            "<<endl;
			cout<<"            XXXXXX   XX   XX  XX       XXXX              XX   XX  XX   XX           XX   XX  XX  XXX             XX     XX   XX  XX  XXX  XXXXXXX            "<<endl;
			cout<<"            XX   XX  XXXXXXX  XX       XXXXX             XX   XX  XXXXXX            XX   XX  XXXX                XX     XX   XX  XXXX     XX XXXX            "<<endl;
			cout<<"            XX   XX  XX   XX   XX  XX  XX XXX            XX   XX  XX                XX   XX  XX XXX              XX     XX   XX  XX XXX   XX  XXX            "<<endl;
			cout<<"            XXXXXX   XX   XX    XXXX   XX  XXX            XXXXX   XX                 XXXXX   XX  XXX             XX      XXXXX   XX  XXX  XX   XX            "<<endl;
			for(v=0;v<2;v++){for(h=0;h<=156;h++){cout<<" ";}cout<<endl;}
			cout<<"              XXX    XXXXXX    XXXXX   XX   XX  XX   XX  XXXXX             XXXXXXX   XXXXX            XXXXXX   XXXXXXX    XXXX   XXXXXXX  XX   XX            "<<endl;
			cout<<"             XX XX   XX   XX  XX   XX  XX   XX  XXX  XX  XX  XX              XX     XX   XX           XX   XX  XX        XX  XX    XX     XXX  XX            "<<endl;
			cout<<"            XX   XX  XX   XX  XX   XX  XX   XX  XXXX XX  XX   XX             XX     XX   XX           XX   XX  XX       XX         XX     XXXX XX            "<<endl;
			cout<<"            XX   XX  XX  XXX  XX   XX  XX   XX  XXXXXXX  XX   XX             XX     XX   XX           XXXXXX   XXXXX    XX  XXX    XX     XXXXXXX            "<<endl;
			cout<<"            XXXXXXX  XXXX     XX   XX  XX   XX  XX XXXX  XX   XX             XX     XX   XX           XX   XX  XX       XX   XX    XX     XX XXXX            "<<endl;
			cout<<"            XX   XX  XX XXX   XX   XX  XX   XX  XX  XXX  XX  XX              XX     XX   XX           XX   XX  XX        XX  XX    XX     XX  XXX            "<<endl;
			cout<<"            XX   XX  XX  XXX   XXXXX    XXXXX   XX   XX  XXXXX               XX      XXXXX            XXXXXX   XXXXXXX    XXXX   XXXXXXX  XX   XX            "<<endl;
			for(v=0;v<3;v++){for(h=0;h<=156;h++){cout<<" ";}cout<<endl;}
			for(v=0;v<9;v++){for(h=0;h<=156;h++){cout<<" ";}cout<<endl;}
			SetConsoleTextAttribute(hConsole,0);
		}else if (i==2&&M[z+42]==89){
			SetConsoleTextAttribute(hConsole, 240);
			for(v=0;v<9;v++){for(h=0;h<=156;h++){cout<<" ";}cout<<endl;}
			for(v=0;v<4;v++){for(h=0;h<=156;h++){cout<<" ";}cout<<endl;}
			cout<<"            XX   XX   XXXXX   XX   XX           XX   XX    XXX    XXXXX    XXXXXXX           XXXXXXX  XXXXXXX           XXXXXXX   XXXXX                      "<<endl;
			cout<<"            XX   XX  XX   XX  XX   XX           XXX XXX   XX XX   XX  XX   XX                  XX       XX                XX     XX   XX                     "<<endl;
			cout<<"            XX   XX  XX   XX  XX   XX           XXXXXXX  XX   XX  XX   XX  XX                  XX       XX                XX     XX   XX                     "<<endl;
			cout<<"             XXXXX   XX   XX  XX   XX           XXXXXXX  XX   XX  XX   XX  XXXXX               XX       XX                XX     XX   XX                     "<<endl;
			cout<<"              XX     XX   XX  XX   XX           XX X XX  XXXXXXX  XX   XX  XX                  XX       XX                XX     XX   XX                     "<<endl;
			cout<<"              XX     XX   XX  XX   XX           XX   XX  XX   XX  XX  XX   XX                  XX       XX                XX     XX   XX                     "<<endl;
			cout<<"              XX      XXXXX    XXXXX            XX   XX  XX   XX  XXXXX    XXXXXXX           XXXXXXX    XX                XX      XXXXX                      "<<endl;
			for(v=0;v<2;v++){for(h=0;h<=156;h++){cout<<" ";}cout<<endl;}
			cout<<"            XXXXXXX  XX   XX  XXXXXXX            XXXXX   XXXXXX   XXXXXX    XXXXX    XXXXX   XXXXXXX  XXXXXXX  XXXXXXX                                       "<<endl;
			cout<<"              XX     XX   XX  XX                XX   XX  XX   XX  XX   XX  XX   XX  XX   XX    XX       XX     XX                                            "<<endl;
			cout<<"              XX     XX   XX  XX                XX   XX  XX   XX  XX   XX  XX   XX  XX         XX       XX     XX                                            "<<endl;
			cout<<"              XX     XXXXXXX  XXXXX             XX   XX  XX   XX  XX   XX  XX   XX   XXXXX     XX       XX     XXXXX                                         "<<endl;
			cout<<"              XX     XX   XX  XX                XX   XX  XXXXXX   XXXXXX   XX   XX       XX    XX       XX     XX                                            "<<endl;
			cout<<"              XX     XX   XX  XX                XX   XX  XX       XX       XX   XX  XX   XX    XX       XX     XX                                            "<<endl;
			cout<<"              XX     XX   XX  XXXXXXX            XXXXX   XX       XX        XXXXX    XXXXX   XXXXXXX    XX     XXXXXXX                                       "<<endl;
			for(v=0;v<2;v++){for(h=0;h<=156;h++){cout<<" ";}cout<<endl;}
			cout<<"              XXXX    XXXXX   XXXXXX   XX   XX  XXXXXXX  XXXXXX             XXXXX   XXXXXXX           XXXXXXX  XX   XX  XXXXXXX                              "<<endl;
			cout<<"             XX  XX  XX   XX  XX   XX  XXX  XX  XX       XX   XX           XX   XX  XX                  XX     XX   XX  XX                                   "<<endl;
			cout<<"            XX       XX   XX  XX   XX  XXXX XX  XX       XX   XX           XX   XX  XX                  XX     XX   XX  XX                                   "<<endl;
			cout<<"            XX       XX   XX  XX  XXX  XXXXXXX  XXXXX    XX  XXX           XX   XX  XXXXX               XX     XXXXXXX  XXXXX                                "<<endl;
			cout<<"            XX       XX   XX  XXXX     XX XXXX  XX       XXXX              XX   XX  XX                  XX     XX   XX  XX                                   "<<endl;
			cout<<"             XX  XX  XX   XX  XX XXX   XX  XXX  XX       XX XXX            XX   XX  XX                  XX     XX   XX  XX                                   "<<endl;
			cout<<"              XXXX    XXXXX   XX  XXX  XX   XX  XXXXXXX  XX  XXX            XXXXX   XX                  XX     XX   XX  XXXXXXX                              "<<endl;
			for(v=0;v<2;v++){for(h=0;h<=156;h++){cout<<" ";}cout<<endl;}
			cout<<"            XX   XX    XXX    XXXXXXX  XXXXXXX                      XXXX    XXXXX    XXXXX   XXXXX                  XX   XXXXX   XXXXXX     XXX              "<<endl;
			cout<<"            XXX XXX   XX XX       XXX  XX                          XX  XX  XX   XX  XX   XX  XX  XX                 XX  XX   XX  XX   XX    XXX              "<<endl;
			cout<<"            XXXXXXX  XX   XX     XXX   XX                         XX       XX   XX  XX   XX  XX   XX                XX  XX   XX  XX   XX   XXX               "<<endl;
			cout<<"            XXXXXXX  XX   XX    XXX    XXXXX                      XX  XXX  XX   XX  XX   XX  XX   XX                XX  XX   XX  XXXXXX    XX                "<<endl;
			cout<<"            XX X XX  XXXXXXX   XXX     XX                         XX   XX  XX   XX  XX   XX  XX   XX                XX  XX   XX  XX   XX   X                 "<<endl;
			cout<<"            XX   XX  XX   XX  XXX      XX                          XX  XX  XX   XX  XX   XX  XX  XX            XX   XX  XX   XX  XX   XX                     "<<endl;
			cout<<"            XX   XX  XX   XX  XXXXXXX  XXXXXXX                      XXXX    XXXXX    XXXXX   XXXXX              XXXXX    XXXXX   XXXXXX   X                  "<<endl;
			for(v=0;v<4;v++){for(h=0;h<=156;h++){cout<<" ";}cout<<endl;}
			for(v=0;v<9;v++){for(h=0;h<=156;h++){cout<<" ";}cout<<endl;}
			SetConsoleTextAttribute(hConsole,0);
		}else{
			if(i==0){
				k=78;
	    L66=z-258,L56=z-257,L46=z-256,L36=z-255,L26=z-254,L16=z-253,C06=z-252,R16=z-251,R26=z-250,R36=z-249,R46=z-248,R56=z-247,R66=z-246;
			      L55=z-215,L45=z-214,L35=z-213,L25=z-212,L15=z-211,C05=z-210,R15=z-209,R25=z-208,R35=z-207,R45=z-206,R55=z-205;
						    L44=z-172,L34=z-171,L24=z-170,L14=z-169,C04=z-168,R14=z-167,R24=z-166,R34=z-165,R44=z-164;
								      L33=z-129,L23=z-128,L13=z-127,C03=z-126,R13=z-125,R23=z-124,R33=z-123;
											    L22=z-86 ,L12=z-85 ,C02=z-84 ,R12=z-83 ,R22=z-82 ;
													      L11=z-43 ,C01=z-42 ,R11=z-41 ;
			}else if(i==1){
				k=69;
	    L66=z-246,L56=z-204,L46=z-162,L36=z-120,L26=z-78 ,L16=z-36 ,C06=z+6  ,R16=z+48 ,R26=z+90 ,R36=z+132,R46=z+174,R56=z+216,R66=z+258;
			      L55=z-205,L45=z-163,L35=z-121,L25=z-79 ,L15=z-37 ,C05=z+5  ,R15=z+47 ,R25=z+89 ,R35=z+131,R45=z+173,R55=z+215;
						    L44=z-164,L34=z-122,L24=z-80 ,L14=z-38 ,C04=z+4  ,R14=z+46 ,R24=z+88 ,R34=z+130,R44=z+172;
								      L33=z-123,L23=z-81 ,L13=z-39 ,C03=z+3  ,R13=z+45 ,R23=z+87 ,R33=z+129;
											    L22=z-82 ,L12=z-40 ,C02=z+2  ,R12=z+44 ,R22=z+86 ;
													      L11=z-41 ,C01=z+1  ,R11=z+43 ;
			}else if(i==2){
				k=83;
	    L66=z+258,L56=z+257,L46=z+256,L36=z+255,L26=z+254,L16=z+253,C06=z+252,R16=z+251,R26=z+250,R36=z+249,R46=z+248,R56=z+247,R66=z+246;
			      L55=z+215,L45=z+214,L35=z+213,L25=z+212,L15=z+211,C05=z+210,R15=z+209,R25=z+208,R35=z+207,R45=z+206,R55=z+205;
						    L44=z+172,L34=z+171,L24=z+170,L14=z+169,C04=z+168,R14=z+167,R24=z+166,R34=z+165,R44=z+164;
								      L33=z+129,L23=z+128,L13=z+127,C03=z+126,R13=z+125,R23=z+124,R33=z+123;
											    L22=z+86 ,L12=z+85 ,C02=z+84 ,R12=z+83 ,R22=z+82 ;
													      L11=z+43 ,C01=z+42 ,R11=z+41 ;
			}else if(i==3){
				k=87;
	    L66=z+246,L56=z+204,L46=z+162,L36=z+120,L26=z+78 ,L16=z+36 ,C06=z-6  ,R16=z-48 ,R26=z-90 ,R36=z-132,R46=z-174,R56=z-216,R66=z-258;
			      L55=z+205,L45=z+163,L35=z+121,L25=z+79 ,L15=z+37 ,C05=z-5  ,R15=z-47 ,R25=z-89 ,R35=z-131,R45=z-173,R55=z-215;
						    L44=z+164,L34=z+122,L24=z+80 ,L14=z+38 ,C04=z-4  ,R14=z-46 ,R24=z-88 ,R34=z-130,R44=z-172;
								      L33=z+123,L23=z+81 ,L13=z+39 ,C03=z-3  ,R13=z-45 ,R23=z-87 ,R33=z-129;
											    L22=z+82 ,L12=z+40 ,C02=z-2  ,R12=z-44 ,R22=z-86 ;
													      L11=z+41 ,C01=z-1  ,R11=z-43 ;
			}

				if (M[L11]!=32&&M[C01]!=32){
				for(int d=1;d<=77;d++){H[d]=(c11+(((c01-c11)/((79-1)-1))*(d)));}
				}else{
					if (M[L11]!=32&&M[L12]!=32){
					for(int d=1;d<=31;d++){H[d]=(c11+(((c12-c11)/((33-1)-1))*(d)));}
					}else{
						if (M[L22]!=32&&M[L12]!=32){
						for(int d=1;d<=31;d++){H[d]=(c22+(((c12-c22)/((33-1)-1))*(d)));}
						}else{
							if (M[L22]!=32&&M[L23]!=32){
							for(int d=1;d<=19;d++){H[d]=(c22+(((c23-c22)/((21-1)-1))*(d)));}
							}else{
								if (M[L33]!=32&&M[L23]!=32){
								for(int d=1;d<=19;d++){H[d]=(c33+(((c23-c33)/((21-1)-1))*(d)));}
								}else{
									if (M[L33]!=32&&M[L34]!=32){
									for(int d=1;d<=13;d++){H[d]=(c33+(((c34-c33)/((15-1)-1))*(d)));}
									}else{
										if (M[L44]!=32&&M[L34]!=32){
										for(int d=1;d<=13;d++){H[d]=(c44+(((c34-c44)/((15-1)-1))*(d)));}
										}else{
											if (M[L44]!=32&&M[L45]!=32){
											for(int d=1;d<=10;d++){H[d]=(c44+(((c45-c44)/((12-1)-1))*(d)));}
											}else{
												if (M[L55]!=32&&M[L45]!=32){
												for(int d=1;d<=10;d++){H[d]=(c55+(((c45-c55)/((12-1)-1))*(d)));}
												}else{
													if (M[L55]!=32&&M[L56]!=32){
													for(int d=1;d<=8;d++){H[d]=(c55+(((c56-c55)/((10-1)-1))*(d)));}
													}else{
														if (M[L66]!=32&&M[L56]!=32){
														for(int d=1;d<=8;d++){H[d]=(c66+(((c56-c66)/((10-1)-1))*(d)));}
														}else{
															
														}
													}
												}
											}
										}
									}
								}
							}
							if (M[L23]!=32&&M[L24]!=32){
							for(int d=21;d<=31;d++){H[d]=(c23+(((c24-c23)/((33-21)-1))*(d-20)));}
							}else{
								if (M[L35]!=32&&M[L36]!=32){
								for(int d=25;d<=31;d++){H[d]=(c35+(((c36-c35)/((33-25)-1))*(d-24)));}
								}else{

								}
							}
						}
					}
					if (M[L12]!=32&&M[C02]!=32){
					for(int d=33;d<=77;d++){H[d]=(c12+(((c02-c12)/((79-33)-1))*(d-32)));}
					}else{
						if (M[L12]!=32&&M[L13]!=32){
						for(int d=33;d<=45;d++){H[d]=(c12+(((c13-c12)/((47-33)-1))*(d-32)));}
						}else{
							if (M[L24]!=32&&M[L25]!=32){
							for(int d=33;d<=39;d++){H[d]=(c24+(((c25-c24)/((41-33)-1))*(d-32)));}
							}else{
								
							}
							if (M[L25]!=32&&M[L26]!=32){
							for(int d=41;d<=45;d++){H[d]=(c25+(((c26-c25)/((47-41)-1))*(d-40)));}
							}else{

							}
						}
						if (M[L13]!=32&&M[C03]!=32){
						for(int d=47;d<=77;d++){H[d]=(c13+(((c03-c13)/((79-47)-1))*(d-46)));}
						}else{
							if (M[L13]!=32&&M[L14]!=32){
							for(int d=47;d<=53;d++){H[d]=(c13+(((c14-c13)/((55-47)-1))*(d-46)));}
							}else{
								
							}
							if (M[L14]!=32&&M[C04]!=32){
							for(int d=55;d<=77;d++){H[d]=(c14+(((c04-c14)/((79-55)-1))*(d-54)));}
							}else{
								if (M[L14]!=32&&M[L15]!=32){
								for(int d=55;d<=58;d++){H[d]=(c14+(((c15-c14)/((60-55)-1))*(d-54)));}
								}else{
									
								}
								if (M[L15]!=32&&M[C05]!=32){
								for(int d=60;d<=77;d++){H[d]=(c15+(((c05-c15)/((79-60)-1))*(d-59)));}
								}else{
									if (M[L15]!=32&&M[L16]!=32){
									for(int d=60;d<=61;d++){H[d]=(c15+(((c16-c15)/((63-60)-1))*(d-59)));}
									}else{
										
									}
									if (M[L16]!=32&&M[C06]!=32){
									for(int d=63;d<=77;d++){H[d]=(c16+(((c06-c16)/((79-63)-1))*(d-62)));}
									}else{
										
									}
								}
							}
						}
					}
				}
				if (M[C01]!=32&&M[R11]!=32){
				for(int d=79;d<=155;d++){H[d]=(c01+(((c11-c01)/((157-79)-1))*(d-78)));}
				}else{
					if (M[C02]!=32&&M[R12]!=32){
					for(int d=79;d<=123;d++){H[d]=(c02+(((c12-c02)/((125-79)-1))*(d-78)));}
					}else{
						if (M[C03]!=32&&M[R13]!=32){
						for(int d=79;d<=109;d++){H[d]=(c03+(((c13-c03)/((111-79)-1))*(d-78)));}
						}else{
							if (M[C04]!=32&&M[R14]!=32){
							for(int d=79;d<=101;d++){H[d]=(c04+(((c14-c04)/((103-79)-1))*(d-78)));}
							}else{
								if (M[C05]!=32&&M[R15]!=32){
								for(int d=79;d<=96;d++){H[d]=(c05+(((c15-c05)/((98-79)-1))*(d-78)));}
								}else{
									if (M[C06]!=32&&M[R16]!=32){
									for(int d=79;d<=93;d++){H[d]=(c06+(((c16-c06)/((95-79)-1))*(d-78)));}
									}else{
										
									}
									if (M[R16]!=32&&M[R15]!=32){
									for(int d=95;d<=96;d++){H[d]=(c16+(((c15-c16)/((98-95)-1))*(d-94)));}
									}else{
										
									}
								}
								if (M[R15]!=32&&M[R14]!=32){
								for(int d=98;d<=101;d++){H[d]=(c15+(((c14-c15)/((103-98)-1))*(d-97)));}
								}else{
									
								}
							}
							if (M[R14]!=32&&M[R13]!=32){
							for(int d=103;d<=109;d++){H[d]=(c14+(((c13-c14)/((111-103)-1))*(d-102)));}
							}else{
								
							}
						}
						if (M[R13]!=32&&M[R12]!=32){
						for(int d=111;d<=123;d++){H[d]=(c13+(((c12-c13)/((125-111)-1))*(d-110)));}
						}else{
							if (M[R26]!=32&&M[R25]!=32){
							for(int d=111;d<=115;d++){H[d]=(c26+(((c25-c26)/((117-111)-1))*(d-110)));}
							}else{

							}
							if (M[R25]!=32&&M[R24]!=32){
							for(int d=117;d<=124;d++){H[d]=(c25+(((c24-c25)/((125-117)-1))*(d-116)));}
							}else{
								if (M[R36]!=32&&M[R35]!=32){
								for(int d=125;d<=131;d++){H[d]=(c36+(((c35-c36)/((133-125)-1))*(d-124)));}
								}else{

								}
							}
						}
					}
					if (M[R12]!=32&&M[R11]!=32){
					for(int d=125;d<=155;d++){H[d]=(c12+(((c11-c12)/((157-125)-1))*(d-124)));}
					}else{
						if (M[R12]!=32&&M[R22]!=32){
						for(int d=125;d<=155;d++){H[d]=(c12+(((c22-c12)/((157-125)-1))*(d-124)));}
						}else{
							if (M[R23]!=32&&M[R22]!=32){
							for(int d=137;d<=155;d++){H[d]=(c23+(((c22-c23)/((157-137)-1))*(d-136)));}
							}else{
								if (M[R23]!=32&&M[R33]!=32){
								for(int d=137;d<=155;d++){H[d]=(c23+(((c33-c23)/((157-137)-1))*(d-136)));}
								}else{
									if (M[R34]!=32&&M[R33]!=32){
									for(int d=143;d<=155;d++){H[d]=(c34+(((c33-c34)/((157-143)-1))*(d-142)));}
									}else{
										if (M[R34]!=32&&M[R44]!=32){
										for(int d=143;d<=155;d++){H[d]=(c34+(((c44-c34)/((157-143)-1))*(d-142)));}
										}else{
											if (M[R45]!=32&&M[R44]!=32){
											for(int d=146;d<=155;d++){H[d]=(c45+(((c44-c45)/((157-146)-1))*(d-145)));}
											}else{
												if (M[R45]!=32&&M[R55]!=32){
												for(int d=146;d<=155;d++){H[d]=(c45+(((c55-c45)/((157-146)-1))*(d-145)));}
												}else{
													if (M[R56]!=32&&M[R55]!=32){
													for(int d=148;d<=155;d++){H[d]=(c56+(((c55-c56)/((157-148)-1))*(d-147)));}
													}else{
														if (M[R56]!=32&&M[R66]!=32){
														for(int d=148;d<=155;d++){H[d]=(c56+(((c66-c56)/((157-148)-1))*(d-147)));}
														}else{
															
														}
													}
												}
											}
										}
									}
								}
							}
							if (M[R24]!=32&&M[R23]!=32){
							for(int d=125;d<=135;d++){H[d]=(c24+(((c23-c24)/((137-125)-1))*(d-124)));}
							}else{

							}
						}
					}
				}
					if (M[C01]!=32){H[78]=max(H[78],c01);}
				else if(M[C02]!=32){H[78]=max(H[78],c02);}
				else if(M[C03]!=32){H[78]=max(H[78],c03);}
				else if(M[C04]!=32){H[78]=max(H[78],c04);}
				else if(M[C05]!=32){H[78]=max(H[78],c05);}
				else if(M[C06]!=32){H[78]=max(H[78],c06);}
					if (M[L11]!=32){H[0]=max(H[0],c11);}
				else if(M[L22]!=32){H[0]=max(H[0],c22);}
				else if(M[L33]!=32){H[0]=max(H[0],c33);}
				else if(M[L44]!=32){H[0]=max(H[0],c44);}
				else if(M[L55]!=32){H[0]=max(H[0],c55);}
				else if(M[L66]!=32){H[0]=max(H[0],c66);}
					if (M[R11]!=32){H[156]=max(H[156],c11);}
				else if(M[R22]!=32){H[156]=max(H[156],c22);}
				else if(M[R33]!=32){H[156]=max(H[156],c33);}
				else if(M[R44]!=32){H[156]=max(H[156],c44);}
				else if(M[R55]!=32){H[156]=max(H[156],c55);}
				else if(M[R66]!=32){H[156]=max(H[156],c66);}
					if (M[L12]!=32){H[32]=max(H[32],c12);}
				else if(M[L24]!=32){H[32]=max(H[32],c24);}
				else if(M[L36]!=32){H[32]=max(H[32],c36);}
					if (M[R12]!=32){H[124]=max(H[124],c12);}
				else if(M[R24]!=32){H[124]=max(H[124],c24);}
				else if(M[R36]!=32){H[124]=max(H[124],c36);}
					if (M[L13]!=32){H[46]=max(H[46],c13);}
				else if(M[L26]!=32){H[46]=max(H[46],c26);}
					if (M[R13]!=32){H[110]=max(H[110],c13);}
				else if(M[R26]!=32){H[110]=max(H[110],c26);}
					if (M[L23]!=32){H[20]=max(H[20],c23);}
				else if(M[L46]!=32){H[20]=max(H[20],c46);}
					if (M[R23]!=32){H[136]=max(H[136],c23);}
				else if(M[R46]!=32){H[136]=max(H[136],c46);}
					if (M[L14]!=32){H[54]=max(H[54],c14);}
					if (M[R14]!=32){H[102]=max(H[102],c14);}
					if (M[L15]!=32){H[59]=max(H[59],c15);}
					if (M[R15]!=32){H[97]=max(H[97],c15);}
					if (M[L16]!=32){H[62]=max(H[62],c16);}
					if (M[R16]!=32){H[94]=max(H[94],c16);}
					if (M[L25]!=32){H[40]=max(H[40],c25);}
					if (M[R25]!=32){H[116]=max(H[116],c25);}
					if (M[L34]!=32){H[14]=max(H[14],c34);}
					if (M[R34]!=32){H[142]=max(H[142],c34);}
					if (M[L35]!=32){H[24]=max(H[24],c35);}
					if (M[R35]!=32){H[132]=max(H[132],c35);}
					if (M[L45]!=32){H[11]=max(H[11],c45);}
					if (M[R45]!=32){H[145]=max(H[145],c45);}
					if (M[L56]!=32){H[9]=max(H[9],c56);}
					if (M[R56]!=32){H[147]=max(H[147],c56);}

					if (M[L23]!=32&&M[L13]!=32){
					for(int d=21;d<=45;d++){H[d]=max(H[d],(c23+(((c13-c23)/((47-21)-1))*(d-20))));}
					}else{
						if (M[L35]!=32&&M[L25]!=32){
						for(int d=25;d<=39;d++){H[d]=max(H[d],(c35+(((c25-c35)/((41-25)-1))*(d-24))));}
						}else{

						}if (M[L36]!=32&&M[L26]!=32){
						for(int d=33;d<=45;d++){H[d]=max(H[d],(c36+(((c26-c36)/((47-33)-1))*(d-32))));}
						}else{

						}if (M[L46]!=32&&M[L36]!=32){
						for(int d=21;d<=31;d++){H[d]=max(H[d],(c46+(((c36-c46)/((33-21)-1))*(d-20))));}
						}else{

						}
					}if (M[L24]!=32&&M[L14]!=32){
					for(int d=33;d<=53;d++){H[d]=max(H[d],(c24+(((c14-c24)/((55-33)-1))*(d-32))));}
					}else{

					}if (M[L25]!=32&&M[L15]!=32){
					for(int d=41;d<=58;d++){H[d]=max(H[d],(c25+(((c15-c25)/((60-41)-1))*(d-40))));}
					}else{

					}if (M[L26]!=32&&M[L16]!=32){
					for(int d=47;d<=61;d++){H[d]=max(H[d],(c26+(((c16-c26)/((63-47)-1))*(d-46))));}
					}else{

					}if (M[L34]!=32&&M[L24]!=32){
					for(int d=15;d<=31;d++){H[d]=max(H[d],(c34+(((c24-c34)/((33-15)-1))*(d-14))));}
					}else{
						if (M[L34]!=32&&M[L35]!=32){
						for(int d=15;d<=23;d++){H[d]=max(H[d],(c34+(((c35-c34)/((25-15)-1))*(d-14))));}
						}else{

						}
					}if (M[L45]!=32&&M[L35]!=32){
					for(int d=12;d<=23;d++){H[d]=max(H[d],(c45+(((c35-c45)/((25-12)-1))*(d-11))));}
					}else{
						if (M[L45]!=32&&M[L46]!=32){
						for(int d=12;d<=19;d++){H[d]=max(H[d],(c45+(((c46-c45)/((21-12)-1))*(d-11))));}
						}else{

						}
					}if (M[L56]!=32&&M[L46]!=32){
					for(int d=10;d<=19;d++){H[d]=max(H[d],(c56+(((c46-c56)/((21-10)-1))*(d-9))));}
					}else{

					}
					if (M[R13]!=32&&M[R23]!=32){
					for(int d=111;d<=135;d++){H[d]=max(H[d],(c13+(((c23-c13)/((137-111)-1))*(d-110))));}
					}else{
						if (M[R25]!=32&&M[R35]!=32){
						for(int d=117;d<=131;d++){H[d]=max(H[d],(c25+(((c35-c25)/((133-117)-1))*(d-116))));}
						}else{

						}if (M[R26]!=32&&M[R36]!=32){
						for(int d=111;d<=123;d++){H[d]=max(H[d],(c26+(((c36-c26)/((125-111)-1))*(d-110))));}
						}else{

						}if (M[R36]!=32&&M[R46]!=32){
						for(int d=125;d<=135;d++){H[d]=max(H[d],(c36+(((c46-c36)/((137-125)-1))*(d-124))));}
						}else{

						}
					}if (M[R14]!=32&&M[R24]!=32){
					for(int d=103;d<=123;d++){H[d]=max(H[d],(c14+(((c24-c14)/((125-103)-1))*(d-102))));}
					}else{

					}if (M[R15]!=32&&M[R25]!=32){
					for(int d=98;d<=115;d++){H[d]=max(H[d],(c15+(((c25-c15)/((117-98)-1))*(d-97))));}
					}else{

					}if (M[R16]!=32&&M[R26]!=32){
					for(int d=95;d<=109;d++){H[d]=max(H[d],(c16+(((c26-c16)/((111-95)-1))*(d-94))));}
					}else{

					}if (M[R24]!=32&&M[R34]!=32){
					for(int d=125;d<=141;d++){H[d]=max(H[d],(c24+(((c34-c24)/((143-125)-1))*(d-124))));}
					}else{
						if (M[R35]!=32&&M[R34]!=32){
						for(int d=133;d<=141;d++){H[d]=max(H[d],(c35+(((c34-c35)/((143-133)-1))*(d-132))));}
						}else{

						}
					}if (M[R35]!=32&&M[R45]!=32){
					for(int d=133;d<=144;d++){H[d]=max(H[d],(c35+(((c45-c35)/((146-133)-1))*(d-132))));}
					}else{
						if (M[R46]!=32&&M[R45]!=32){
						for(int d=137;d<=144;d++){H[d]=max(H[d],(c46+(((c45-c46)/((146-137)-1))*(d-136))));}
						}else{

						}
					}if (M[R46]!=32&&M[R56]!=32){
					for(int d=137;d<=146;d++){H[d]=max(H[d],(c46+(((c56-c46)/((148-137)-1))*(d-136))));}
					}else{

					}

			/*
			if (M[z-86]!=32&&M[z-85]!=32){
			for(int d=1;d<=31;d++){H[d]=(c22+(((c12-c22)/((33-1)-1))*(d)));}
			}else{

			}

			H[]=max((abs(H[]-H[])/2)+min(H[],H[]),H[]);
			H[ ]=;H[ ]=;
			if(M[z]!=32&&M[z]!=32){}

			SetConsoleTextAttribute(hConsole, 135);for(t=0;t<=T;t++){cout<<k;}SetConsoleTextAttribute(hConsole,15);
			*/
			for(v=60-d0;v>30;v--){
				for(h=0;h<=156;h++){
					if((((60-H[h])/2)+H[h]>=v)){
						if(H[h]>=38){SetConsoleTextAttribute(hConsole, 255);}
						else if(H[h]>=36){SetConsoleTextAttribute(hConsole, 247);}
						else if(H[h]>=34){SetConsoleTextAttribute(hConsole, 248);}
						else if(H[h]>=32){SetConsoleTextAttribute(hConsole, 240);}
						else if(H[h]>=30){SetConsoleTextAttribute(hConsole, 127);}
						else if(H[h]>=28){SetConsoleTextAttribute(hConsole, 119);}
						else if(H[h]>=26){SetConsoleTextAttribute(hConsole, 120);}
						else if(H[h]>=24){SetConsoleTextAttribute(hConsole, 112);}
						else if(H[h]>=22){SetConsoleTextAttribute(hConsole, 143);}
						else if(H[h]>=20){SetConsoleTextAttribute(hConsole, 135);}
						else if(H[h]>=18){SetConsoleTextAttribute(hConsole, 136);}
						else if(H[h]>=16){SetConsoleTextAttribute(hConsole, 128);}
						else if(H[h]>=14){SetConsoleTextAttribute(hConsole, 15);}
						else if(H[h]>=12){SetConsoleTextAttribute(hConsole, 7);}
						else if(H[h]>=10){SetConsoleTextAttribute(hConsole, 8);}
						else if(H[h]>=8){SetConsoleTextAttribute(hConsole, 0);}
						else{}
						cout<<"#";
					}else{
						if(v>=50){SetConsoleTextAttribute(hConsole, 255);}
						else if(v>=49){SetConsoleTextAttribute(hConsole, 247);}
						else if(v>=48){SetConsoleTextAttribute(hConsole, 248);}
						else if(v>=47){SetConsoleTextAttribute(hConsole, 240);}
						else if(v>=46){SetConsoleTextAttribute(hConsole, 127);}
						else if(v>=45){SetConsoleTextAttribute(hConsole, 119);}
						else if(v>=44){SetConsoleTextAttribute(hConsole, 120);}
						else if(v>=43){SetConsoleTextAttribute(hConsole, 112);}
						else if(v>=42){SetConsoleTextAttribute(hConsole, 143);}
						else if(v>=41){SetConsoleTextAttribute(hConsole, 135);}
						else if(v>=40){SetConsoleTextAttribute(hConsole, 136);}
						else if(v>=39){SetConsoleTextAttribute(hConsole, 128);}
						else if(v>=38){SetConsoleTextAttribute(hConsole, 15);}
						else if(v>=37){SetConsoleTextAttribute(hConsole, 7);}
						else if(v>=36){SetConsoleTextAttribute(hConsole, 8);}
						else if(v>=35){SetConsoleTextAttribute(hConsole, 0);}
						else{}
						cout<<"=";
					}SetConsoleTextAttribute(hConsole,0);
				}
				cout<<endl;
			}for(v=31;v<61;v++){
				for(h=0;h<=156;h++){
					if((((60-H[h])/2)+H[h]>=v)){
						if(H[h]>=38){SetConsoleTextAttribute(hConsole, 255);}
						else if(H[h]>=36){SetConsoleTextAttribute(hConsole, 247);}
						else if(H[h]>=34){SetConsoleTextAttribute(hConsole, 248);}
						else if(H[h]>=32){SetConsoleTextAttribute(hConsole, 240);}
						else if(H[h]>=30){SetConsoleTextAttribute(hConsole, 127);}
						else if(H[h]>=28){SetConsoleTextAttribute(hConsole, 119);}
						else if(H[h]>=26){SetConsoleTextAttribute(hConsole, 120);}
						else if(H[h]>=24){SetConsoleTextAttribute(hConsole, 112);}
						else if(H[h]>=22){SetConsoleTextAttribute(hConsole, 143);}
						else if(H[h]>=20){SetConsoleTextAttribute(hConsole, 135);}
						else if(H[h]>=18){SetConsoleTextAttribute(hConsole, 136);}
						else if(H[h]>=16){SetConsoleTextAttribute(hConsole, 128);}
						else if(H[h]>=14){SetConsoleTextAttribute(hConsole, 15);}
						else if(H[h]>=12){SetConsoleTextAttribute(hConsole, 7);}
						else if(H[h]>=10){SetConsoleTextAttribute(hConsole, 8);}
						else if(H[h]>=8){SetConsoleTextAttribute(hConsole, 0);}
						else{}
						cout<<"#";
					}else{
						if(v>=50){SetConsoleTextAttribute(hConsole, 255);}
						else if(v>=49){SetConsoleTextAttribute(hConsole, 247);}
						else if(v>=48){SetConsoleTextAttribute(hConsole, 248);}
						else if(v>=47){SetConsoleTextAttribute(hConsole, 240);}
						else if(v>=46){SetConsoleTextAttribute(hConsole, 127);}
						else if(v>=45){SetConsoleTextAttribute(hConsole, 119);}
						else if(v>=44){SetConsoleTextAttribute(hConsole, 120);}
						else if(v>=43){SetConsoleTextAttribute(hConsole, 112);}
						else if(v>=42){SetConsoleTextAttribute(hConsole, 143);}
						else if(v>=41){SetConsoleTextAttribute(hConsole, 135);}
						else if(v>=40){SetConsoleTextAttribute(hConsole, 136);}
						else if(v>=39){SetConsoleTextAttribute(hConsole, 128);}
						else if(v>=38){SetConsoleTextAttribute(hConsole, 15);}
						else if(v>=37){SetConsoleTextAttribute(hConsole, 7);}
						else if(v>=36){SetConsoleTextAttribute(hConsole, 8);}
						else if(v>=35){SetConsoleTextAttribute(hConsole, 0);}
						else{}
						cout<<"=";
					}SetConsoleTextAttribute(hConsole,0);
				}
				cout<<endl;
			}
			}
			if(M[z+1]!=32){
				R=0;
			}if(M[z-1]!=32){
				L=0;
			}if(M[z+42]!=32){
				D=0;
			}if(M[z-42]!=32){
				U=0;
			}
			while(c==1){
							r=_getch();
			if(r==KU&&U==1&&i==0){
				y--;
				break;
			}else if(r==KU&&D==1&&i==2){
				y++;
				break;
			}else if(r==KU&&L==1&&i==3){
				x--;
				break;
			}else if(r==KU&&R==1&&i==1){
				x++;
				break;
			}else if(r==KD&&D==1&&i==0){
				y++;
				break;
			}else if(r==KD&&U==1&&i==2){
				y--;
				break;
			}else if(r==KD&&R==1&&i==3){
				x++;
				break;
			}else if(r==KD&&L==1&&i==1){
				x--;
				break;
			}else if(r==KE){
				c=0;
			}if(r==KL){
				i--;
				if(i==-1){i=3;}
				break;
			}if(r==KR){
				i++;
				if(i==4){i=0;}
				break;
			}
			if(i==0){
					p=94;
				}else if(i==1){
					p=62;
				}else if(i==2){
					p=118;
				}else if(i==3){
					p=60;
				}
			}

		}
		return 0;
	cout<<"again?"<<endl;
	cin>>a;
	system("cls");
	}while(a==1);
	cin.get();
	
}
