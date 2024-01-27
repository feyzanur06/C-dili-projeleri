#include <stdio.h>
int main()
{

char karakter;

 printf("bir karakter giriniz:");
 scanf("%c", &karakter);

 if((karakter>='A') && (karakter<= 'Z')){
 printf ("%c buyuk harftir", karakter);
 }
 else if ((karakter>='a') && (karakter<= 'z')){
printf ("%c kucuk harftir", karakter);
}
else{
 printf("%c bir harf degildir" , karakter);
 }
 return 0;


}


