#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main()
{

   double ortalama=0, numbers[3];

   printf("Uc sayi giriniz:");
   scanf("%lf%lf%lf", &numbers[0], &numbers[1], &numbers[2]);

   ortalama=(numbers[0]+numbers[1]+numbers[2])/3;
   printf("ortalama:%.3f\n", ortalama);

return 0;


}


