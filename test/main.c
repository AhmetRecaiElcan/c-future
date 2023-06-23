#include <stdio.h>
#include <stdlib.h>

int main()
{
   int rakam1 ;
   int rakam2 ;
   char harf1 ;
   char harf2 ;

   printf("Lutfen Dogum Yilinzin Ilk Rakamini Giriniz: \n");
   scanf("%d",&rakam1);

   printf("Lutfen Dogum Yilinizin Son Rakamini Giriniz: \n");
   scanf("%d",&rakam2);

   printf("Lutfen Isminizin Bas Harfini Giriniz : \n");
   scanf(" %c",&harf1);

   printf("Lutfen Isminizin Son Harfini Giriniz : \n");
   scanf(" %c",&harf2);

   printf("Ilk Rakam :%d Son Rakam :%d Bas Harf :%c Son Harf :%c",rakam1,rakam2,harf1,harf2);
   return 0 ;
}
