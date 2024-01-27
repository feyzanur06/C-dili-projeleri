#include <stdio.h>
int main()
{
 int sayi;
  printf("bir tamsayi giriniz:");
  scanf("%d" , &sayi);

  if(sayi % 2 ==0 ){
    printf("%d cifttir." , sayi);
}
  else{
     printf("%d tektir." ,sayi);
}
  return 0;
}
