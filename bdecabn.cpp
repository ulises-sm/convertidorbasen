#include <stdio.h>
#include <stdlib.h>
int ord,i,j,mod,numi,cof,bdes,mi;
char letra[]={'A','B','C','D','E','F'},orden[25],val;
float numf,mult,mf;
int main(){
printf("\nIngresa el numero: ");
scanf("%d%f",&numi,&numf);
printf("\nIngresa base destino: ");
scanf("%d",&bdes);
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
