#include<iostream>
#include<conio.h>
#include<stdio.h>

void tablero();
void fA(int, int, int);  void fI(int, int, int);
void fB(int, int, int);  void fJ(int, int, int);
void fC(int, int, int);  void fK(int, int, int);
void fD(int, int, int);  void fL(int, int, int);
void fE(int, int, int);  void fM(int, int, int);
void fF(int, int, int);  void fN(int, int, int);
void fG(int, int, int);  void fO(int, int, int);
void fH(int, int, int);  void fP(int, int, int);
int inicio();
int main()
{ int i=0, t1, t2, t3, t4, r1, r2, r3, r4, A=0, B=0, C=0, D=0, E=0, F=0, G=0, H=0;

//t1,t2,t3,t4 es cuando avansa; r1,r2,r3,r4 cuando comen

int ZA=0, ZB=1, ZC=0, ZD=1, ZE=0, ZF=1, ZG=0, ZH=1;
int cod, k=0, ka=0, kb=0, kc=0, kd=0, ke=0, kf=0, kg=0, kh=0;
int xa=7, ya=3, xb=16, yb=7, xc=7, yc=11, xd=16, yd=15, xe=7, ye=19, xf=16, yf=23, xg=7, yg=27, xh=16, yh=31;


char f, player1[10], player2[10];   

//posiciones de las casillas
int X[8]={7,16,26,36,46,56,66,75}, Y[8]={3,7,11,15,19,23,27,31};





//VARIABLES DEL OTRO JUGADOR****************************************************
int I=7, J=7, K=7, L=7, M=7, N=7, O=7, P=7, prin;
int ZI=-1, ZJ=0, ZK=-1, ZL=0, ZM=-1, ZN=0, ZO=-1, ZP=0;
int  ki=0, kj=0, kk=0, kl=0, km=0, kn=0, ko=0, kp=0;
int xi=66, yi=3, xj=75, yj=7, xk=66, yk=11, xl=75, yl=15, xm=66, ym=19, xn=75, yn=23, xo=66, yo=27, xp=75, yp=31;



prin=inicio();

if(prin==1)
{
clrscr(); tablero();

fA(xa,ya,ka); fB(xb,yb,kb); fC(xc,yc,kc); fD(xd,yd,kd); fE(xe,ye,ke);
fF(xf,yf,kf); fG(xg,yg,kg); fH(xh,yh,kh);

fI(xi,yi,ki);  fJ(xj,yj,kj); fK(xk,yk,kk); fL(xl,yl,kl); fM(xm,ym,km);
fN(xn,yn,kn); fO(xo,yo,ko); fP(xp,yp,kp);


for(;;)
{  i++;

//si es igual 2 es que las fichas se las comieron, si son 3 es que llegaron al otro lado, si es 1 la ficha abandono su poisicion inicial

if(ki==2 && kj==2 && kk==2 && kl==2 && km==2 && kn==2 && ko==2 && kp==2) { gotoxy(30,35); cout<<"HAS GANADO 1 JUGADOR"; break;}
if(ka==2 && kb==2 && kc==2 && kd==2 && ke==2 && kf==2 && kg==2 && kh==2) {gotoxy(30,35); cout<<"HAS GANADO 2 JUGADOR"; break;}



gotoxy(30,35);  cout<<"ficha a mover:  ";

if(i%2==0)
 { for(;;)
 { if(kb!=0) { if(f=='a' || f=='A'){break;} }  if(f=='b' || f=='B') {break;} if(kb!=0 || kd!=0) {if(f=='c' || f=='C') {break;} }
	if(f=='d' || f=='D') {break;} if(kd!=0 || kf!=0) {if(f=='e' || f=='E') {break;}} if(f=='f' || f=='F') {break;}
	if(kf!=0 || kh!=0) { if(f=='g' || f=='G') {break;}} if(f=='h' || f=='H') {break;}
	gotoxy(45,35); cin>>f;
 }
 for(;;)
{gotoxy(3,36);cout<<"ingrese codigo:   "; gotoxy(20,36); cin>>cod; if(cod!=2) {break;}
  if(cod==2)
 { for(;;) { gotoxy(45,35);cin>>f;
	if(kb!=0) { if(f=='a' || f=='A'){break;} }  if(f=='b' || f=='B') {break;} if(kb!=0 || kd!=0) {if(f=='c' || f=='C') {break;} }
	if(f=='d' || f=='D') {break;} if(kd!=0 || kf!=0) {if(f=='e' || f=='E') {break;}} if(f=='f' || f=='F') {break;}
	if(kf!=0 || kh!=0) { if(f=='g' || f=='G') {break;}} if(f=='h' || f=='H') {break;} } }   }
	}

else
{  for(;;)
  {	if(f=='i' || f=='I') {break;} if(ki!=0 || kk!=0) {if(f=='j' || f=='J') {break;} }
 if(f=='k' || f=='K') {break;} if(kk!=0 || km!=0) {if(f=='l' || f=='L') {break;}} if(f=='m' || f=='M') {break;}
 if(km!=0 || ko!=0) { if(f=='n' || f=='N') {break;}} if(f=='o' || f=='O') {break;}  if(ko!=0) { if(f=='p' || f=='P'){break;} }

	gotoxy(45,35);	cin>>f;
  }
 for(;;)
{ gotoxy(62,36); cout<<"ingrese codigo:   "; gotoxy(78,36); cin>>cod; if(cod!=2) {break;}
  if(cod==2)
 { for(;;) { gotoxy(45,35); cin>>f;
 if(f=='i' || f=='I') {break;} if(ki!=0 || kk!=0) {if(f=='j' || f=='J') {break;} }
 if(f=='k' || f=='K') {break;} if(kk!=0 || km!=0) {if(f=='l' || f=='L') {break;}} if(f=='m' || f=='M') {break;}
 if(km!=0 || ko!=0) { if(f=='n' || f=='N') {break;}} if(f=='o' || f=='O') {break;}  if(ko!=0) { if(f=='p' || f=='P'){break;} }  }}  }
 }



gotoxy(30,36); cout<<"ingrese casilla:     ";


switch(f)
{
case 'a': case 'A': A++; if(cod==5) {ZA++;}	 for(k=0; k<8; k++)
					 { if(ya==Y[k]) {t1=Y[k-1]; t2=Y[k+1]; r1=Y[k-2]; r2=Y[k+2];}
						if(xa==X[k]) { t3=X[k-1]; t4=X[k+1]; r3=X[k-2]; r4=X[k+2];} }

				  if(cod!=5 && ka!=3)
			{  for(;;)
	{  if(ya==t1 || ya==t2) {break;}
	gotoxy(30,36); cout<<"ingrese casilla:      "; gotoxy(48,36); cin>>ya;   }  xa=X[A+ZA]; }

		if(ka==3 && cod!=5)
	  { for(;;)
	{  if((ya==t1 || ya==t2) && (xa==t3 || xa==t4)) {break;}
	gotoxy(30,36); cout<<"ingreses casillas:   y,   x"; gotoxy(49,36); cin>>ya;  gotoxy(54,36); cin>>xa; }   }

		if(cod==5 && ka!=3)
		  { for(;;)
		{  if(ya==r1 || ya==r2) {break;}
			gotoxy(30,36); cout<<"ingrese casilla:      "; gotoxy(48,36);  cin>>ya; //para moverse y comer

		 if((t4==xi && t1==yi && ya==r1) || (t4==xi && t2==yi  && ya==r2))   { ki=2; }
		 if((t4==xj && t1==yj && ya==r1) || (t4==xj && t2==yj  && ya==r2))   { kj=2; }
		 if((t4==xk && t1==yk && ya==r1) || (t4==xk && t2==yk  && ya==r2))   { kk=2; }
		 if((t4==xl && t1==yl && ya==r1) || (t4==xl && t2==yl  && ya==r2))   { kl=2; }
		 if((t4==xm && t1==ym && ya==r1) || (t4==xm && t2==ym  && ya==r2))   { km=2; }
		 if((t4==xn && t1==yn && ya==r1) || (t4==xn && t2==yn  && ya==r2))   { kn=2; }
		 if((t4==xo && t1==yo && ya==r1) || (t4==xo && t2==yo  && ya==r2))   { ko=2; }
		 if((t4==xp && t1==yp && ya==r1) || (t4==xp && t2==yp  && ya==r2))   { kp=2; }

		 }
		 xa=X[A+ZA];
				 }
		  if(cod==5 && ka==3) //llego al otro lado y puede moverse tanto para adelante y atras porque se convirtio en reina
		 { for(;;)
	{  	gotoxy(30,36);cout<<"ingreses casillas:   y,   x"; gotoxy(49,36); cin>>ya; gotoxy(54,36); cin>>xa;
		if((ya==r1 || ya==r2) && (xa==r3 || xa==r4)) {break;}          }
if((t3==xi && t1==yi && ya==r1)  || (t3==xi && t2==yi && ya==r2) || (t4==xi && t1==yi && ya==r1) || (t4==xi && t2==yi && ya==r2))	{ ki=2; }
if((t3==xj && t1==yj && ya==r1)  || (t3==xj && t2==yj && ya==r2) || (t4==xj && t1==yj && ya==r1) || (t4==xj && t2==yj && ya==r2))	{ kj=2; }
if((t3==xk && t1==yk && ya==r1)  || (t3==xk && t2==yk && ya==r2) || (t4==xk && t1==yk && ya==r1) || (t4==xk && t2==yk && ya==r2))	{ kk=2; }
if((t3==xl && t1==yl && ya==r1)  || (t3==xl && t2==yl && ya==r2) || (t4==xl && t1==yl && ya==r1) || (t4==xl && t2==yl && ya==r2))	{ kl=2; }
if((t3==xm && t1==ym && ya==r1)  || (t3==xm && t2==ym && ya==r2) || (t4==xm && t1==ym && ya==r1) || (t4==xm && t2==ym && ya==r2))	{ km=2; }
if((t3==xn && t1==yn && ya==r1)  || (t3==xn && t2==yn && ya==r2) || (t4==xn && t1==yn && ya==r1) || (t4==xn && t2==yn && ya==r2))	{ kn=2; }
if((t3==xo && t1==yo && ya==r1)  || (t3==xo && t2==yo && ya==r2) || (t4==xo && t1==yo && ya==r1) || (t4==xo && t2==yo && ya==r2))	{ ko=2; }
if((t3==xp && t1==yp && ya==r1)  || (t3==xp && t2==yp && ya==r2) || (t4==xp && t1==yp && ya==r1) || (t4==xp && t2==yp && ya==r2))	{ kp=2; }
    }
			 clrscr(); tablero(); if(ka==0) {ka=1;}   if(xa==75) {ka=3;} //se envia llave para saber que posicion debe imprimir
fA(xa,ya,ka); fB(xb,yb,kb); fC(xc,yc,kc); fD(xd,yd,kd); fE(xe,ye,ke);
fF(xf,yf,kf); fG(xg,yg,kg); fH(xh,yh,kh);

fI(xi,yi,ki);  fJ(xj,yj,kj); fK(xk,yk,kk); fL(xl,yl,kl); fM(xm,ym,km);
fN(xn,yn,kn); fO(xo,yo,ko); fP(xp,yp,kp);
		break;


 case 'b': case 'B' :  B++; if(cod==5) {ZB++;}
					for(k=0; k<8; k++)
					 { if(yb==Y[k]) {t1=Y[k-1]; t2=Y[k+1]; r1=Y[k-2]; r2=Y[k+2];}
						if(xb==X[k]) {t3=X[k-1]; t4=X[k+1]; r3=X[k-2]; r4=X[k+2];}}
				if(cod!=5 && kb!=3)
			{  for(;;)
	{  if(yb==t1 || yb==t2) {break;}
	gotoxy(30,36); cout<<"ingrese casilla:      "; gotoxy(48,36); cin>>yb;   }  xb=X[B+ZB];}
		  if(kb==3 && cod!=5)
	  { for(;;)
	{  if((yb==t1 || yb==t2) && (xb==t3 || xb==t4)) {break;}
	gotoxy(30,36); cout<<"ingreses casillas:   y,   x"; gotoxy(49,36); cin>>yb;  gotoxy(54,36); cin>>xb; }   }

          if(cod==5 && kb!=3)
		  { for(;;)
		{  if(yb==r1 || yb==r2) {break;}
			gotoxy(30,36); cout<<"ingrese casilla:      "; gotoxy(48,36);  cin>>yb;

		 if((t4==xi && t1==yi && yb==r1) || (t4==xi && t2==yi  && yb==r2))   { ki=2; }
		 if((t4==xj && t1==yj && yb==r1) || (t4==xj && t2==yj  && yb==r2))   { kj=2; }
		 if((t4==xk && t1==yk && yb==r1) || (t4==xk && t2==yk  && yb==r2))   { kk=2; }
		 if((t4==xl && t1==yl && yb==r1) || (t4==xl && t2==yl  && yb==r2))   { kl=2; }
		 if((t4==xm && t1==ym && yb==r1) || (t4==xm && t2==ym  && yb==r2))   { km=2; }
		 if((t4==xn && t1==yn && yb==r1) || (t4==xn && t2==yn  && yb==r2))   { kn=2; }
		 if((t4==xo && t1==yo && yb==r1) || (t4==xo && t2==yo  && yb==r2))   { ko=2; }
		 if((t4==xp && t1==yp && yb==r1) || (t4==xp && t2==yp  && yb==r2))   { kp=2; }
           }	 xb=X[B+ZB];
				 }
			 if(cod==5 && kb==3)
		 { for(;;)
	{  	gotoxy(30,36);cout<<"ingreses casillas:   y,   x"; gotoxy(49,36); cin>>yb; gotoxy(54,36); cin>>xb;
		if((yb==r1 || yb==r2) && (xb==r3 || xb==r4)) {break;}          }
if((t3==xi && t1==yi && yb==r1)  || (t3==xi && t2==yi && yb==r2) || (t4==xi && t1==yi && yb==r1) || (t4==xi && t2==yi && yb==r2))	{ ki=2; }
if((t3==xj && t1==yj && yb==r1)  || (t3==xj && t2==yj && yb==r2) || (t4==xj && t1==yj && yb==r1) || (t4==xj && t2==yj && yb==r2))	{ kj=2; }
if((t3==xk && t1==yk && yb==r1)  || (t3==xk && t2==yk && yb==r2) || (t4==xk && t1==yk && yb==r1) || (t4==xk && t2==yk && yb==r2))	{ kk=2; }
if((t3==xl && t1==yl && yb==r1)  || (t3==xl && t2==yl && yb==r2) || (t4==xl && t1==yl && yb==r1) || (t4==xl && t2==yl && yb==r2))	{ kl=2; }
if((t3==xm && t1==ym && yb==r1)  || (t3==xm && t2==ym && yb==r2) || (t4==xm && t1==ym && yb==r1) || (t4==xm && t2==ym && yb==r2))	{ km=2; }
if((t3==xn && t1==yn && yb==r1)  || (t3==xn && t2==yn && yb==r2) || (t4==xn && t1==yn && yb==r1) || (t4==xn && t2==yn && yb==r2))	{ kn=2; }
if((t3==xo && t1==yo && yb==r1)  || (t3==xo && t2==yo && yb==r2) || (t4==xo && t1==yo && yb==r1) || (t4==xo && t2==yo && yb==r2))	{ ko=2; }
if((t3==xp && t1==yp && yb==r1)  || (t3==xp && t2==yp && yb==r2) || (t4==xp && t1==yp && yb==r1) || (t4==xp && t2==yp && yb==r2))	{ kp=2; }
	 }

		clrscr(); tablero();   if(kb==0) {kb=1;}   if(xb==75) {kb=3;}
fA(xa,ya,ka); fB(xb,yb,kb); fC(xc,yc,kc); fD(xd,yd,kd); fE(xe,ye,ke);
fF(xf,yf,kf); fG(xg,yg,kg); fH(xh,yh,kh);

fI(xi,yi,ki);  fJ(xj,yj,kj); fK(xk,yk,kk); fL(xl,yl,kl); fM(xm,ym,km);
fN(xn,yn,kn); fO(xo,yo,ko); fP(xp,yp,kp);
		break;

 case 'c': case 'C':  C++; if(cod==5) {ZC++;}
 for(k=0; k<8; k++) { if(yc==Y[k]) {t1=Y[k-1]; t2=Y[k+1]; r1=Y[k-2]; r2=Y[k+2];}
							if(xc==X[k]) {t3=X[k-1]; t4=X[k+1]; r3=X[k-2]; r4=X[k+2];}			}
	

		if(cod!=5 && kc!=3)
  {  for(;;)
	{  if(yc==t1 || yc==t2) {break;}
	gotoxy(30,36); cout<<"ingrese casilla:      "; gotoxy(48,36); cin>>yc;   }  xc=X[C+ZC];}
      
		 if(kc==3 && cod!=5)
	  { for(;;)
	{  if((yc==t1 || yc==t2) && (xc==t3 || xc==t4)) {break;}
	gotoxy(30,36); cout<<"ingreses casillas:   y,   x"; gotoxy(49,36); cin>>yc;  gotoxy(54,36); cin>>xc; }   }

	if(cod==5 && kc!=3)
		  { for(;;)
		{  if(yc==r1 || yc==r2) {break;}
			gotoxy(30,36); cout<<"ingrese casilla:      "; gotoxy(48,36);  cin>>yc;

		 if((t4==xi && t1==yi && yc==r1) || (t4==xi && t2==yi  && yc==r2))   { ki=2; }
		 if((t4==xj && t1==yj && yc==r1) || (t4==xj && t2==yj  && yc==r2))   { kj=2; }
		 if((t4==xk && t1==yk && yc==r1) || (t4==xk && t2==yk  && yc==r2))   { kk=2; }
		 if((t4==xl && t1==yl && yc==r1) || (t4==xl && t2==yl  && yc==r2))   { kl=2; }
		 if((t4==xm && t1==ym && yc==r1) || (t4==xm && t2==ym  && yc==r2))   { km=2; }
		 if((t4==xn && t1==yn && yc==r1) || (t4==xn && t2==yn  && yc==r2))   { kn=2; }
		 if((t4==xo && t1==yo && yc==r1) || (t4==xo && t2==yo  && yc==r2))   { ko=2; }
		 if((t4==xp && t1==yp && yc==r1) || (t4==xp && t2==yp  && yc==r2))   { kp=2; }

		 }
		 xc=X[C+ZC];
				 }
				  if(cod==5 && kc==3)
		 { for(;;)
	{  	gotoxy(30,36);cout<<"ingreses casillas:   y,   x"; gotoxy(49,36); cin>>yc; gotoxy(54,36); cin>>xc;
		if((yc==r1 || yc==r2) && (xc==r3 || xc==r4)) {break;}          }
if((t3==xi && t1==yi && yc==r1)  || (t3==xi && t2==yi && yc==r2) || (t4==xi && t1==yi && yc==r1) || (t4==xi && t2==yi && yc==r2))	{ ki=2; }
if((t3==xj && t1==yj && yc==r1)  || (t3==xj && t2==yj && yc==r2) || (t4==xj && t1==yj && yc==r1) || (t4==xj && t2==yj && yc==r2))	{ kj=2; }
if((t3==xk && t1==yk && yc==r1)  || (t3==xk && t2==yk && yc==r2) || (t4==xk && t1==yk && yc==r1) || (t4==xk && t2==yk && yc==r2))	{ kk=2; }
if((t3==xl && t1==yl && yc==r1)  || (t3==xl && t2==yl && yc==r2) || (t4==xl && t1==yl && yc==r1) || (t4==xl && t2==yl && yc==r2))	{ kl=2; }
if((t3==xm && t1==ym && yc==r1)  || (t3==xm && t2==ym && yc==r2) || (t4==xm && t1==ym && yc==r1) || (t4==xm && t2==ym && yc==r2))	{ km=2; }
if((t3==xn && t1==yn && yc==r1)  || (t3==xn && t2==yn && yc==r2) || (t4==xn && t1==yn && yc==r1) || (t4==xn && t2==yn && yc==r2))	{ kn=2; }
if((t3==xo && t1==yo && yc==r1)  || (t3==xo && t2==yo && yc==r2) || (t4==xo && t1==yo && yc==r1) || (t4==xo && t2==yo && yc==r2))	{ ko=2; }
if((t3==xp && t1==yp && yc==r1)  || (t3==xp && t2==yp && yc==r2) || (t4==xp && t1==yp && yc==r1) || (t4==xp && t2==yp && yc==r2))	{ kp=2; }
	 }


		clrscr(); tablero();  if(kc==0){ kc=1;}  if(xc==75) {kc=3;}
fA(xa,ya,ka); fB(xb,yb,kb); fC(xc,yc,kc); fD(xd,yd,kd); fE(xe,ye,ke);
fF(xf,yf,kf); fG(xg,yg,kg); fH(xh,yh,kh);

fI(xi,yi,ki);  fJ(xj,yj,kj); fK(xk,yk,kk); fL(xl,yl,kl); fM(xm,ym,km);
fN(xn,yn,kn); fO(xo,yo,ko); fP(xp,yp,kp);
		break;

 case 'd': case 'D' :  D++; if(cod==5) {ZD++;}
					for(k=0; k<8; k++)
					 { if(yd==Y[k]) {t1=Y[k-1]; t2=Y[k+1]; r1=Y[k-2]; r2=Y[k+2];}
						if(xd==X[k]) {t3=X[k-1]; t4=X[k+1]; r3=X[k-2]; r4=X[k+2];}	}   

	 if(cod!=5 && kd!=3)
  {  for(;;)
	{  if(yd==t1 || yd==t2) {break;}
	gotoxy(30,36); cout<<"ingrese casilla:      "; gotoxy(48,36); cin>>yd;  }  xd=X[D+ZD];}
		
         if(kd==3 && cod!=5)
	  { for(;;)
	{  if((yd==t1 || yd==t2) && (xd==t3 || xd==t4)) {break;}
	gotoxy(30,36); cout<<"ingreses casillas:   y,   x"; gotoxy(49,36); cin>>yd;  gotoxy(54,36); cin>>xd; }   }

	if(cod==5 && kd!=3)
		  { for(;;)
		{  if(yd==r1 || yd==r2) {break;}
			gotoxy(30,36); cout<<"ingrese casilla:      "; gotoxy(48,36);  cin>>yd;

		 if((t4==xi && t1==yi && yd==r1) || (t4==xi && t2==yi  && yd==r2))   { ki=2; }
		 if((t4==xj && t1==yj && yd==r1) || (t4==xj && t2==yj  && yd==r2))   { kj=2; }
		 if((t4==xk && t1==yk && yd==r1) || (t4==xk && t2==yk  && yd==r2))   { kk=2; }
		 if((t4==xl && t1==yl && yd==r1) || (t4==xl && t2==yl  && yd==r2))   { kl=2; }
		 if((t4==xm && t1==ym && yd==r1) || (t4==xm && t2==ym  && yd==r2))   { km=2; }
		 if((t4==xn && t1==yn && yd==r1) || (t4==xn && t2==yn  && yd==r2))   { kn=2; }
		 if((t4==xo && t1==yo && yd==r1) || (t4==xo && t2==yo  && yd==r2))   { ko=2; }
		 if((t4==xp && t1==yp && yd==r1) || (t4==xp && t2==yp  && yd==r2))   { kp=2; }

		 }
		 xd=X[D+ZD];
				 }
				  if(cod==5 && kd==3)
		 { for(;;)
	{  	gotoxy(30,36);cout<<"ingreses casillas:   y,   x"; gotoxy(49,36); cin>>yd; gotoxy(54,36); cin>>xd;
		if((yd==r1 || yd==r2) && (xd==r3 || xd==r4)) {break;}          }
if((t3==xi && t1==yi && yd==r1)  || (t3==xi && t2==yi && yd==r2) || (t4==xi && t1==yi && yd==r1) || (t4==xi && t2==yi && yd==r2))	{ ki=2; }
if((t3==xj && t1==yj && yd==r1)  || (t3==xj && t2==yj && yd==r2) || (t4==xj && t1==yj && yd==r1) || (t4==xj && t2==yj && yd==r2))	{ kj=2; }
if((t3==xk && t1==yk && yd==r1)  || (t3==xk && t2==yk && yd==r2) || (t4==xk && t1==yk && yd==r1) || (t4==xk && t2==yk && yd==r2))	{ kk=2; }
if((t3==xl && t1==yl && yd==r1)  || (t3==xl && t2==yl && yd==r2) || (t4==xl && t1==yl && yd==r1) || (t4==xl && t2==yl && yd==r2))	{ kl=2; }
if((t3==xm && t1==ym && yd==r1)  || (t3==xm && t2==ym && yd==r2) || (t4==xm && t1==ym && yd==r1) || (t4==xm && t2==ym && yd==r2))	{ km=2; }
if((t3==xn && t1==yn && yd==r1)  || (t3==xn && t2==yn && yd==r2) || (t4==xn && t1==yn && yd==r1) || (t4==xn && t2==yn && yd==r2))	{ kn=2; }
if((t3==xo && t1==yo && yd==r1)  || (t3==xo && t2==yo && yd==r2) || (t4==xo && t1==yo && yd==r1) || (t4==xo && t2==yo && yd==r2))	{ ko=2; }
if((t3==xp && t1==yp && yd==r1)  || (t3==xp && t2==yp && yd==r2) || (t4==xp && t1==yp && yd==r1) || (t4==xp && t2==yp && yd==r2))	{ kp=2; }
	 }
		clrscr(); tablero();  if(kd==0){ kd=1;}   if(xd==75) {kd=3;}
fA(xa,ya,ka); fB(xb,yb,kb); fC(xc,yc,kc); fD(xd,yd,kd); fE(xe,ye,ke);fF(xf,yf,kf); fG(xg,yg,kg); fH(xh,yh,kh);
fI(xi,yi,ki);  fJ(xj,yj,kj); fK(xk,yk,kk); fL(xl,yl,kl); fM(xm,ym,km); fN(xn,yn,kn); fO(xo,yo,ko); fP(xp,yp,kp);
		break;

 case 'e': case 'E':  E++; if(cod==5) {ZE++;}
	for(k=0; k<8; k++) { if(ye==Y[k]) {t1=Y[k-1]; t2=Y[k+1]; r1=Y[k-2]; r2=Y[k+2];}
								if(xe==X[k]) {t3=X[k-1]; t4=X[k+1]; r3=X[k-2]; r4=X[k+2];}	}

		if(cod!=5 && ke!=3)
  {  for(;;)
	{  if(ye==t1 || ye==t2) {break;}
	gotoxy(30,36); cout<<"ingrese casilla:      "; gotoxy(48,36); cin>>ye;   }  xe=X[E+ZE];}
		 if(ke==3 && cod!=5)
	  { for(;;)
	{  if((ye==t1 || ye==t2) && (xe==t3 || xe==t4)) {break;}
	gotoxy(30,36); cout<<"ingreses casillas:   y,   x"; gotoxy(49,36); cin>>ye;  gotoxy(54,36); cin>>xe; }   }

		  if(cod==5 && ke!=3)
		  { for(;;)
		{  if(ye==r1 || ye==r2) {break;}
			gotoxy(30,36); cout<<"ingrese casilla:      "; gotoxy(48,36);  cin>>ye;

		 if((t4==xi && t1==yi && ye==r1) || (t4==xi && t2==yi  && ye==r2))   { ki=2; }
		 if((t4==xj && t1==yj && ye==r1) || (t4==xj && t2==yj  && ye==r2))   { kj=2; }
		 if((t4==xk && t1==yk && ye==r1) || (t4==xk && t2==yk  && ye==r2))   { kk=2; }
		 if((t4==xl && t1==yl && ye==r1) || (t4==xl && t2==yl  && ye==r2))   { kl=2; }
		 if((t4==xm && t1==ym && ye==r1) || (t4==xm && t2==ym  && ye==r2))   { km=2; }
		 if((t4==xn && t1==yn && ye==r1) || (t4==xn && t2==yn  && ye==r2))   { kn=2; }
		 if((t4==xo && t1==yo && ye==r1) || (t4==xo && t2==yo  && ye==r2))   { ko=2; }
		 if((t4==xp && t1==yp && ye==r1) || (t4==xp && t2==yp  && ye==r2))   { kp=2; }
		 }
		 xe=X[E+ZE];
				 }
		  if(cod==5 && ke==3)
		 { for(;;)
	{  	gotoxy(30,36);cout<<"ingreses casillas:   y,   x"; gotoxy(49,36); cin>>ye; gotoxy(54,36); cin>>xe;
		if((ye==r1 || ye==r2) && (xe==r3 || xe==r4)) {break;}          }
if((t3==xi && t1==yi && ye==r1)  || (t3==xi && t2==yi && ye==r2) || (t4==xi && t1==yi && ye==r1) || (t4==xi && t2==yi && ye==r2))	{ ki=2; }
if((t3==xj && t1==yj && ye==r1)  || (t3==xj && t2==yj && ye==r2) || (t4==xj && t1==yj && ye==r1) || (t4==xj && t2==yj && ye==r2))	{ kj=2; }
if((t3==xk && t1==yk && ye==r1)  || (t3==xk && t2==yk && ye==r2) || (t4==xk && t1==yk && ye==r1) || (t4==xk && t2==yk && ye==r2))	{ kk=2; }
if((t3==xl && t1==yl && ye==r1)  || (t3==xl && t2==yl && ye==r2) || (t4==xl && t1==yl && ye==r1) || (t4==xl && t2==yl && ye==r2))	{ kl=2; }
if((t3==xm && t1==ym && ye==r1)  || (t3==xm && t2==ym && ye==r2) || (t4==xm && t1==ym && ye==r1) || (t4==xm && t2==ym && ye==r2))	{ km=2; }
if((t3==xn && t1==yn && ye==r1)  || (t3==xn && t2==yn && ye==r2) || (t4==xn && t1==yn && ye==r1) || (t4==xn && t2==yn && ye==r2))	{ kn=2; }
if((t3==xo && t1==yo && ye==r1)  || (t3==xo && t2==yo && ye==r2) || (t4==xo && t1==yo && ye==r1) || (t4==xo && t2==yo && ye==r2))	{ ko=2; }
if((t3==xp && t1==yp && ye==r1)  || (t3==xp && t2==yp && ye==r2) || (t4==xp && t1==yp && ye==r1) || (t4==xp && t2==yp && ye==r2))	{ kp=2; }
	 }
		clrscr(); tablero();   if(ke==0) {ke=1;}  if(xe==75) {ke=3;}
fA(xa,ya,ka); fB(xb,yb,kb); fC(xc,yc,kc); fD(xd,yd,kd); fE(xe,ye,ke); fF(xf,yf,kf); fG(xg,yg,kg); fH(xh,yh,kh);
fI(xi,yi,ki);  fJ(xj,yj,kj); fK(xk,yk,kk); fL(xl,yl,kl); fM(xm,ym,km);fN(xn,yn,kn); fO(xo,yo,ko); fP(xp,yp,kp);
		break;

 case 'f': case 'F':   F++; if(cod==5) {ZF++;}
					for(k=0; k<8; k++)
					 { if(yf==Y[k]) {t1=Y[k-1]; t2=Y[k+1]; r1=Y[k-2]; r2=Y[k+2];}
					  if(xf==X[k]) {t3=X[k-1]; t4=X[k+1]; r3=X[k-2]; r4=X[k+2];}}
			 if(cod!=5 && kf!=3)
  {  for(;;)
	{  if(yf==t1 || yf==t2) {break;}
	gotoxy(30,36); cout<<"ingrese casilla:      "; gotoxy(48,36); cin>>yf;  }  xf=X[F+ZF];}
			if(kf==3 && cod!=5)
	  { for(;;)
	{  if((yf==t1 || yf==t2) && (xf==t3 || xf==t4)) {break;}
	gotoxy(30,36); cout<<"ingreses casillas:   y,   x"; gotoxy(49,36); cin>>yf;  gotoxy(54,36); cin>>xf; }   }

		 if(cod==5 && kf!=3)
		  { for(;;)
		{  if(yf==r1 || yf==r2) {break;}
			gotoxy(30,36); cout<<"ingrese casilla:      "; gotoxy(48,36);  cin>>yf;

		 if((t4==xi && t1==yi && yf==r1) || (t4==xi && t2==yi  && yf==r2))   { ki=2; }
		 if((t4==xj && t1==yj && yf==r1) || (t4==xj && t2==yj  && yf==r2))   { kj=2; }
		 if((t4==xk && t1==yk && yf==r1) || (t4==xk && t2==yk  && yf==r2))   { kk=2; }
		 if((t4==xl && t1==yl && yf==r1) || (t4==xl && t2==yl  && yf==r2))   { kl=2; }
		 if((t4==xm && t1==ym && yf==r1) || (t4==xm && t2==ym  && yf==r2))   { km=2; }
		 if((t4==xn && t1==yn && yf==r1) || (t4==xn && t2==yn  && yf==r2))   { kn=2; }
		 if((t4==xo && t1==yo && yf==r1) || (t4==xo && t2==yo  && yf==r2))   { ko=2; }
		 if((t4==xp && t1==yp && yf==r1) || (t4==xp && t2==yp  && yf==r2))   { kp=2; }

		 }
		 xf=X[F+ZF];
				 }
		  if(cod==5 && kf==3)
		 { for(;;)
	{  	gotoxy(30,36);cout<<"ingreses casillas:   y,   x"; gotoxy(49,36); cin>>yf; gotoxy(54,36); cin>>xf;
		if((yf==r1 || yf==r2) && (xf==r3 || xf==r4)) {break;}          }
if((t3==xi && t1==yi && yf==r1)  || (t3==xi && t2==yi && yf==r2) || (t4==xi && t1==yi && yf==r1) || (t4==xi && t2==yi && yf==r2))	{ ki=2; }
if((t3==xj && t1==yj && yf==r1)  || (t3==xj && t2==yj && yf==r2) || (t4==xj && t1==yj && yf==r1) || (t4==xj && t2==yj && yf==r2))	{ kj=2; }
if((t3==xk && t1==yk && yf==r1)  || (t3==xk && t2==yk && yf==r2) || (t4==xk && t1==yk && yf==r1) || (t4==xk && t2==yk && yf==r2))	{ kk=2; }
if((t3==xl && t1==yl && yf==r1)  || (t3==xl && t2==yl && yf==r2) || (t4==xl && t1==yl && yf==r1) || (t4==xl && t2==yl && yf==r2))	{ kl=2; }
if((t3==xm && t1==ym && yf==r1)  || (t3==xm && t2==ym && yf==r2) || (t4==xm && t1==ym && yf==r1) || (t4==xm && t2==ym && yf==r2))	{ km=2; }
if((t3==xn && t1==yn && yf==r1)  || (t3==xn && t2==yn && yf==r2) || (t4==xn && t1==yn && yf==r1) || (t4==xn && t2==yn && yf==r2))	{ kn=2; }
if((t3==xo && t1==yo && yf==r1)  || (t3==xo && t2==yo && yf==r2) || (t4==xo && t1==yo && yf==r1) || (t4==xo && t2==yo && yf==r2))	{ ko=2; }
if((t3==xp && t1==yp && yf==r1)  || (t3==xp && t2==yp && yf==r2) || (t4==xp && t1==yp && yf==r1) || (t4==xp && t2==yp && yf==r2))	{ kp=2; }
	 }
		clrscr(); tablero();  if(kf==0){ kf=1;}  if(xf==75) {kf=3;}
fA(xa,ya,ka); fB(xb,yb,kb); fC(xc,yc,kc); fD(xd,yd,kd); fE(xe,ye,ke); fF(xf,yf,kf); fG(xg,yg,kg); fH(xh,yh,kh);
fI(xi,yi,ki);  fJ(xj,yj,kj); fK(xk,yk,kk); fL(xl,yl,kl); fM(xm,ym,km); fN(xn,yn,kn); fO(xo,yo,ko); fP(xp,yp,kp);
		break;

 case 'g': case 'G':  G++; if(cod==5) {ZG++;}
 for(k=0; k<8; k++) { if(yg==Y[k]) {t1=Y[k-1]; t2=Y[k+1]; r1=Y[k-2]; r2=Y[k+2];}
				if(xg==X[k]) {t3=X[k-1]; t4=X[k+1]; r3=X[k-2]; r4=X[k+2];}}  

		if(cod!=5 && kg!=3)
  {  for(;;)
	{  if(yg==t1 || yg==t2) {break;}
	gotoxy(30,36); cout<<"ingrese casilla:      "; gotoxy(48,36); cin>>yg;   }  xg=X[G+ZG];}
		if(kg==3 && cod!=5)
	  { for(;;)
	{  if((yg==t1 || yg==t2) && (xg==t3 || xg==t4)) {break;}
	gotoxy(30,36); cout<<"ingreses casillas:   y,   x"; gotoxy(49,36); cin>>yg;  gotoxy(54,36); cin>>xg; }   }

		if(cod==5 && kg!=3)
		  { for(;;)
		{  if(yg==r1 || yg==r2) {break;}
			gotoxy(30,36); cout<<"ingrese casilla:      "; gotoxy(48,36);  cin>>yg;

		 if((t4==xi && t1==yi && yg==r1) || (t4==xi && t2==yi  && yg==r2))   { ki=2; }
		 if((t4==xj && t1==yj && yg==r1) || (t4==xj && t2==yj  && yg==r2))   { kj=2; }
		 if((t4==xk && t1==yk && yg==r1) || (t4==xk && t2==yk  && yg==r2))   { kk=2; }
		 if((t4==xl && t1==yl && yg==r1) || (t4==xl && t2==yl  && yg==r2))   { kl=2; }
		 if((t4==xm && t1==ym && yg==r1) || (t4==xm && t2==ym  && yg==r2))   { km=2; }
		 if((t4==xn && t1==yn && yg==r1) || (t4==xn && t2==yn  && yg==r2))   { kn=2; }
		 if((t4==xo && t1==yo && yg==r1) || (t4==xo && t2==yo  && yg==r2))   { ko=2; }
		 if((t4==xp && t1==yp && yg==r1) || (t4==xp && t2==yp  && yg==r2))   { kp=2; }
		 }
		 xg=r4;
				 }
			if(cod==5 && kg==3)
		 { for(;;)
	{  	gotoxy(30,36);cout<<"ingreses casillas:   y,   x"; gotoxy(49,36); cin>>yg; gotoxy(54,36); cin>>xg;
		if((yg==r1 || yg==r2) && (xg==r3 || xg==r4)) {break;}          }
if((t3==xi && t1==yi && yg==r1)  || (t3==xi && t2==yi && yg==r2) || (t4==xi && t1==yi && yg==r1) || (t4==xi && t2==yi && yg==r2))	{ ki=2; }
if((t3==xj && t1==yj && yg==r1)  || (t3==xj && t2==yj && yg==r2) || (t4==xj && t1==yj && yg==r1) || (t4==xj && t2==yj && yg==r2))	{ kj=2; }
if((t3==xk && t1==yk && yg==r1)  || (t3==xk && t2==yk && yg==r2) || (t4==xk && t1==yk && yg==r1) || (t4==xk && t2==yk && yg==r2))	{ kk=2; }
if((t3==xl && t1==yl && yg==r1)  || (t3==xl && t2==yl && yg==r2) || (t4==xl && t1==yl && yg==r1) || (t4==xl && t2==yl && yg==r2))	{ kl=2; }
if((t3==xm && t1==ym && yg==r1)  || (t3==xm && t2==ym && yg==r2) || (t4==xm && t1==ym && yg==r1) || (t4==xm && t2==ym && yg==r2))	{ km=2; }
if((t3==xn && t1==yn && yg==r1)  || (t3==xn && t2==yn && yg==r2) || (t4==xn && t1==yn && yg==r1) || (t4==xn && t2==yn && yg==r2))	{ kn=2; }
if((t3==xo && t1==yo && yg==r1)  || (t3==xo && t2==yo && yg==r2) || (t4==xo && t1==yo && yg==r1) || (t4==xo && t2==yo && yg==r2))	{ ko=2; }
if((t3==xp && t1==yp && yg==r1)  || (t3==xp && t2==yp && yg==r2) || (t4==xp && t1==yp && yg==r1) || (t4==xp && t2==yp && yg==r2))	{ kp=2; }
	 }

		clrscr(); tablero();  if(kg==0){ kg=1;}  if(xg==75) {kg=3;}
fA(xa,ya,ka); fB(xb,yb,kb); fC(xc,yc,kc); fD(xd,yd,kd); fE(xe,ye,ke);fF(xf,yf,kf); fG(xg,yg,kg); fH(xh,yh,kh);
fI(xi,yi,ki);  fJ(xj,yj,kj); fK(xk,yk,kk); fL(xl,yl,kl); fM(xm,ym,km);  fN(xn,yn,kn); fO(xo,yo,ko); fP(xp,yp,kp);
		break;

case 'h': case 'H':  H++; if(cod==5) {ZH++;}
					for(k=0; k<8; k++)
					 { if(yh==Y[k]) {t1=Y[k-1]; t2=Y[k+1]; r1=Y[k-2]; r2=Y[k+2];}
						if(xh==X[k]) {t3=X[k-1]; t4=X[k+1]; r3=X[k-2]; r4=X[k+2];}}  
			 if(cod!=5 && kh!=3)
  {  for(;;)
	{  if(yh==t1 || yh==t2) {break;}
	gotoxy(30,36); cout<<"ingrese casilla:      "; gotoxy(48,36); cin>>yh;  }  xh=X[H+ZH];}
      
		 if(kh==3 && cod!=5)
	  { for(;;)
	{  if((yh==t1 || yh==t2) && (xh==t3 || xh==t4)) {break;}
	gotoxy(30,36); cout<<"ingreses casillas:   y,   x"; gotoxy(49,36); cin>>yh;  gotoxy(54,36); cin>>xh; }   }

	  if(cod==5 && kh!=3)
		  { for(;;)
		{  if(yh==r1 || yh==r2) {break;}
			gotoxy(30,36); cout<<"ingrese casilla:      "; gotoxy(48,36);  cin>>yh;

		 if((t4==xi && t1==yi && yh==r1) || (t4==xi && t2==yi  && yh==r2))   { ki=2; }
		 if((t4==xj && t1==yj && yh==r1) || (t4==xj && t2==yj  && yh==r2))   { kj=2; }
		 if((t4==xk && t1==yk && yh==r1) || (t4==xk && t2==yk  && yh==r2))   { kk=2; }
		 if((t4==xl && t1==yl && yh==r1) || (t4==xl && t2==yl  && yh==r2))   { kl=2; }
		 if((t4==xm && t1==ym && yh==r1) || (t4==xm && t2==ym  && yh==r2))   { km=2; }
		 if((t4==xn && t1==yn && yh==r1) || (t4==xn && t2==yn  && yh==r2))   { kn=2; }
		 if((t4==xo && t1==yo && yh==r1) || (t4==xo && t2==yo  && yh==r2))   { ko=2; }
		 if((t4==xp && t1==yp && yh==r1) || (t4==xp && t2==yp  && yh==r2))   { kp=2; }
			 }   xh=X[H+ZH];   	 }
			if(cod==5 && kh==3)
		 { for(;;)
	{  	gotoxy(30,36);cout<<"ingreses casillas:   y,   x"; gotoxy(49,36); cin>>yh; gotoxy(54,36); cin>>xh;
		if((yh==r1 || yh==r2) && (xh==r3 || xh==r4)) {break;}          }
if((t3==xi && t1==yi && yh==r1)  || (t3==xi && t2==yi && yh==r2) || (t4==xi && t1==yi && yh==r1) || (t4==xi && t2==yi && yh==r2))	{ ki=2; }
if((t3==xj && t1==yj && yh==r1)  || (t3==xj && t2==yj && yh==r2) || (t4==xj && t1==yj && yh==r1) || (t4==xj && t2==yj && yh==r2))	{ kj=2; }
if((t3==xk && t1==yk && yh==r1)  || (t3==xk && t2==yk && yh==r2) || (t4==xk && t1==yk && yh==r1) || (t4==xk && t2==yk && yh==r2))	{ kk=2; }
if((t3==xl && t1==yl && yh==r1)  || (t3==xl && t2==yl && yh==r2) || (t4==xl && t1==yl && yh==r1) || (t4==xl && t2==yl && yh==r2))	{ kl=2; }
if((t3==xm && t1==ym && yh==r1)  || (t3==xm && t2==ym && yh==r2) || (t4==xm && t1==ym && yh==r1) || (t4==xm && t2==ym && yh==r2))	{ km=2; }
if((t3==xn && t1==yn && yh==r1)  || (t3==xn && t2==yn && yh==r2) || (t4==xn && t1==yn && yh==r1) || (t4==xn && t2==yn && yh==r2))	{ kn=2; }
if((t3==xo && t1==yo && yh==r1)  || (t3==xo && t2==yo && yh==r2) || (t4==xo && t1==yo && yh==r1) || (t4==xo && t2==yo && yh==r2))	{ ko=2; }
if((t3==xp && t1==yp && yh==r1)  || (t3==xp && t2==yp && yh==r2) || (t4==xp && t1==yp && yh==r1) || (t4==xp && t2==yp && yh==r2))	{ kp=2; }
	 }
		clrscr(); tablero(); if(kh==0) {  kh=1;} if(xh==75) {kh=3;}
fA(xa,ya,ka); fB(xb,yb,kb); fC(xc,yc,kc); fD(xd,yd,kd); fE(xe,ye,ke);  fF(xf,yf,kf); fG(xg,yg,kg); fH(xh,yh,kh);
 fI(xi,yi,ki);  fJ(xj,yj,kj); fK(xk,yk,kk); fL(xl,yl,kl); fM(xm,ym,km);   fN(xn,yn,kn); fO(xo,yo,ko); fP(xp,yp,kp);
		break;

 case 'i': case 'I': I--; if(cod==5) {ZI--;}
				for(k=7; k>=0; k--)
					 { if(yi==Y[k]) {t1=Y[k-1]; t2=Y[k+1]; r1=Y[k-2]; r2=Y[k+2];}
                       if(xi=X[k]) {t3=X[k-1]; t4=X[k+1]; r3=X[k-2]; r4=X[k+2];}}
						if(cod!=5 && ki!=3)
			{   for(;;)
			{ if(yi==t1 || yi==t2){break;}
		gotoxy(30,36); cout<<"ingrese casilla:      "; gotoxy(48,36); cin>>yi;  }
				xi=X[I+ZI]; }
			  if(ki==3 && cod!=5)
	  { for(;;)
	{  if((yi==t1 || yi==t2) && (xi==t3 || xi==t4)) {break;}
	gotoxy(30,36); cout<<"ingreses casillas:   y,   x"; gotoxy(49,36); cin>>yi;  gotoxy(54,36); cin>>xi; }   }

	  if(cod==5 && ki!=3)
		  { for(;;)
		{  if(yi==r1 || yi==r2) {break;}
			gotoxy(30,36); cout<<"ingrese casilla:      "; gotoxy(48,36);  cin>>yi;
                                          }
		 if((X[I+ZI+1]==xa && t1==ya && yi==r1) || (X[I+ZI+1]==xa && t2==ya  && yi==r2))   { ka=2; }
		 if((X[I+ZI+1]==xb && t1==yb && yi==r1) || (X[I+ZI+1]==xb && t2==yb  && yi==r2))   { kb=2; }
		 if((X[I+ZI+1]==xc && t1==yc && yi==r1) || (X[I+ZI+1]==xc && t2==yc  && yi==r2))   { kc=2; }
		 if((X[I+ZI+1]==xd && t1==yd && yi==r1) || (X[I+ZI+1]==xd && t2==yd  && yi==r2))   { kd=2; }
		 if((X[I+ZI+1]==xe && t1==ye && yi==r1) || (X[I+ZI+1]==xe && t2==ye  && yi==r2))   { ke=2; }
		 if((X[I+ZI+1]==xf && t1==yf && yi==r1) || (X[I+ZI+1]==xf && t2==yf  && yi==r2))   { kf=2; }
		 if((X[I+ZI+1]==xg && t1==yg && yi==r1) || (X[I+ZI+1]==xg && t2==yg  && yi==r2))   { kg=2; }
		 if((X[I+ZI+1]==xh && t1==yh && yi==r1) || (X[I+ZI+1]==xh && t2==yh  && yi==r2))   { kh=2; }


		 xi=X[I+ZI];
				 }
                       if(cod==5 && ki==3)
		 { for(;;)
	{  	gotoxy(30,36);cout<<"ingreses casillas:   y,   x"; gotoxy(49,36); cin>>yi; gotoxy(54,36); cin>>xi;
		if((yi==r1 || yi==r2) && (xi==r3 || xi==r4)) {break;}          }
if((t3==xa && t1==ya && yi==r1)  || (t3==xa && t2==ya && yi==r2) || (t4==xa && t1==ya && yi==r1) || (t4==xa && t2==ya && yi==r2))	{ ka=2; }
if((t3==xb && t1==yb && yi==r1)  || (t3==xb && t2==yb && yi==r2) || (t4==xb && t1==yb && yi==r1) || (t4==xb && t2==yb && yi==r2))	{ kb=2; }
if((t3==xc && t1==yc && yi==r1)  || (t3==xc && t2==yc && yi==r2) || (t4==xc && t1==yc && yi==r1) || (t4==xc && t2==yc && yi==r2))	{ kc=2; }
if((t3==xd && t1==yd && yi==r1)  || (t3==xd && t2==yd && yi==r2) || (t4==xd && t1==yd && yi==r1) || (t4==xd && t2==yd && yi==r2))	{ kd=2; }
if((t3==xe && t1==ye && yi==r1)  || (t3==xe && t2==ye && yi==r2) || (t4==xe && t1==ye && yi==r1) || (t4==xe && t2==ye && yi==r2))	{ ke=2; }
if((t3==xf && t1==yf && yi==r1)  || (t3==xf && t2==yf && yi==r2) || (t4==xf && t1==yf && yi==r1) || (t4==xf && t2==yf && yi==r2))	{ kf=2; }
if((t3==xg && t1==yg && yi==r1)  || (t3==xg && t2==yg && yi==r2) || (t4==xg && t1==yg && yi==r1) || (t4==xg && t2==yg && yi==r2))	{ kg=2; }
if((t3==xh && t1==yh && yi==r1)  || (t3==xh && t2==yh && yi==r2) || (t4==xh && t1==yh && yi==r1) || (t4==xh && t2==yh && yi==r2))	{ kh=2; }
    }

			 clrscr(); tablero();  if(ki==0){   ki=1;} if(xi==7) {ki=3;}
fA(xa,ya,ka); fB(xb,yb,kb); fC(xc,yc,kc); fD(xd,yd,kd); fE(xe,ye,ke);
fF(xf,yf,kf); fG(xg,yg,kg); fH(xh,yh,kh);

fI(xi,yi,ki);  fJ(xj,yj,kj); fK(xk,yk,kk); fL(xl,yl,kl); fM(xm,ym,km);
fN(xn,yn,kn); fO(xo,yo,ko); fP(xp,yp,kp);
		break;


 case 'j': case 'J' :  J--; if(cod==5) {ZJ--;}
					for(k=0; k<8; k++)
					 { if(yj==Y[k]) {t1=Y[k-1]; t2=Y[k+1]; r1=Y[k-2]; r2=Y[k+2];}
                       if(xj==X[k]) {t3=X[k-1]; t4=X[k+1]; r3=X[k-2]; r4=X[k+2];}}
			if(cod!=5 && kj!=3)
  {  for(;;)
	{  if(yj==t1 || yj==t2) {break;}
	gotoxy(30,36); cout<<"ingrese casilla:      ";  gotoxy(48,36); cin>>yj;   }  xj=X[J+ZJ];}
			if(kj==3 && cod!=5)
	  { for(;;)
	{  if((yj==t1 || yj==t2) && (xj==t3 || xj==t4)) {break;}
	gotoxy(30,36); cout<<"ingreses casillas:   y,   x"; gotoxy(49,36); cin>>yj;  gotoxy(54,36); cin>>xj; }   }
            	if(cod==5 && kj!=3)
		  { for(;;)
		{  if(yj==r1 || yj==r2) {break;}
			gotoxy(30,36); cout<<"ingrese casilla:      "; gotoxy(48,36);  cin>>yj;
                                                      }
		 if((X[J+ZJ+1]==xa && t1==ya && yj==r1) || (X[J+ZJ+1]==xa && t2==ya  && yj==r2))   { ka=2; }
		 if((X[J+ZJ+1]==xb && t1==yb && yj==r1) || (X[J+ZJ+1]==xb && t2==yb  && yj==r2))   { kb=2; }
		 if((X[J+ZJ+1]==xc && t1==yc && yj==r1) || (X[J+ZJ+1]==xc && t2==yc  && yj==r2))   { kc=2; }
		 if((X[J+ZJ+1]==xd && t1==yd && yj==r1) || (X[J+ZJ+1]==xd && t2==yd  && yj==r2))   { kd=2; }
		 if((X[J+ZJ+1]==xe && t1==ye && yj==r1) || (X[J+ZJ+1]==xe && t2==ye  && yj==r2))   { ke=2; }
		 if((X[J+ZJ+1]==xf && t1==yf && yj==r1) || (X[J+ZJ+1]==xf && t2==yf  && yj==r2))   { kf=2; }
		 if((X[J+ZJ+1]==xg && t1==yg && yj==r1) || (X[J+ZJ+1]==xg && t2==yg  && yj==r2))   { kg=2; }
		 if((X[J+ZJ+1]==xh && t1==yh && yj==r1) || (X[J+ZJ+1]==xh && t2==yh  && yj==r2))   { kh=2; }


		 xj=X[J+ZJ];
                  }
   if(cod==5 && kj==3)
		 { for(;;)
	{  	gotoxy(30,36);cout<<"ingreses casillas:   y,   x"; gotoxy(49,36); cin>>yj; gotoxy(54,36); cin>>xj;
		if((yj==r1 || yj==r2) && (xj==r3 || xj==r4)) {break;}          }
if((t3==xa && t1==ya && yj==r1)  || (t3==xa && t2==ya && yj==r2) || (t4==xa && t1==ya && yj==r1) || (t4==xa && t2==ya && yj==r2))	{ ka=2; }
if((t3==xb && t1==yb && yj==r1)  || (t3==xb && t2==yb && yj==r2) || (t4==xb && t1==yb && yj==r1) || (t4==xb && t2==yb && yj==r2))	{ kb=2; }
if((t3==xc && t1==yc && yj==r1)  || (t3==xc && t2==yc && yj==r2) || (t4==xc && t1==yc && yj==r1) || (t4==xc && t2==yc && yj==r2))	{ kc=2; }
if((t3==xd && t1==yd && yj==r1)  || (t3==xd && t2==yd && yj==r2) || (t4==xd && t1==yd && yj==r1) || (t4==xd && t2==yd && yj==r2))	{ kd=2; }
if((t3==xe && t1==ye && yj==r1)  || (t3==xe && t2==ye && yj==r2) || (t4==xe && t1==ye && yj==r1) || (t4==xe && t2==ye && yj==r2))	{ ke=2; }
if((t3==xf && t1==yf && yj==r1)  || (t3==xf && t2==yf && yj==r2) || (t4==xf && t1==yf && yj==r1) || (t4==xf && t2==yf && yj==r2))	{ kf=2; }
if((t3==xg && t1==yg && yj==r1)  || (t3==xg && t2==yg && yj==r2) || (t4==xg && t1==yg && yj==r1) || (t4==xg && t2==yg && yj==r2))	{ kg=2; }
if((t3==xh && t1==yh && yj==r1)  || (t3==xh && t2==yh && yj==r2) || (t4==xh && t1==yh && yj==r1) || (t4==xh && t2==yh && yj==r2))	{ kh=2; }
    }
		clrscr(); tablero();  if(kj==0) { kj=1;} if(xj==7) {kj=3;}
fA(xa,ya,ka); fB(xb,yb,kb); fC(xc,yc,kc); fD(xd,yd,kd); fE(xe,ye,ke);
fF(xf,yf,kf); fG(xg,yg,kg); fH(xh,yh,kh);

fI(xi,yi,ki);  fJ(xj,yj,kj); fK(xk,yk,kk); fL(xl,yl,kl); fM(xm,ym,km);
fN(xn,yn,kn); fO(xo,yo,ko); fP(xp,yp,kp);
		break;

 case 'k': case 'K': K--; for(k=0; k<8; k++)
					 { if(yk==Y[k]) {t1=Y[k-1]; t2=Y[k+1]; r1=Y[k-2]; r2=Y[k+2];}
                   if(xk==X[k]) {t3=X[k-1]; t4=X[k+1]; r3=X[k-2]; r4=X[k+2];}    }  if(cod==5) {ZK--;}
					if(cod!=5)
			{   for(;;)
			{ if(yk==t1 || yk==t2){break;}
			gotoxy(30,36); cout<<"ingrese casilla:      "; gotoxy(48,36); cin>>yk;  }

			xk=X[K+ZK]; }
         if(cod==5 && kk!=3)
		  { for(;;)
		{  if(yk==r1 || yk==r2) {break;}
			gotoxy(30,36); cout<<"ingrese casilla:      "; gotoxy(48,36);  cin>>yk;

		 if((X[K+ZK+1]==xa && t1==ya && yk==r1) || (X[K+ZK+1]==xa && t2==ya  && yk==r2))   { ka=2; }
		 if((X[K+ZK+1]==xb && t1==yb && yk==r1) || (X[K+ZK+1]==xb && t2==yb  && yk==r2))   { kb=2; }
		 if((X[K+ZK+1]==xc && t1==yc && yk==r1) || (X[K+ZK+1]==xc && t2==yc  && yk==r2))   { kc=2; }
		 if((X[K+ZK+1]==xd && t1==yd && yk==r1) || (X[K+ZK+1]==xd && t2==yd  && yk==r2))   { kd=2; }
		 if((X[K+ZK+1]==xe && t1==ye && yk==r1) || (X[K+ZK+1]==xe && t2==ye  && yk==r2))   { ke=2; }
		 if((X[K+ZK+1]==xf && t1==yf && yk==r1) || (X[K+ZK+1]==xf && t2==yf  && yk==r2))   { kf=2; }
		 if((X[K+ZK+1]==xg && t1==yg && yk==r1) || (X[K+ZK+1]==xg && t2==yg  && yk==r2))   { kg=2; }
		 if((X[K+ZK+1]==xh && t1==yh && yk==r1) || (X[K+ZK+1]==xh && t2==yh  && yk==r2))   { kh=2; }

		 }
		 xk=X[K+ZK];
				 }
              if(cod==5 && kk==3)
		 { for(;;)
	{  	gotoxy(30,36);cout<<"ingreses casillas:   y,   x"; gotoxy(49,36); cin>>yk; gotoxy(54,36); cin>>xk;
		if((yk==r1 || yk==r2) && (xk==r3 || xk==r4)) {break;}          }
if((t3==xa && t1==ya && yk==r1)  || (t3==xa && t2==ya && yk==r2) || (t4==xa && t1==ya && yk==r1) || (t4==xa && t2==ya && yk==r2))	{ ka=2; }
if((t3==xb && t1==yb && yk==r1)  || (t3==xb && t2==yb && yk==r2) || (t4==xb && t1==yb && yk==r1) || (t4==xb && t2==yb && yk==r2))	{ kb=2; }
if((t3==xc && t1==yc && yk==r1)  || (t3==xc && t2==yc && yk==r2) || (t4==xc && t1==yc && yk==r1) || (t4==xc && t2==yc && yk==r2))	{ kc=2; }
if((t3==xd && t1==yd && yk==r1)  || (t3==xd && t2==yd && yk==r2) || (t4==xd && t1==yd && yk==r1) || (t4==xd && t2==yd && yk==r2))	{ kd=2; }
if((t3==xe && t1==ye && yk==r1)  || (t3==xe && t2==ye && yk==r2) || (t4==xe && t1==ye && yk==r1) || (t4==xe && t2==ye && yk==r2))	{ ke=2; }
if((t3==xf && t1==yf && yk==r1)  || (t3==xf && t2==yf && yk==r2) || (t4==xf && t1==yf && yk==r1) || (t4==xf && t2==yf && yk==r2))	{ kf=2; }
if((t3==xg && t1==yg && yk==r1)  || (t3==xg && t2==yg && yk==r2) || (t4==xg && t1==yg && yk==r1) || (t4==xg && t2==yg && yk==r2))	{ kg=2; }
if((t3==xh && t1==yh && yk==r1)  || (t3==xh && t2==yh && yk==r2) || (t4==xh && t1==yh && yk==r1) || (t4==xh && t2==yh && yk==r2))	{ kh=2; }
    }
			 clrscr(); tablero();  if(kk==0) { kk=1;} if(xk==7) {kk=3;}
fA(xa,ya,ka); fB(xb,yb,kb); fC(xc,yc,kc); fD(xd,yd,kd); fE(xe,ye,ke);
fF(xf,yf,kf); fG(xg,yg,kg); fH(xh,yh,kh);

fI(xi,yi,ki);  fJ(xj,yj,kj); fK(xk,yk,kk); fL(xl,yl,kl); fM(xm,ym,km);
fN(xn,yn,kn); fO(xo,yo,ko); fP(xp,yp,kp);
		break;

 case 'l': case 'L' :  L--;    if(cod==5) {ZL--;}
					for(k=0; k<8; k++)
					 { if(yl==Y[k]) {t1=Y[k-1]; t2=Y[k+1]; r1=Y[k-2]; r2=Y[k+2];}
					   if(xl==X[k]) {t3=X[k-1]; t4=X[k+1]; r3=X[k-2]; r4=X[k+2]; }}
				 if(cod!=5 && kl!=3)
 				 {  for(;;)
	{  if(yl==t1 || yl==t2) {break;}
	gotoxy(30,36); cout<<"ingrese casilla:      "; gotoxy(48,36); cin>>yl;   }  xl=X[L+ZL];}

			if(kl==3 && cod!=5)
	  { for(;;)
	{  if((yl==t1 || yl==t2) && (xl==t3 || xl==t4)) {break;}
	gotoxy(30,36); cout<<"ingreses casillas:   y,   x"; gotoxy(49,36); cin>>yl;  gotoxy(54,36); cin>>xl; }   }


       			if(cod==5 && kl!=3)
		  { for(;;)
		{  if(yl==r1 || yl==r2) {break;}
			gotoxy(30,36); cout<<"ingrese casilla:      "; gotoxy(48,36);  cin>>yl;

		 if((X[L+ZL+1]==xa && t1==ya && yl==r1) || (X[L+ZL+1]==xa && t2==ya  && yl==r2))   { ka=2; }
		 if((X[L+ZL+1]==xb && t1==yb && yl==r1) || (X[L+ZL+1]==xb && t2==yb  && yl==r2))   { kb=2; }
		 if((X[L+ZL+1]==xc && t1==yc && yl==r1) || (X[L+ZL+1]==xc && t2==yc  && yl==r2))   { kc=2; }
		 if((X[L+ZL+1]==xd && t1==yd && yl==r1) || (X[L+ZL+1]==xd && t2==yd  && yl==r2))   { kd=2; }
		 if((X[L+ZL+1]==xe && t1==ye && yl==r1) || (X[L+ZL+1]==xe && t2==ye  && yl==r2))   { ke=2; }
		 if((X[L+ZL+1]==xf && t1==yf && yl==r1) || (X[L+ZL+1]==xf && t2==yf  && yl==r2))   { kf=2; }
		 if((X[L+ZL+1]==xg && t1==yg && yl==r1) || (X[L+ZL+1]==xg && t2==yg  && yl==r2))   { kg=2; }
		 if((X[L+ZL+1]==xh && t1==yh && yl==r1) || (X[L+ZL+1]==xh && t2==yh  && yl==r2))   { kh=2; }

		 }
		 xl=X[L+ZL]; }


		  if(cod==5 && kl==3)
		 { for(;;)
	{  	gotoxy(30,36);cout<<"ingreses casillas:   y,   x"; gotoxy(49,36); cin>>yl; gotoxy(54,36); cin>>xl;
		if((yl==r1 || yl==r2) && (xl==r3 || xl==r4)) {break;}          }
if((t3==xa && t1==ya && yl==r1)  || (t3==xa && t2==ya && yl==r2) || (t4==xa && t1==ya && yl==r1) || (t4==xa && t2==ya && yl==r2))	{ ka=2; }
if((t3==xb && t1==yb && yl==r1)  || (t3==xb && t2==yb && yl==r2) || (t4==xb && t1==yb && yl==r1) || (t4==xb && t2==yb && yl==r2))	{ kb=2; }
if((t3==xc && t1==yc && yl==r1)  || (t3==xc && t2==yc && yl==r2) || (t4==xc && t1==yc && yl==r1) || (t4==xc && t2==yc && yl==r2))	{ kc=2; }
if((t3==xd && t1==yd && yl==r1)  || (t3==xd && t2==yd && yl==r2) || (t4==xd && t1==yd && yl==r1) || (t4==xd && t2==yd && yl==r2))	{ kd=2; }
if((t3==xe && t1==ye && yl==r1)  || (t3==xe && t2==ye && yl==r2) || (t4==xe && t1==ye && yl==r1) || (t4==xe && t2==ye && yl==r2))	{ ke=2; }
if((t3==xf && t1==yf && yl==r1)  || (t3==xf && t2==yf && yl==r2) || (t4==xf && t1==yf && yl==r1) || (t4==xf && t2==yf && yl==r2))	{ kf=2; }
if((t3==xg && t1==yg && yl==r1)  || (t3==xg && t2==yg && yl==r2) || (t4==xg && t1==yg && yl==r1) || (t4==xg && t2==yg && yl==r2))	{ kg=2; }
if((t3==xh && t1==yh && yl==r1)  || (t3==xh && t2==yh && yl==r2) || (t4==xh && t1==yh && yl==r1) || (t4==xh && t2==yh && yl==r2))	{ kh=2; }
    }

		clrscr(); tablero();  if(kl==0) { kl=1;} if(xl==7) {kl=3;}
fA(xa,ya,ka); fB(xb,yb,kb); fC(xc,yc,kc); fD(xd,yd,kd); fE(xe,ye,ke); fF(xf,yf,kf); fG(xg,yg,kg); fH(xh,yh,kh);

fI(xi,yi,ki);  fJ(xj,yj,kj); fK(xk,yk,kk); fL(xl,yl,kl); fM(xm,ym,km); fN(xn,yn,kn); fO(xo,yo,ko); fP(xp,yp,kp);
		break;

 case 'm': case 'M': M--; if(cod==5) {ZM--;} for(k=0; k<8; k++)
					 { if(ym==Y[k]) {t1=Y[k-1]; t2=Y[k+1]; r1=Y[k-2]; r2=Y[k+2];}
					  if(xm==X[k]) {t3=X[k-1]; t4=X[k+1]; r3=X[k-2]; r4=X[k+2];}} 
				  if(cod!=5 && km!=3)
			{   for(;;)
			{ if(ym==t1 || ym==t2){break;}
			gotoxy(30,36); cout<<"ingrese casilla:      "; gotoxy(48,36); cin>>ym;  }

			xm=X[M+ZM]; }
         		
			if(km==3 && cod!=5)
	  { for(;;)
	{  if((ym==t1 || ym==t2) && (xm==t3 || xm==t4)) {break;}
	gotoxy(30,36); cout<<"ingreses casillas:   y,   x"; gotoxy(49,36); cin>>ym;  gotoxy(54,36); cin>>xm; }   }
	

			if(cod==5 && km!=3)
		  { for(;;)
		{  if(ym==r1 || ym==r2) {break;}
			gotoxy(30,36); cout<<"ingrese casilla:      "; gotoxy(48,36);  cin>>ym;

		 if((X[M+ZM+1]==xa && t1==ya && ym==r1) || (X[M+ZM+1]==xa && t2==ya  && ym==r2))   { ka=2; }
		 if((X[M+ZM+1]==xb && t1==yb && ym==r1) || (X[M+ZM+1]==xb && t2==yb  && ym==r2))   { kb=2; }
		 if((X[M+ZM+1]==xc && t1==yc && ym==r1) || (X[M+ZM+1]==xc && t2==yc  && ym==r2))   { kc=2; }
		 if((X[M+ZM+1]==xd && t1==yd && ym==r1) || (X[M+ZM+1]==xd && t2==yd  && ym==r2))   { kd=2; }
		 if((X[M+ZM+1]==xe && t1==ye && ym==r1) || (X[M+ZM+1]==xe && t2==ye  && ym==r2))   { ke=2; }
		 if((X[M+ZM+1]==xf && t1==yf && ym==r1) || (X[M+ZM+1]==xf && t2==yf  && ym==r2))   { kf=2; }
		 if((X[M+ZM+1]==xg && t1==yg && ym==r1) || (X[M+ZM+1]==xg && t2==yg  && ym==r2))   { kg=2; }
		 if((X[M+ZM+1]==xh && t1==yh && ym==r1) || (X[M+ZM+1]==xh && t2==yh  && ym==r2))   { kh=2; }

		 }
		 xm=X[M+ZM];	 }

		if(cod==5 && km==3)
		 { for(;;)
	{  	gotoxy(30,36);cout<<"ingreses casillas:   y,   x"; gotoxy(49,36); cin>>ym; gotoxy(54,36); cin>>xm;
		if((ym==r1 || ym==r2) && (xm==r3 || xm==r4)) {break;}          }
if((t3==xa && t1==ya && ym==r1)  || (t3==xa && t2==ya && ym==r2) || (t4==xa && t1==ya && ym==r1) || (t4==xa && t2==ya && ym==r2))	{ ka=2; }
if((t3==xb && t1==yb && ym==r1)  || (t3==xb && t2==yb && ym==r2) || (t4==xb && t1==yb && ym==r1) || (t4==xb && t2==yb && ym==r2))	{ kb=2; }
if((t3==xc && t1==yc && ym==r1)  || (t3==xc && t2==yc && ym==r2) || (t4==xc && t1==yc && ym==r1) || (t4==xc && t2==yc && ym==r2))	{ kc=2; }
if((t3==xd && t1==yd && ym==r1)  || (t3==xd && t2==yd && ym==r2) || (t4==xd && t1==yd && ym==r1) || (t4==xd && t2==yd && ym==r2))	{ kd=2; }
if((t3==xe && t1==ye && ym==r1)  || (t3==xe && t2==ye && ym==r2) || (t4==xe && t1==ye && ym==r1) || (t4==xe && t2==ye && ym==r2))	{ ke=2; }
if((t3==xf && t1==yf && ym==r1)  || (t3==xf && t2==yf && ym==r2) || (t4==xf && t1==yf && ym==r1) || (t4==xf && t2==yf && ym==r2))	{ kf=2; }
if((t3==xg && t1==yg && ym==r1)  || (t3==xg && t2==yg && ym==r2) || (t4==xg && t1==yg && ym==r1) || (t4==xg && t2==yg && ym==r2))	{ kg=2; }
if((t3==xh && t1==yh && ym==r1)  || (t3==xh && t2==yh && ym==r2) || (t4==xh && t1==yh && ym==r1) || (t4==xh && t2==yh && ym==r2))	{ kh=2; }
    }
			 clrscr(); tablero();  if(km==0) { km=1;} if(xm==7) {km=3;}
fA(xa,ya,ka); fB(xb,yb,kb); fC(xc,yc,kc); fD(xd,yd,kd); fE(xe,ye,ke);
fF(xf,yf,kf); fG(xg,yg,kg); fH(xh,yh,kh);

fI(xi,yi,ki);  fJ(xj,yj,kj); fK(xk,yk,kk); fL(xl,yl,kl); fM(xm,ym,km);
fN(xn,yn,kn); fO(xo,yo,ko); fP(xp,yp,kp);
		break;


 case 'n': case 'N' :  N--;   if(cod==5) {ZN--;}
					for(k=0; k<8; k++)
					 { if(yn==Y[k]) {t1=Y[k-1]; t2=Y[k+1]; r1=Y[k-2]; r2=Y[k+2];}
					  if(xn==X[k]) {t3=X[k-1]; t4=X[k+1]; r3=X[k-2]; r4=X[k+2];}}
		 if(cod!=5 && kn!=3)
  {  for(;;)
	{  if(yn==t1 || yn==t2) {break;}
	gotoxy(30,36); cout<<"ingrese casilla:      "; gotoxy(48,36); cin>>yn;   }  xn=X[N+ZN];}
       			if(kn==3 && cod!=5)
	  { for(;;)
	{  if((yn==t1 || yn==t2) && (xn==t3 || xn==t4)) {break;}
	gotoxy(30,36); cout<<"ingreses casillas:   y,   x"; gotoxy(49,36); cin>>yn;  gotoxy(54,36); cin>>xn; }   }

			if(cod==5 && kn!=3)
		  { for(;;)
		{  if(yn==r1 || yn==r2) {break;}
			gotoxy(30,36); cout<<"ingrese casilla:      "; gotoxy(48,36);  cin>>yn;

		 if((X[N+ZN+1]==xa && t1==ya && yn==r1) || (X[N+ZN+1]==xa && t2==ya  && yn==r2))   { ka=2; }
		 if((X[N+ZN+1]==xb && t1==yb && yn==r1) || (X[N+ZN+1]==xb && t2==yb  && yn==r2))   { kb=2; }
		 if((X[N+ZN+1]==xc && t1==yc && yn==r1) || (X[N+ZN+1]==xc && t2==yc  && yn==r2))   { kc=2; }
		 if((X[N+ZN+1]==xd && t1==yd && yn==r1) || (X[N+ZN+1]==xd && t2==yd  && yn==r2))   { kd=2; }
		 if((X[N+ZN+1]==xe && t1==ye && yn==r1) || (X[N+ZN+1]==xe && t2==ye  && yn==r2))   { ke=2; }
		 if((X[N+ZN+1]==xf && t1==yf && yn==r1) || (X[N+ZN+1]==xf && t2==yf  && yn==r2))   { kf=2; }
		 if((X[N+ZN+1]==xg && t1==yg && yn==r1) || (X[N+ZN+1]==xg && t2==yg  && yn==r2))   { kg=2; }
		 if((X[N+ZN+1]==xh && t1==yh && yn==r1) || (X[N+ZN+1]==xh && t2==yh  && yn==r2))   { kh=2; }

		 }
		 xn=X[N+ZN];	 }
		
			if(cod==5 && kn==3)
		 { for(;;)
	{  	gotoxy(30,36);cout<<"ingreses casillas:   y,   x"; gotoxy(49,36); cin>>yn; gotoxy(54,36); cin>>xn;
		if((yn==r1 || yn==r2) && (xn==r3 || xn==r4)) {break;}          }
if((t3==xa && t1==ya && yn==r1)  || (t3==xa && t2==ya && yn==r2) || (t4==xa && t1==ya && yn==r1) || (t4==xa && t2==ya && yn==r2))	{ ka=2; }
if((t3==xb && t1==yb && yn==r1)  || (t3==xb && t2==yb && yn==r2) || (t4==xb && t1==yb && yn==r1) || (t4==xb && t2==yb && yn==r2))	{ kb=2; }
if((t3==xc && t1==yc && yn==r1)  || (t3==xc && t2==yc && yn==r2) || (t4==xc && t1==yc && yn==r1) || (t4==xc && t2==yc && yn==r2))	{ kc=2; }
if((t3==xd && t1==yd && yn==r1)  || (t3==xd && t2==yd && yn==r2) || (t4==xd && t1==yd && yn==r1) || (t4==xd && t2==yd && yn==r2))	{ kd=2; }
if((t3==xe && t1==ye && yn==r1)  || (t3==xe && t2==ye && yn==r2) || (t4==xe && t1==ye && yn==r1) || (t4==xe && t2==ye && yn==r2))	{ ke=2; }
if((t3==xf && t1==yf && yn==r1)  || (t3==xf && t2==yf && yn==r2) || (t4==xf && t1==yf && yn==r1) || (t4==xf && t2==yf && yn==r2))	{ kf=2; }
if((t3==xg && t1==yg && yn==r1)  || (t3==xg && t2==yg && yn==r2) || (t4==xg && t1==yg && yn==r1) || (t4==xg && t2==yg && yn==r2))	{ kg=2; }
if((t3==xh && t1==yh && yn==r1)  || (t3==xh && t2==yh && yn==r2) || (t4==xh && t1==yh && yn==r1) || (t4==xh && t2==yh && yn==r2))	{ kh=2; }
}

		clrscr(); tablero();  if(kn==0) { kn=1;}  if(xn==7) {kn=3;}
fA(xa,ya,ka); fB(xb,yb,kb); fC(xc,yc,kc); fD(xd,yd,kd); fE(xe,ye,ke);
fF(xf,yf,kf); fG(xg,yg,kg); fH(xh,yh,kh);

fI(xi,yi,ki);  fJ(xj,yj,kj); fK(xk,yk,kk); fL(xl,yl,kl); fM(xm,ym,km);
fN(xn,yn,kn); fO(xo,yo,ko); fP(xp,yp,kp);
		break;

 case 'o': case 'O': O--; if(cod==5) {ZO--;}for(k=0; k<8; k++)
					 { if(yo==Y[k]) {t1=Y[k-1]; t2=Y[k+1]; r1=Y[k-2]; r2=Y[k+2]; }
					   if(xo==X[k]) {t3=X[k-1]; t4=X[k+1]; r3=X[k-2]; r4=X[k+2];}} 
				  if(cod!=5 && ko!=3)
			{   for(;;)
			{ if(yo==t1 || yo==t2){break;}
			gotoxy(30,36); cout<<"ingrese casilla:      "; gotoxy(48,36); cin>>yo;  }
			  xo=X[O+ZO]; }

		 if(ko==3 && cod!=5)
	  { for(;;)
	{  if((yo==t1 || yo==t2) && (xo==t3 || xo==t4)) {break;}
	gotoxy(30,36); cout<<"ingreses casillas:   y,   x"; gotoxy(49,36); cin>>yo;  gotoxy(54,36); cin>>xo; }   }



		   if(cod==5 && ko!=3)
		  { for(;;)
		{  if(yo==r1 || yo==r2) {break;}
			gotoxy(30,36); cout<<"ingrese casilla:      "; gotoxy(48,36);  cin>>yo;

		 if((X[O+ZO+1]==xa && t1==ya && yo==r1) || (X[O+ZO+1]==xa && t2==ya  && yo==r2))   { ka=2; }
		 if((X[O+ZO+1]==xb && t1==yb && yo==r1) || (X[O+ZO+1]==xb && t2==yb  && yo==r2))   { kb=2; }
		 if((X[O+ZO+1]==xc && t1==yc && yo==r1) || (X[O+ZO+1]==xc && t2==yc  && yo==r2))   { kc=2; }
		 if((X[O+ZO+1]==xd && t1==yd && yo==r1) || (X[O+ZO+1]==xd && t2==yd  && yo==r2))   { kd=2; }
		 if((X[O+ZO+1]==xe && t1==ye && yo==r1) || (X[O+ZO+1]==xe && t2==ye  && yo==r2))   { ke=2; }
		 if((X[O+ZO+1]==xf && t1==yf && yo==r1) || (X[O+ZO+1]==xf && t2==yf  && yo==r2))   { kf=2; }
		 if((X[O+ZO+1]==xg && t1==yg && yo==r1) || (X[O+ZO+1]==xg && t2==yg  && yo==r2))   { kg=2; }
		 if((X[O+ZO+1]==xh && t1==yh && yo==r1) || (X[O+ZO+1]==xh && t2==yh  && yo==r2))   { kh=2; }

		 }
		 xo=X[O+ZO];		 }

			if(cod==5 && ko==3)
		 { for(;;)
	{  	gotoxy(30,36);cout<<"ingreses casillas:   y,   x"; gotoxy(49,36); cin>>yo; gotoxy(54,36); cin>>xo;
		if((yo==r1 || yo==r2) && (xo==r3 || xo==r4)) {break;}          }
if((t3==xa && t1==ya && yo==r1)  || (t3==xa && t2==ya && yo==r2) || (t4==xa && t1==ya && yo==r1) || (t4==xa && t2==ya && yo==r2))	{ ka=2; }
if((t3==xb && t1==yb && yo==r1)  || (t3==xb && t2==yb && yo==r2) || (t4==xb && t1==yb && yo==r1) || (t4==xb && t2==yb && yo==r2))	{ kb=2; }
if((t3==xc && t1==yc && yo==r1)  || (t3==xc && t2==yc && yo==r2) || (t4==xc && t1==yc && yo==r1) || (t4==xc && t2==yc && yo==r2))	{ kc=2; }
if((t3==xd && t1==yd && yo==r1)  || (t3==xd && t2==yd && yo==r2) || (t4==xd && t1==yd && yo==r1) || (t4==xd && t2==yd && yo==r2))	{ kd=2; }
if((t3==xe && t1==ye && yo==r1)  || (t3==xe && t2==ye && yo==r2) || (t4==xe && t1==ye && yo==r1) || (t4==xe && t2==ye && yo==r2))	{ ke=2; }
if((t3==xf && t1==yf && yo==r1)  || (t3==xf && t2==yf && yo==r2) || (t4==xf && t1==yf && yo==r1) || (t4==xf && t2==yf && yo==r2))	{ kf=2; }
if((t3==xg && t1==yg && yo==r1)  || (t3==xg && t2==yg && yo==r2) || (t4==xg && t1==yg && yo==r1) || (t4==xg && t2==yg && yo==r2))	{ kg=2; }
if((t3==xh && t1==yh && yo==r1)  || (t3==xh && t2==yh && yo==r2) || (t4==xh && t1==yh && yo==r1) || (t4==xh && t2==yh && yo==r2))	{ kh=2; }
}

			 clrscr(); tablero();  if(ko==0) { ko=1;} if(xo==7) {ko=3;}
fA(xa,ya,ka); fB(xb,yb,kb); fC(xc,yc,kc); fD(xd,yd,kd); fE(xe,ye,ke);
fF(xf,yf,kf); fG(xg,yg,kg); fH(xh,yh,kh);

fI(xi,yi,ki);  fJ(xj,yj,kj); fK(xk,yk,kk); fL(xl,yl,kl); fM(xm,ym,km);
fN(xn,yn,kn); fO(xo,yo,ko); fP(xp,yp,kp);
		break;

 case 'p': case 'P' :  P--; if(cod==5) {ZP--;}
					for(k=0; k<8; k++)
					 { if(yp==Y[k]) {t1=Y[k-1]; t2=Y[k+1]; r1=Y[k-2]; r2=Y[k+2];}
					   if(xp==X[k]) {t3=X[k-1]; t4=X[k+1]; r3=X[k-2]; r4=X[k+2];}}
			 if(cod!=5 && kp!=3)
  		{  for(;;)
	{  if(yp==t1 || yp==t2) {break;}
	gotoxy(30,36); cout<<"ingrese casilla:      "; gotoxy(48,36); cin>>yp;   }  xp=X[P+ZP];}

		 if(kp==3 && cod!=5)
	  { for(;;)
	{  if((yp==t1 || yp==t2) && (xp==t3 || xp==t4)) {break;}
	gotoxy(30,36); cout<<"ingreses casillas:   y,   x"; gotoxy(49,36); cin>>yp;  gotoxy(54,36); cin>>xp; }   }

		if(cod==5 && kp!=3)
		  { for(;;)
		{  if(yp==r1 || yp==r2) {break;}
			gotoxy(30,36); cout<<"ingrese casilla:      "; gotoxy(48,36);  cin>>yp;

		 if((X[P+ZP+1]==xa && t1==ya && yp==r1) || (X[P+ZP+1]==xa && t2==ya  && yp==r2))   { ka=2; }
		 if((X[P+ZP+1]==xb && t1==yb && yp==r1) || (X[P+ZP+1]==xb && t2==yb  && yp==r2))   { kb=2; }
		 if((X[P+ZP+1]==xc && t1==yc && yp==r1) || (X[P+ZP+1]==xc && t2==yc  && yp==r2))   { kc=2; }
		 if((X[P+ZP+1]==xd && t1==yd && yp==r1) || (X[P+ZP+1]==xd && t2==yd  && yp==r2))   { kd=2; }
		 if((X[P+ZP+1]==xe && t1==ye && yp==r1) || (X[P+ZP+1]==xe && t2==ye  && yp==r2))   { ke=2; }
		 if((X[P+ZP+1]==xf && t1==yf && yp==r1) || (X[P+ZP+1]==xf && t2==yf  && yp==r2))   { kf=2; }
		 if((X[P+ZP+1]==xg && t1==yg && yp==r1) || (X[P+ZP+1]==xg && t2==yg  && yp==r2))   { kg=2; }
		 if((X[P+ZP+1]==xh && t1==yh && yp==r1) || (X[P+ZP+1]==xh && t2==yh  && yp==r2))   { kh=2; }

		 }
		 xp=X[P+ZP];	 }

		if(cod==5 && kp==3)
		 { for(;;)
	{  	gotoxy(30,36);cout<<"ingreses casillas:   y,   x"; gotoxy(49,36); cin>>yp; gotoxy(54,36); cin>>xp;
		if((yp==r1 || yp==r2) && (xp==r3 || xp==r4)) {break;}          }
if((t3==xa && t1==ya && yp==r1)  || (t3==xa && t2==ya && yp==r2) || (t4==xa && t1==ya && yp==r1) || (t4==xa && t2==ya && yp==r2))	{ ka=2; }
if((t3==xb && t1==yb && yp==r1)  || (t3==xb && t2==yb && yp==r2) || (t4==xb && t1==yb && yp==r1) || (t4==xb && t2==yb && yp==r2))	{ kb=2; }
if((t3==xc && t1==yc && yp==r1)  || (t3==xc && t2==yc && yp==r2) || (t4==xc && t1==yc && yp==r1) || (t4==xc && t2==yc && yp==r2))	{ kc=2; }
if((t3==xd && t1==yd && yp==r1)  || (t3==xd && t2==yd && yp==r2) || (t4==xd && t1==yd && yp==r1) || (t4==xd && t2==yd && yp==r2))	{ kd=2; }
if((t3==xe && t1==ye && yp==r1)  || (t3==xe && t2==ye && yp==r2) || (t4==xe && t1==ye && yp==r1) || (t4==xe && t2==ye && yp==r2))	{ ke=2; }
if((t3==xf && t1==yf && yp==r1)  || (t3==xf && t2==yf && yp==r2) || (t4==xf && t1==yf && yp==r1) || (t4==xf && t2==yf && yp==r2))	{ kf=2; }
if((t3==xg && t1==yg && yp==r1)  || (t3==xg && t2==yg && yp==r2) || (t4==xg && t1==yg && yp==r1) || (t4==xg && t2==yg && yp==r2))	{ kg=2; }
if((t3==xh && t1==yh && yp==r1)  || (t3==xh && t2==yh && yp==r2) || (t4==xh && t1==yh && yp==r1) || (t4==xh && t2==yh && yp==r2))	{ kh=2; }
}

		clrscr(); tablero();  if(kp==0) { kp=1;} if(xp==7) {kp=3;}
fA(xa,ya,ka); fB(xb,yb,kb); fC(xc,yc,kc); fD(xd,yd,kd); fE(xe,ye,ke); fF(xf,yf,kf); fG(xg,yg,kg); fH(xh,yh,kh);
fI(xi,yi,ki);  fJ(xj,yj,kj); fK(xk,yk,kk); fL(xl,yl,kl); fM(xm,ym,km); fN(xn,yn,kn); fO(xo,yo,ko); fP(xp,yp,kp);
		break;
		}	}
	  }
getch();
}



//FICHA A

void fA(int xa, int ya, int ka)
{ int a, b, c, d, e, g, h;

 if(ka==0)
 {for(xa=6; xa<=8; xa++)
	{ textcolor(LIGHTRED); gotoxy(xa,2); cprintf("*"); textcolor(LIGHTRED); gotoxy(xa,4); cprintf("*"); }

	for(ya=5; ya<=9; ya++)
	{ if(ya!=7) { textcolor(LIGHTRED); gotoxy(ya,3); cprintf("*"); } if(ya==7) {cout<<"A"; }         }
		  }

 if(ka==1)
{ c=xa-1; d=xa+1;
e=xa-2; b=xa+2;

g=ya-1; h=ya+1;
for(a=c; a<=d; a++)
{ textcolor(LIGHTRED); gotoxy(a,g); cprintf("*");  textcolor(LIGHTRED); gotoxy(a,h); cprintf("*");}
for(a=e; a<=b; a++)
{  if(a!=xa){ textcolor(LIGHTRED); gotoxy(a,ya); cprintf("*");} if(a==xa) {cout<<"A";}    }
	 }

  if(ka==3)
{  e=xa-2; b=xa+2; g=ya-1; h=ya+1;
  for(a=e; a<=b; a=a+2)
 { textcolor(LIGHTRED); gotoxy(a,g); cprintf("*"); }
 for(a=e; a<=b; a++)
 { if(a!=xa) { textcolor(LIGHTRED); gotoxy(a,ya); cprintf("*");} if(a==xa) {cout<<"A";}   }
 for(a=e; a<=b; a++)
 {textcolor(LIGHTRED); gotoxy(a,h); cprintf("*");}
 }
 }
//FICHA B

void fB  (int xb, int yb, int kb)
{ int a, c, d, e, g, h, b;



if(kb==0)
 {for(xb=15; xb<=17; xb++)
	{ textcolor(LIGHTRED); gotoxy(xb,6); cprintf("*");  textcolor(LIGHTRED); gotoxy(xb,8); cprintf("*"); }

	for(yb=14; yb<=18; yb++)
	{ if(yb!=16) {textcolor(LIGHTRED); gotoxy(yb,7); cprintf("*"); } if(yb==16) {cout<<"B"; }         }
		  }

 if(kb==1)
{c=xb-1; d=xb+1;
e=xb-2; b=xb+2;

g=yb-1; h=yb+1;
for(a=c; a<=d; a++)
{ textcolor(LIGHTRED); gotoxy(a,g); cprintf("*");  textcolor(LIGHTRED); gotoxy(a,h); cprintf("*");}
for(a=e; a<=b; a++)
{  if(a!=xb){ textcolor(LIGHTRED); gotoxy(a,yb); cprintf("*");} if(a==xb) {cout<<"B";} }
 }
  if(kb==3)
{  e=xb-2; b=xb+2; g=yb-1; h=yb+1;
  for(a=e; a<=b; a=a+2)
 { textcolor(LIGHTRED); gotoxy(a,g); cprintf("*"); }
 for(a=e; a<=b; a++)
 { if(a!=xb) { textcolor(LIGHTRED); gotoxy(a,yb); cprintf("*");} if(a==xb) {cout<<"B";}   }
 for(a=e; a<=b; a++)
 { textcolor(LIGHTRED); gotoxy(a,h); cprintf("*");}
 }
 }




//FICHA C

void fC(int xc, int yc, int kc)
{ int a, b, c, d, e, g, h;

 if(kc==0)
 {for(xc=6; xc<=8; xc++)
	{ textcolor(LIGHTRED); gotoxy(xc,10); cprintf("*"); textcolor(LIGHTRED); gotoxy(xc,12); cprintf("*"); }

	for(yc=5; yc<=9; yc++)
	{ if(yc!=7) {textcolor(LIGHTRED); gotoxy(yc,11); cprintf("*"); } if(yc==7) {cout<<"C"; }         }
		  }

 if(kc==1)
{ c=xc-1; d=xc+1;
e=xc-2; b=xc+2;

g=yc-1; h=yc+1;
for(a=c; a<=d; a++)
{ textcolor(LIGHTRED); gotoxy(a,g); cprintf("*");  textcolor(LIGHTRED); gotoxy(a,h); cprintf("*");}
for(a=e; a<=b; a++)
{  if(a!=xc){ textcolor(LIGHTRED); gotoxy(a,yc); cprintf("*");} if(a==xc) {cout<<"C";}    }

  }
  if(kc==3)
{  e=xc-2; b=xc+2; g=yc-1; h=yc+1;
  for(a=e; a<=b; a=a+2)
 { textcolor(LIGHTRED); gotoxy(a,g); cprintf("*"); }
 for(a=e; a<=b; a++)
 { if(a!=xc) { textcolor(LIGHTRED); gotoxy(a,yc); cprintf("*");} if(a==xc) {cout<<"C";}   }
 for(a=e; a<=b; a++)
 { textcolor(LIGHTRED); gotoxy(a,h); cprintf("*");}
 }
 }


//FICHA D

void fD  (int xd, int yd, int kd)
{ int a, c, d, e, g, h, b;



if(kd==0)
 {for(xd=15; xd<=17; xd++)
	{ textcolor(LIGHTRED); gotoxy(xd,14); cprintf("*"); textcolor(LIGHTRED); gotoxy(xd,16); cprintf("*"); }

	for(yd=14; yd<=18; yd++)
	{ if(yd!=16) { textcolor(LIGHTRED); gotoxy(yd,15); cprintf("*"); } if(yd==16) {cout<<"D"; }         }
		  }

 if(kd==1)
{c=xd-1; d=xd+1;
e=xd-2; b=xd+2;

g=yd-1; h=yd+1;
for(a=c; a<=d; a++)
{ textcolor(LIGHTRED); gotoxy(a,g); cprintf("*"); textcolor(LIGHTRED); gotoxy(a,h); cprintf("*");}
for(a=e; a<=b; a++)
{  if(a!=xd){ textcolor(LIGHTRED); gotoxy(a,yd); cprintf("*");} if(a==xd) {cout<<"D";} }
 }
  if(kd==3)
{  e=xd-2; b=xd+2; g=yd-1; h=yd+1;
  for(a=e; a<=b; a=a+2)
 { textcolor(LIGHTRED); gotoxy(a,g); cprintf("*"); }
 for(a=e; a<=b; a++)
 { if(a!=xd) { textcolor(LIGHTRED); gotoxy(a,yd); cprintf("*");} if(a==xd) {cout<<"D";}   }
 for(a=e; a<=b; a++)
 { textcolor(LIGHTRED); gotoxy(a,h); cprintf("*");}
 }
 }


//FICHA E
void fE(int xe, int ye, int ke)
{ int a, b, c, d, e, g, h;

 if(ke==0)
 {for(xe=6; xe<=8; xe++)
	{ textcolor(LIGHTRED); gotoxy(xe,18); cprintf("*"); textcolor(LIGHTRED); gotoxy(xe,20); cprintf("*"); }

	for(ye=5; ye<=9; ye++)
	{ if(ye!=7) { textcolor(LIGHTRED); gotoxy(ye,19); cprintf("*"); } if(ye==7) {cout<<"E"; }         }
		  }

 if(ke==1)
{ c=xe-1; d=xe+1;
e=xe-2; b=xe+2;

g=ye-1; h=ye+1;
for(a=c; a<=d; a++)
{ textcolor(LIGHTRED); gotoxy(a,g); cprintf("*");  textcolor(LIGHTRED); gotoxy(a,h); cprintf("*");}
for(a=e; a<=b; a++)
{  if(a!=xe){ textcolor(LIGHTRED); gotoxy(a,ye); cprintf("*");} if(a==xe) {cout<<"E";}    }

  }
  if(ke==3)
{  e=xe-2; b=xe+2; g=ye-1; h=ye+1;
  for(a=e; a<=b; a=a+2)
 { textcolor(LIGHTRED); gotoxy(a,g); cprintf("*"); }
 for(a=e; a<=b; a++)
 { if(a!=xe) { textcolor(LIGHTRED); gotoxy(a,ye); cprintf("*");} if(a==xe) {cout<<"E";}   }
 for(a=e; a<=b; a++)
 { textcolor(LIGHTRED); gotoxy(a,h); cprintf("*");}
 }
 }


//FICHA F

void fF  (int xf, int yf, int kf)
{ int a, c, d, e, g, h, b;

if(kf==0)
 {for(xf=15; xf<=17; xf++)
	{ textcolor(LIGHTRED); gotoxy(xf,22); cprintf("*"); textcolor(LIGHTRED); gotoxy(xf,24); cprintf("*"); }

	for(yf=14; yf<=18; yf++)
	{ if(yf!=16) { textcolor(LIGHTRED); gotoxy(yf,23); cprintf("*"); } if(yf==16) {cout<<"F"; }         }
		  }

 if(kf==1)
{c=xf-1; d=xf+1;
e=xf-2; b=xf+2;

g=yf-1; h=yf+1;
for(a=c; a<=d; a++)
{ textcolor(LIGHTRED); gotoxy(a,g); cprintf("*");  textcolor(LIGHTRED); gotoxy(a,h); cprintf("*");}
for(a=e; a<=b; a++)
{  if(a!=xf){ textcolor(LIGHTRED); gotoxy(a,yf); cprintf("*");} if(a==xf) {cout<<"F";} }
 }
 if(kf==3)
{  e=xf-2; b=xf+2; g=yf-1; h=yf+1;
  for(a=e; a<=b; a=a+2)
 { textcolor(LIGHTRED); gotoxy(a,g); cprintf("*"); }
 for(a=e; a<=b; a++)
 { if(a!=xf) { textcolor(LIGHTRED); gotoxy(a,yf); cprintf("*");} if(a==xf) {cout<<"F";}   }
 for(a=e; a<=b; a++)
 { textcolor(LIGHTRED); gotoxy(a,h); cprintf("*");}
 }
 }

//FICHA G

void fG(int xg, int yg, int kg)
{ int a, b, c, d, e, g, h;

 if(kg==0)
 {for(xg=6; xg<=8; xg++)
	{ textcolor(LIGHTRED); gotoxy(xg,26); cprintf("*"); textcolor(LIGHTRED); gotoxy(xg,28); cprintf("*"); }

	for(yg=5; yg<=9; yg++)
	{ if(yg!=7) { textcolor(LIGHTRED); gotoxy(yg,27); cprintf("*"); } if(yg==7) {cout<<"G"; }         }
		  }

 if(kg==1)
{ c=xg-1; d=xg+1;
e=xg-2; b=xg+2;

g=yg-1; h=yg+1;
for(a=c; a<=d; a++)
{ textcolor(LIGHTRED); gotoxy(a,g); cprintf("*");  textcolor(LIGHTRED); gotoxy(a,h); cprintf("*");}
for(a=e; a<=b; a++)
{  if(a!=xg){ textcolor(LIGHTRED); gotoxy(a,yg); cprintf("*");} if(a==xg) {cout<<"G";}    }

  }
 if(kg==3)
{  e=xg-2; b=xg+2; g=yg-1; h=yg+1;
  for(a=e; a<=b; a=a+2)
 { textcolor(LIGHTRED); gotoxy(a,g); cprintf("*"); }
 for(a=e; a<=b; a++)
 { if(a!=xg) { textcolor(LIGHTRED); gotoxy(a,yg); cprintf("*");} if(a==xg) {cout<<"G";}   }
 for(a=e; a<=b; a++)
 { textcolor(LIGHTRED); gotoxy(a,h); cprintf("*");}
 }
 }

//FICHA H

void fH  (int xh, int yh, int kh)
{ int a, c, d, e, g, h, b;

if(kh==0)
 {for(xh=15; xh<=17; xh++)
	{ textcolor(LIGHTRED); gotoxy(xh,30); cprintf("*"); textcolor(LIGHTRED); gotoxy(xh,32); cprintf("*"); }

	for(yh=14; yh<=18; yh++)
	{ if(yh!=16) { textcolor(LIGHTRED); gotoxy(yh,31); cprintf("*"); } if(yh==16) {cout<<"H"; }         }
		  }

 if(kh==1)
{c=xh-1; d=xh+1;
e=xh-2; b=xh+2;

g=yh-1; h=yh+1;
for(a=c; a<=d; a++)
{ textcolor(LIGHTRED); gotoxy(a,g); cprintf("*");  textcolor(LIGHTRED); gotoxy(a,h); cprintf("*");}
for(a=e; a<=b; a++)
{  if(a!=xh){ textcolor(LIGHTRED); gotoxy(a,yh); cprintf("*");} if(a==xh) {cout<<"H";} }
 }
 if(kh==3)
{  e=xh-2; b=xh+2; g=yh-1; h=yh+1;
  for(a=e; a<=b; a=a+2)
 { textcolor(LIGHTRED); gotoxy(a,g); cprintf("*"); }
 for(a=e; a<=b; a++)
 { if(a!=xh) { textcolor(LIGHTRED); gotoxy(a,yh); cprintf("*");} if(a==xh) {cout<<"H";}   }
 for(a=e; a<=b; a++)
 { textcolor(LIGHTRED); gotoxy(a,h); cprintf("*");}
 }
 }
//FICHAS DEL OTRO JUGADOR****************************************************************

//FICHA I

void fI(int xi, int yi, int ki)
{ int a, b, c, d, e, g, h;

 if(ki==0)
 {for(xi=65; xi<=67; xi++)
	{ textcolor(LIGHTBLUE); gotoxy(xi,2); cprintf("*"); textcolor(LIGHTBLUE); gotoxy(xi,4); cprintf("*"); }

	for(yi=64; yi<=68; yi++)
	{ if(yi!=66) { textcolor(LIGHTBLUE); gotoxy(yi,3); cprintf("*"); } if(yi==66) {cout<<"I"; }         }
		  }

  if(ki==1)
{ c=xi-1; d=xi+1;
e=xi-2; b=xi+2;

g=yi-1; h=yi+1;
for(a=c; a<=d; a++)
{ textcolor(LIGHTBLUE); gotoxy(a,g); cprintf("*");  textcolor(LIGHTBLUE); gotoxy(a,h); cprintf("*");}
for(a=e; a<=b; a++)
{  if(a!=xi){ textcolor(LIGHTBLUE); gotoxy(a,yi); cprintf("*");} if(a==xi) {cout<<"I";}    }

  }
 if(ki==3)
{  e=xi-2; b=xi+2; g=yi-1; h=yi+1;
  for(a=e; a<=b; a=a+2)
 { textcolor(LIGHTBLUE); gotoxy(a,g); cprintf("*"); }
 for(a=e; a<=b; a++)
 { if(a!=xi) { textcolor(LIGHTBLUE); gotoxy(a,yi); cprintf("*");} if(a==xi) {cout<<"I";}   }
 for(a=e; a<=b; a++)
 { textcolor(LIGHTBLUE); gotoxy(a,h); cprintf("*");}
 }
 }

//FICHA J

void fJ  (int xj, int yj, int kj)
{ int a, c, d, e, g, h, b;



if(kj==0)
 {for(xj=74; xj<=76; xj++)
	{ textcolor(LIGHTBLUE); gotoxy(xj,6); cprintf("*"); textcolor(LIGHTBLUE); gotoxy(xj,8); cprintf("*"); }

	for(yj=73; yj<=77; yj++)
	{ if(yj!=75) { textcolor(LIGHTBLUE); gotoxy(yj,7); cprintf("*"); } if(yj==75) {cout<<"J"; }         }
		  }

 if(kj==1)
{c=xj-1; d=xj+1;
e=xj-2; b=xj+2;

g=yj-1; h=yj+1;
for(a=c; a<=d; a++)
{ textcolor(LIGHTBLUE); gotoxy(a,g); cprintf("*");  textcolor(LIGHTBLUE); gotoxy(a,h); cprintf("*");}
for(a=e; a<=b; a++)
{  if(a!=xj){ textcolor(LIGHTBLUE); gotoxy(a,yj); cprintf("*");} if(a==xj) {cout<<"J";} }
 }
 if(kj==3)
{  e=xj-2; b=xj+2; g=yj-1; h=yj+1;
  for(a=e; a<=b; a=a+2)
 { textcolor(LIGHTBLUE); gotoxy(a,g); cprintf("*"); }
 for(a=e; a<=b; a++)
 { if(a!=xj) { textcolor(LIGHTBLUE); gotoxy(a,yj); cprintf("*");} if(a==xj) {cout<<"J";}   }
 for(a=e; a<=b; a++)
 { textcolor(LIGHTBLUE); gotoxy(a,h); cprintf("*");}
 }
 }

 //FICHA K

void fK(int xk, int yk, int kk)
{ int a, b, c, d, e, g, h;

 if(kk==0)
 {

 for(xk=65; xk<=67; xk++)
	{ textcolor(LIGHTBLUE); gotoxy(xk,10); cprintf("*"); textcolor(LIGHTBLUE); gotoxy(xk,12); cprintf("*"); }

	for(yk=64; yk<=68; yk++)
	{ if(yk!=66) { textcolor(LIGHTBLUE); gotoxy(yk,11); cprintf("*"); } if(yk==66) {cout<<"K"; }         }
		  }

 if(kk==1)
{ c=xk-1; d=xk+1;
e=xk-2; b=xk+2;

g=yk-1; h=yk+1;
for(a=c; a<=d; a++)
{ textcolor(LIGHTBLUE); gotoxy(a,g); cprintf("*");  textcolor(LIGHTBLUE); gotoxy(a,h); cprintf("*");}
for(a=e; a<=b; a++)
{  if(a!=xk){ textcolor(LIGHTBLUE); gotoxy(a,yk); cprintf("*");} if(a==xk) {cout<<"K";}    }

  }
	if(kk==3)
{  e=xk-2; b=xk+2; g=yk-1; h=yk+1;
  for(a=e; a<=b; a=a+2)
 { textcolor(LIGHTBLUE); gotoxy(a,g); cprintf("*"); }
 for(a=e; a<=b; a++)
 { if(a!=xk) { textcolor(LIGHTBLUE); gotoxy(a,yk); cprintf("*");} if(a==xk) {cout<<"K";}   }
 for(a=e; a<=b; a++)
 { textcolor(LIGHTBLUE); gotoxy(a,h); cprintf("*");}
 }
 }

  //FICHA L

void fL  (int xl, int yl, int kl)
{ int a, c, d, e, g, h, b;



if(kl==0)
 {for(xl=74; xl<=76; xl++)
	{ textcolor(LIGHTBLUE); gotoxy(xl,14); cprintf("*"); textcolor(LIGHTBLUE); gotoxy(xl,16); cprintf("*"); }

	for(yl=73; yl<=77; yl++)
	{ if(yl!=75) { textcolor(LIGHTBLUE); gotoxy(yl,15); cprintf("*"); } if(yl==75) {cout<<"L"; }         }
		  }

 if(kl==1)
{c=xl-1; d=xl+1;
e=xl-2; b=xl+2;

g=yl-1; h=yl+1;
for(a=c; a<=d; a++)
{ textcolor(LIGHTBLUE); gotoxy(a,g); cprintf("*");  textcolor(LIGHTBLUE); gotoxy(a,h); cprintf("*");}
for(a=e; a<=b; a++)
{  if(a!=xl){ textcolor(LIGHTBLUE); gotoxy(a,yl); cprintf("*");} if(a==xl) {cout<<"L";} }

 }
 if(kl==3)
{  e=xl-2; b=xl+2; g=yl-1; h=yl+1;
  for(a=e; a<=b; a=a+2)
 { textcolor(LIGHTBLUE); gotoxy(a,g); cprintf("*"); }
 for(a=e; a<=b; a++)
 { if(a!=xl) { textcolor(LIGHTBLUE); gotoxy(a,yl); cprintf("*");} if(a==xl) {cout<<"L";}   }
 for(a=e; a<=b; a++)
 { textcolor(LIGHTBLUE); gotoxy(a,h); cprintf("*");}
 }
 }

//FICHA M

void fM(int xm, int ym, int km)
{ int a, b, c, d, e, g, h;

 if(km==0)
 {for(xm=65; xm<=67; xm++)
	{ textcolor(LIGHTBLUE); gotoxy(xm,18); cprintf("*"); textcolor(LIGHTBLUE); gotoxy(xm,20); cprintf("*"); }

	for(ym=64; ym<=68; ym++)
	{ if(ym!=66) { textcolor(LIGHTBLUE); gotoxy(ym,19); cprintf("*"); } if(ym==66) {cout<<"M"; }         }
		  }

  if(km==1)
{ c=xm-1; d=xm+1;
e=xm-2; b=xm+2;

g=ym-1; h=ym+1;
for(a=c; a<=d; a++)
{ textcolor(LIGHTBLUE); gotoxy(a,g); cprintf("*");  textcolor(LIGHTBLUE); gotoxy(a,h); cprintf("*");}
for(a=e; a<=b; a++)
{  if(a!=xm){ textcolor(LIGHTBLUE); gotoxy(a,ym); cprintf("*");} if(a==xm) {cout<<"M";}    }

  }
 if(km==3)
{  e=xm-2; b=xm+2; g=ym-1; h=ym+1;
  for(a=e; a<=b; a=a+2)
 { textcolor(LIGHTBLUE); gotoxy(a,g); cprintf("*"); }
 for(a=e; a<=b; a++)
 { if(a!=xm) { textcolor(LIGHTBLUE); gotoxy(a,ym); cprintf("*");} if(a==xm) {cout<<"M";}   }
 for(a=e; a<=b; a++)
 { textcolor(LIGHTBLUE); gotoxy(a,h); cprintf("*");}
 }
 }

//FICHA N

void fN  (int xn, int yn, int kn)
{ int a, c, d, e, g, h, b;



if(kn==0)
 {for(xn=74; xn<=76; xn++)
	{ textcolor(LIGHTBLUE); gotoxy(xn,22); cprintf("*"); textcolor(LIGHTBLUE); gotoxy(xn,24); cprintf("*"); }

	for(yn=73; yn<=77; yn++)
	{ if(yn!=75) { textcolor(LIGHTBLUE); gotoxy(yn,23); cprintf("*"); } if(yn==75) {cout<<"N"; }         }
		  }

 if(kn==1)
{c=xn-1; d=xn+1;
e=xn-2; b=xn+2;

g=yn-1; h=yn+1;
for(a=c; a<=d; a++)
{ textcolor(LIGHTBLUE); gotoxy(a,g); cprintf("*");  textcolor(LIGHTBLUE); gotoxy(a,h); cprintf("*");}
for(a=e; a<=b; a++)
{  if(a!=xn){ textcolor(LIGHTBLUE); gotoxy(a,yn); cprintf("*");} if(a==xn) {cout<<"N";} }
 }
 if(kn==3)
{  e=xn-2; b=xn+2; g=yn-1; h=yn+1;
  for(a=e; a<=b; a=a+2)
 { textcolor(LIGHTBLUE); gotoxy(a,g); cprintf("*"); }
 for(a=e; a<=b; a++)
 { if(a!=xn) { textcolor(LIGHTBLUE); gotoxy(a,yn); cprintf("*");} if(a==xn) {cout<<"N";}   }
 for(a=e; a<=b; a++)
 { textcolor(LIGHTBLUE); gotoxy(a,h); cprintf("*");}
 }
 }

 //FICHA O

void fO(int xo, int yo, int ko)
{ int a, b, c, d, e, g, h;

 if(ko==0)
 {for(xo=65; xo<=67; xo++)
	{ textcolor(LIGHTBLUE); gotoxy(xo,26); cprintf("*"); textcolor(LIGHTBLUE); gotoxy(xo,28); cprintf("*"); }

	for(yo=64; yo<=68; yo++)
	{ if(yo!=66) { textcolor(LIGHTBLUE); gotoxy(yo,27); cprintf("*"); } if(yo==66) {cout<<"O"; }         }
		  }

 if(ko==1)
{ c=xo-1; d=xo+1;
e=xo-2; b=xo+2;

g=yo-1; h=yo+1;
for(a=c; a<=d; a++)
{ textcolor(LIGHTBLUE); gotoxy(a,g); cprintf("*");  textcolor(LIGHTBLUE); gotoxy(a,h); cprintf("*");}
for(a=e; a<=b; a++)
{  if(a!=xo){ textcolor(LIGHTBLUE); gotoxy(a,yo); cprintf("*");} if(a==xo) {cout<<"O";}    }

  }
 if(ko==3)
{  e=xo-2; b=xo+2; g=yo-1; h=yo+1;
  for(a=e; a<=b; a=a+2)
 { textcolor(LIGHTBLUE); gotoxy(a,g); cprintf("*"); }
 for(a=e; a<=b; a++)
 { if(a!=xo) { textcolor(LIGHTBLUE); gotoxy(a,yo); cprintf("*");} if(a==xo) {cout<<"O";}   }
 for(a=e; a<=b; a++)
 { textcolor(LIGHTBLUE); gotoxy(a,h); cprintf("*");}
 }
 }
//FICHA P

void fP  (int xp, int yp, int kp)
{ int a, c, d, e, g, h, b;



if(kp==0)
 {for(xp=74; xp<=76; xp++)
	{ textcolor(LIGHTBLUE); gotoxy(xp,30); cprintf("*"); textcolor(LIGHTBLUE); gotoxy(xp,32); cprintf("*"); }

	for(yp=73; yp<=77; yp++)
	{ if(yp!=75) { textcolor(LIGHTBLUE); gotoxy(yp,31); cprintf("*"); } if(yp==75) {cout<<"P"; }         }
		  }

 if(kp==1)
{c=xp-1; d=xp+1;
e=xp-2; b=xp+2;

g=yp-1; h=yp+1;
for(a=c; a<=d; a++)
{ textcolor(LIGHTBLUE); gotoxy(a,g); cprintf("*");  textcolor(BLUE); gotoxy(a,h); cprintf("*");}
for(a=e; a<=b; a++)
{  if(a!=xp){ textcolor(LIGHTBLUE); gotoxy(a,yp); cprintf("*");} if(a==xp) {cout<<"P";} }
 }
 if(kp==3)
{  e=xp-2; b=xp+2; g=yp-1; h=yp+1;
  for(a=e; a<=b; a=a+2)
 { textcolor(LIGHTBLUE); gotoxy(a,g); cprintf("*"); }
 for(a=e; a<=b; a++)
 { if(a!=xp) { textcolor(LIGHTBLUE); gotoxy(a,yp); cprintf("*");} if(a==xp) {cout<<"P";}   }
 for(a=e; a<=b; a++)
 { textcolor(LIGHTBLUE); gotoxy(a,h); cprintf("*");}
 }
 }



	 void tablero()
{  int r, t, u, o, s, f, l;
 for(r=3;r<=79; r++)
{
gotoxy(r,1);
cout<<"-";
gotoxy(r,33);
cout<<"-";
}



for(o=5; o<=33; o=o+4)
{
for(u=4; u<=78; u++)

{gotoxy(u,o);
 cout<<"-"; }
}

for(s=11; s<=75; s=s+10)
{	for(f=2; f<=32; f++)
	{gotoxy(s,f);
	cout<<"|"; }
}


for(t=2; t<=32; t++)
{
gotoxy(3,t);
cout<<"|";
gotoxy(79,t);
cout<<"|";

 }


gotoxy(7,34); cout<<"7"; gotoxy(15,34); cout<<"16";  gotoxy(25,34); cout<<"26";
gotoxy(35,34); cout<<"36";  gotoxy(45,34); cout<<"46"; gotoxy(55,34); cout<<"56";
gotoxy(65,34); cout<<"66";   gotoxy(74,34); cout<<"75";

for(l=3; l<=31; l=l+4)
{ gotoxy(1,l); cout<<l; }

  gotoxy(3,35); cout<<"JUGADOR 2"; gotoxy(69,35); cout<<"JUGADOR 1";

  }
int inicio()
{ int prin;
do{  clrscr();
textcolor(LIGHTGREEN); gotoxy(50,5); cprintf("JUEGO DE DAMAS"); textcolor(LIGHTCYAN); gotoxy(20,8); cprintf("1. EMPEZAR");
 textcolor(LIGHTCYAN); gotoxy(50,8); cprintf("2. INSTRUCCIONES"); textcolor(LIGHTCYAN); gotoxy(80,8); cprintf("3. SALIR");
gotoxy(50,10); printf("opcion:_"); gotoxy(57,10); cin>>prin;

switch(prin)
{ case 1: return prin; break;
  case 2:  clrscr(); gotoxy(30,5); printf("INSTRUCCIONES");
  	gotoxy(3,7); printf("El jugador de las fichas azules es el primero en jugar, las fichas solo se pueden mover hacia");
   gotoxy(3,8); printf("adelante en diagonal y comen en diagonal, el orden de la jugada es:");
	gotoxy(3,9); printf("ficha a mover en donde se ecoge la letra de la ficha.");
	gotoxy(3,10); printf("ingrese codigo: 5 cuando desea comer una ficha y 2 para cambiar de ficha y si no cualquier otro");
	gotoxy(3,11); printf("ingrese casilla= ingresa el numero de la casilla con respecto a Y que se vera al lado del ");
	gotoxy(3,12); printf("tablero. Cuando una de sus fichas llegue al otro extremo del tablero se volvera reina y se ");
   gotoxy(3,13); printf("podra mover hacia atras y adelante en diagonal, si uno de los jugadores se come todas las ");
   gotoxy(3,14); printf("fichas de su oponente gana el juego");
textcolor(LIGHTMAGENTA); gotoxy(5,16); cprintf("ADVERTENCIA: NO SE PUEDE INGRESAR SIMBOLOS YA QUE EL JUEGO SE TRABARIA, ");
textcolor(LIGHTMAGENTA); gotoxy(5,17); cprintf("SI INGRESA UN NUMERO EN FICHA A MOVER PIERDE EL TURNO.");
textcolor(LIGHTMAGENTA); gotoxy(5,18); cprintf("NO INGRESE LETRA EN INGRESAR CODIGO PORQUE SE TRABA.");
  getch();	break;
   case 3: break;
 }
  } while(prin!=3);
  return 0;
}
