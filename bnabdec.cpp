#include <stdio.h>
#include <stdlib.h>
#include <math.h>
int numi[25],bini,pot,multi,updi,c,totali;
double multf,updf,totalf,resultado;
char num[25],y[]={"."},z[]={"\0"},letra[]={'A','B','C','D','E','F'};
int main(){
printf("\nIngresa la base de origen: ");
scanf("%d",&bini);
printf("\nIngresa al cadena: ");
scanf("%s",&num[c]);
c=0;
do{
c++;
}while(num[c]!=y[0]);
pot=c-1;
totali=0;
c=0;
do{
if(bini==16&&num[c]==letra[0]||num[c]==letra[1]||num[c]==letra[2]||num[c]==letra[3]||num[c]==letra[4]||num[c]==letra[5]){
numi[c]=num[c]-55;				
	} else {
numi[c]=num[c]-48;
			}
multi=pow(bini,pot);
totali=(numi[c]*multi)+totali;
c++;
pot--;
}while(num[c]!=y[0]);
pot=-1;
totalf=0;
c=c+1;
do{
if(bini==16&&num[c]==letra[0]||num[c]==letra[1]||num[c]==letra[2]||num[c]==letra[3]||num[c]==letra[4]||num[c]==letra[5]){
numi[c]=num[c]-55;				
	} else {
numi[c]=num[c]-48;		}
multf=pow(bini,pot);
totalf=(numi[c]*multf)+totalf;
c++;
pot--;
}while(num[c]!=z[0]);
resultado=totali+totalf;
printf("\nResultado: %10.10f\n\n",resultado);
}
