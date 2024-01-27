#include <stdlib.h>
int main()

{
    char harf;
     printf("bir harf giriniz:");
     scanf("%c, &harf");


    switch(harf){
    case'a':
    case'e':
    case'u':
    case'o':
    case'i': printf("%c sesli bir harfdir\n");


    default:printf("%c sessiz bir harfdir\n", harf);


}
return 0;

}
