#include <stdio.h>
#include <stdlib.h>
#include <math.h>
int bnabdec();
int bdecabn();
int nsti[25],bini,pot,multi,updi,c,totali;
double multf,updf,totalf,resultado;
char nstc[25],y[]={"."},z[]={"\0"},letra[]={'A','B','C','D','E','F'};
int ord,i,j,mod,numi,cof,bdes,mi;
float numf,mult,mf;
char orden[25],val;
int main(){
printf("\nIngresa la base de origen: ");
scanf("%d",&bini);
printf("\nIngresa al cadena: ");
scanf("%s",&nstc[c]);
bnabdec();
printf("\nIngresa base destino: ");
scanf("%d",&bdes);
bdecabn();
}
int bnabdec(){
c=0;
do{
c++;
}while(nstc[c]!=y[0]);
pot=c-1;
totali=0;
c=0;
do{
if(bini==16&&nstc[c]==letra[0]||nstc[c]==letra[1]||nstc[c]==letra[2]||nstc[c]==letra[3]||nstc[c]==letra[4]||nstc[c]==letra[5]){
nsti[c]=nstc[c]-55;				
	} else {
nsti[c]=nstc[c]-48;
			}
multi=pow(bini,pot);
totali=(nsti[c]*multi)+totali;
c++;
pot--;
}while(nstc[c]!=y[0]);
pot=-1;
totalf=0;
c=c+1;
do{
if(bini==16&&nstc[c]==letra[0]||nstc[c]==letra[1]||nstc[c]==letra[2]||nstc[c]==letra[3]||nstc[c]==letra[4]||nstc[c]==letra[5]){
nsti[c]=nstc[c]-55;				
	} else {
nsti[c]=nstc[c]-48;		}
multf=pow(bini,pot);
totalf=(nsti[c]*multf)+totalf;
c++;
pot--;
}while(nstc[c]!=z[0]);
resultado=totali+totalf;
}
int bdecabn(){
numi=totali;
numf=totalf;
i=0;
while(numi>=bdes){
mod=numi%bdes;
if(bdes==16&&mod<10){
mod=mod+48;
}else 
if(bdes==16&&mod>=10){
mod=mod+55;
}else {
mod=mod+48;
}
orden[i]=mod;
cof=numi/bdes;
numi=cof;
i++;
}
if(bdes==16&&numi<10){
numi=numi+48;
}else 
if(bdes==16&&numi>=10){
numi=numi+55;
}else 
{
numi=numi+48;
}
orden[i]=numi;
printf("\nResultado: ");
for(j=i;j>=0;j--){	
printf("%c",orden[j]);
		}
printf(".");
do{
mult=numf*bdes;
mi=mult;
mf=mult-mi;
numf=mf;
val= int (mi);

	if(bdes==16&&mi<10){
		val=val+48;
			} else 
	if(bdes==16&&mi>=10){
		val=val+55;
			} else{
val=val+48;
			}
printf("%c",val);
				
	}while(numf!=0.0);
printf("\n\n");
}
