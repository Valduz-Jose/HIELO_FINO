#include <stdio.h>
#include <stdlib.h>
#define iz 75
#define de 77
#define ar 72
#define ab 80
/* run this program using the console pauser or add your own getch, system("pause") or input loop */
typedef struct datos{
	char name[40];
	int puntaje;
};
void map(int matriz[8][15]);
void mapi(int matroz[15][19]);
int main(int argc, char *argv[]) {
struct datos a1;	
int mapita[8][15]={
{176,176,176,176,176,176,176,176,176,176,176,176,219,219,219},
{176,176,176,176,176,176,176,176,176,176,176,176,219,146,219},
{176,176,176,176,176,176,176,176,176,176,176,176,219,177,219},
{219,219,219,219,219,219,219,176,219,219,219,219,219,177,219},
{219,177,177,177,177,177,219,176,219,177,177,177,177,177,219},
{219,219,219,219,219,177,219,219,219,177,219,219,219,219,219},
{176,176,176,176,219,177,177,177,177,177,219,176,176,176,176},
{176,176,176,176,219,219,219,219,219,219,219,176,176,176,176},
};

int mapota[15][19]={
{219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219},
{219,190,177,177,177,177,177,177,177,177,177,177,177,177,177,177,177,177,219},
{219,177,177,177,178,178,178,178,178,178,178,178,177,177,177,177,178,177,219},
{219,177,177,177,177,177,177,177,177,177,177,177,177,177,177,177,178,177,219},
{219,177,177,177,177,177,177,219,219,219,219,219,219,177,177,177,178,177,219},
{219,177,177,177,177,177,177,219,219,177,219,219,178,178,177,177,178,177,219},
{219,177,177,177,177,177,177,219,219,177,219,219,178,178,177,177,177,177,219},
{219,177,177,177,177,177,177,177,177,177,177,177,177,177,177,177,177,177,219},
{219,177,177,177,177,177,177,177,177,177,177,177,177,177,177,177,177,177,219},
{219,177,177,177,177,177,177,219,219,219,177,177,177,177,219,219,219,177,219},
{219,184,177,177,177,177,177,177,177,177,177,177,177,177,219,177,219,177,219},
{219,177,219,219,219,177,177,219,219,219,177,177,177,177,219,146,219,177,219},
{219,177,219,219,177,177,178,178,177,177,177,177,177,177,219,219,219,177,219},
{219,177,177,177,177,177,177,177,177,177,177,177,177,177,177,177,177,177,219},
{219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219},
};

int q,w,c,i,es=1,er=13,Z;
char tecla;
c=0;
q=4, w=1;
i=0,Z=1;
while(Z==1){
printf("\t\t\tHIELO FINO");
printf("\n\n\t\tNombre:");
scanf("%s",&a1.name);
printf("\n\n\t\t\tEMPEZEMOS %s\n",a1.name);
system("PAUSE");
system("cls");
/*printf("nombre es %s",name);*/
a1.puntaje=0;
while(c==0){
	printf("\t\t\tHIELO FINO");
	printf("\t\t\tPUNTAJE: %d",a1.puntaje);
mapita[q][w]=2;	
	map(mapita);
		tecla=getch();
		mapita[q][w]=175;
		if(tecla==iz){	
		if(mapita[q][w-1]==177||mapita[q][w-1]==178||mapita[q][w-1]==146){
		w--;
		a1.puntaje++;
		}
				
		}
		if(tecla==de){
		if(mapita[q][w+1]==177||mapita[q][w+1]==178||mapita[q][w+1]==146){
		w++;
		a1.puntaje++;	
		}
			
		}
		if(tecla==ar){
		if(mapita[q-1][w]==177||mapita[q-1][w]==178||mapita[q-1][w]==146){
			q--;
		a1.puntaje++;
		}
		}
		if(tecla==ab){
		if(mapita[q+1][w]==177||mapita[q+1][w]==178||mapita[q+1][w]==146){
			q++;
			a1.puntaje++;
		}
			
			
		}
		if(mapita[es][er]==146&&mapita[2][er]==175){
		c=c+2;	
		}
	system("cls");
	
}
if(c==1){
	printf("\n\n\n\t\t\t RAYOS CAISTE EN EL AGUA\n\t\t\t TEN MAS CUIDADO LA PROXIMA VEZ...");
}
if(c==2){
printf("\n\n\n\t\t\tGANASTE!!!\n\t");
system("PAUSE");
c=c+1;
}
q=5,w=9;
while(c==3){
	printf("\t\t\tHIELO FINO");
	printf("\t\t\tPUNTAJE: %d",a1.puntaje);
mapota[q][w]=2;	
	mapi(mapota);
	
		tecla=getch();
		if(mapota[q][w+1]==177||mapota[q+1][w]==177||mapota[q-1][w]==177||mapota[q][w-1]==177){
			
		
		
		if(mapota[q][w]==178){
			mapota[q][w]==177;
		}
		else{
		mapota[q][w]=175;	
		}
		if(tecla==iz){	
		if(mapota[q][w-1]==177||mapota[q][w-1]==178||mapota[q][w-1]==146||mapota[q][w-1]==184||mapota[q][w-1]==190){
		
			w--;	
			a1.puntaje++;	
		}
			
		}
		if(tecla==de){
		if(mapota[q][w+1]==177||mapota[q][w+1]==178||mapota[q][w+1]==146||mapota[q][w+1]==184||mapota[q][w-1]==190){
		w++;
			a1.puntaje++;
		}
			
		}
		if(tecla==ar){
		if(mapota[q-1][w]==177||mapota[q-1][w]==178||mapota[q-1][w]==146||mapota[q-1][w]==184||mapota[q-1][w]==190){
			q--;
			a1.puntaje++;
		}
		}
		if(tecla==ab){
		if(mapota[q+1][w]==177||mapota[q+1][w]==178||mapota[q+1][w]==146||mapota[q+1][w]==184||mapota[q][w-1]==190){
			q++;
			a1.puntaje++;
		}
		
		}
		}
		else{
			c=c+2;
		}
		if((mapota[10][1]==184&&mapota[9][1]==175)||(mapota[10][1]==184&&mapota[10][2]==175)||(mapota[10][1]==184&&mapota[11][1]==175)){
		a1.puntaje=a1.puntaje+10;	
		}
		if((mapota[1][1]==190&&mapota[2][1]==175)||(mapota[1][1]==190&&mapota[1][2]==175)){
			mapota[10][14]=177;
		}
		if(mapota[11][15]==146&&mapota[10][15]==175){
		c=c+1;	
		}
	system("cls");
	
}
if(c==4){
printf("\n\n\n\t\tGANASTE\n\n");
printf("\t\t%s tu puntaje total fue: %d\n",a1.name,a1.puntaje);

}
if(c==5){
printf("\n\n\t\tHAS CAIDO AL AGUA\n\n");
Z=Z+1;
}
system("PAUSE");
system("cls");
}
/*mapi(mapota);*/

	return 0;
}
void map(int matriz[8][15]){
	int f,c;
	for(f=0;f<8;f++){
		printf("\n");
		for(c=0;c<15;c++){
			printf("%c",matriz[f][c]);
		}
	}
}
void mapi(int matroz[15][19]){
	int e,r;
	for(e=0;e<15;e++){
		printf("\n");
		for(r=0;r<19;r++){
			printf("%c",matroz[e][r]);
		}
	}
}

