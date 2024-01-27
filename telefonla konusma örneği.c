#include <stdio.h>
int main()
{

float konusma_sure, ucret;

printf ("konusma suresini giriniz ");
scanf("%f", &konusma_sure);

if(konusma_sure<=4){
 ucret= 0.30;
}
 else{
 ucret= 0.30+ (konusma_sure-4)* 0.07;
 }
 printf("ucret: %3.f TL\n\n" ,ucret);
 return 0;
}






