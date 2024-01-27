#include <stdio.h>
#include <stdlib.h>

int main()
{
    int sayi;

    printf("bir sayi giriniz:");
    scanf("%d" , &sayi);

    switch(sayi%2){
    case 0: printf("%d sayisi cifttir" ,sayi);
    break;
    case 1: printf("%d sayisi tektir", sayi);
    break;


}

return 0;
}
